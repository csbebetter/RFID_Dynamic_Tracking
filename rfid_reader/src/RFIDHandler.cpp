#include "RFIDHandler.h"
#include "ros/ros.h"


//cpp here
/*
*****************************************************************************
*                                                                           *
*                 IMPINJ CONFIDENTIAL AND PROPRIETARY                       *
*                                                                           *
* This source code is the sole property of Impinj, Inc.  Reproduction or    *
* utilization of this source code in whole or in part is forbidden without  *
* the prior written consent of Impinj, Inc.                                 *
*                                                                           *
* (c) Copyright Impinj, Inc. 2007,2009. All rights reserved.                *
*                                                                           *
*****************************************************************************//**
*****************************************************************************
**
** @file  example1.cpp
**
** @brief Simple example of LTKCPP that talks to an actual reader
**
** This is sometimes called the "LLRP Hello World" program
**
** The steps:
** 1.  Initialize Library
** 2.  Connect to Reader
** 3.  Enable Impinj Extensions
** 4.  Factory Default LLRP configuration to ensure that the reader is in
a known state (since we are relying on the default reader
configuration for this simple example)
** 5.  ADD_ROSPEC to tell the reader to perform an inventory
** 6.  ENABLE_ROSPEC
** 7.  START_ROSPEC start the inventory operation
** 8.  Process RFID Data (EPC, RSSI, Timestamp)
**
** This program can be run with zero, one, or two verbose options (-v).
**     no -v -- Only prints the tag report and errors
**     -v    -- Also prints one line progress messages
**     -vv   -- Also prints all LLRP messages as XML text
**
*****************************************************************************/
//#include "time.h"



/**
*****************************************************************************
**
** @brief  Run the application
**
** The steps:
**     - Instantiate connection
**     - Connect to LLRP reader (TCP)
**     - Make sure the connection status is good
**     - Clear (scrub) the reader configuration
**     - Configure for what we want to do
**     - Run inventory operation 5 times
**     - Again, clear (scrub) the reader configuration
**     - Disconnect from reader
**     - Destruct connection
**
** @param[in]  pReaderHostName String with reader name
**
** @return      0              Everything worked.
**             -1              Failed allocation of type registry
**             -2              Failed construction of connection
**             -3              Could not connect to reader
**              1              Reader connection status bad
**              2              Impinj Extension enable failed
**              3              Cleaning reader config failed
**              4              Adding ROSpec failed
**              5              Enabling ROSpec failed
**              6              Start ROSpec failed
**              7              Something went wrong running the ROSpec
**              8              Stopping ROSpec failed
**
*****************************************************************************/

int
CMyApplication::run(
char *                        pReaderHostName)
{
	CTypeRegistry *             pTypeRegistry;
	CConnection *               pConn;
	int                         rc;

	/*
	* Allocate the type registry. This is needed
	* by the connection to decode.
	* 分配类型注册表。 这是需要的
	* 通过连接来解码。
	*/
	pTypeRegistry = getTheTypeRegistry();
	if (NULL == pTypeRegistry)
	{
		printf("ERROR: getTheTypeRegistry failed\n");
		return -1;
	}

	/*
	* Enroll impinj extension types into the
	* type registry, in preparation for using
	* Impinj extension params.
	* 将 impinj 扩展类型注册到
	* 输入注册表，准备使用
	* Impinj 扩展参数。
	*/
	LLRP::enrollImpinjTypesIntoRegistry(pTypeRegistry);

	/*
	* Construct a connection (LLRP::CConnection).
	* Using a 32kb max frame size for send/recv.
	* The connection object is ready for business
	* but not actually connected to the reader yet.
	* 构造一个连接（LLRP::CConnection）。
	* 使用 32kb 最大帧大小进行发送/接收。
	* 连接对象已准备好进行业务
	* 但尚未真正连接到阅读器。
	*/
	pConn = new CConnection(pTypeRegistry, 32u * 1024u);
	if (NULL == pConn)
	{
		printf("ERROR: new CConnection failed\n");
		return -2;
	}

	/*
	* Open the connection to the reader
	* 打开与阅读器的连接
	*/
	if (m_Verbose)
	{
		printf("INFO: Connecting to %s....\n", pReaderHostName);
	}

	rc = pConn->openConnectionToReader(pReaderHostName);
	if (0 != rc)
	{
		printf("ERROR: connect: %s (%d)\n", pConn->getConnectError(), rc);
		delete pConn;
		return -3;
	}

	/*
	* Record the pointer to the connection object so other
	* routines can use it.
	* 记录指向连接对象的指针以便其他
	* 例程可以使用它。
	*/
	m_pConnectionToReader = pConn;

	if (m_Verbose)
	{
		printf("INFO: Connected, checking status....\n");
	}

	/*
	* Commence the sequence and check for errors as we go.
	* See comments for each routine for details.
	* Each routine prints messages.
	* 开始序列并检查错误。
	* 有关详细信息，请参阅每个例程的注释。
	* 每个例程都会打印消息。
	*/
	rc = 1;
	if (0 == checkConnectionStatus())
	{
		rc = 2;
		if (0 == enableImpinjExtensions())
		{

			rc = 3;
			if (0 == resetConfigurationToFactoryDefaults())
			{
				rc = 4;
				//getReaderCapabilities();
				if (0 == setImpinjReaderConfig())
				{
					rc = 9;
					if (0 == addROSpec())
					{
						rc = 5;
						if (0 == enableROSpec())
						{
							rc = 6;
							if (0 == startROSpec())
							{
								rc = 7;
								if (0 == awaitAndPrintReport(10))
								{
									rc = 8;
									if (0 == stopROSpec())
									{
										rc = 0;
									}
								}
							}
						}
					}
				}

				/*
				* After we're done, try to leave the reader
				* in a clean state for next use. This is best
				* effort and no checking of the result is done.
				*/
				if (m_Verbose)
				{
					printf("INFO: Clean up reader configuration...\n");
				}
				resetConfigurationToFactoryDefaults();

			}


		}
	}

	if (m_Verbose)
	{
		printf("INFO: Finished\n");
	}

	/*
	* Close the connection and release its resources
	*/
	pConn->closeConnectionToReader();
	delete pConn;

	/*
	* Done with the registry.
	*/
	delete pTypeRegistry;

	/*
	* When we get here all allocated memory should have been deallocated.
	*/

	return rc;
}


/**
*****************************************************************************
**
** @brief  Await and check the connection status message from the reader
**
** We are expecting a READER_EVENT_NOTIFICATION message that
** tells us the connection is OK. The reader is suppose to
** send the message promptly upon connection.
**
** If there is already another LLRP connection to the
** reader we'll get a bad Status.
**
** The message should be something like:
**
**     <READER_EVENT_NOTIFICATION MessageID='0'>
**       <ReaderEventNotificationData>
**         <UTCTimestamp>
**           <Microseconds>1184491439614224</Microseconds>
**         </UTCTimestamp>
**         <ConnectionAttemptEvent>
**           <Status>Success</Status>
**         </ConnectionAttemptEvent>
**       </ReaderEventNotificationData>
**     </READER_EVENT_NOTIFICATION>
**
** @return     ==0             Everything OK
**             !=0             Something went wrong
**
*****************************************************************************/

int
CMyApplication::checkConnectionStatus(void)
{
	CMessage *                  pMessage;
	CREADER_EVENT_NOTIFICATION *pNtf;
	CReaderEventNotificationData *pNtfData;
	CConnectionAttemptEvent *   pEvent;

	/*
	* Expect the notification within 10 seconds.
	* It is suppose to be the very first message sent.
	*/
	pMessage = recvMessage(10000);

	/*
	* recvMessage() returns NULL if something went wrong.
	*/
	if (NULL == pMessage)
	{
		/* recvMessage already tattled */
		goto fail;
	}

	/*
	* Check to make sure the message is of the right type.
	* The type label (pointer) in the message should be
	* the type descriptor for READER_EVENT_NOTIFICATION.
	*/
	if (&CREADER_EVENT_NOTIFICATION::s_typeDescriptor != pMessage->m_pType)
	{
		goto fail;
	}

	/*
	* Now that we are sure it is a READER_EVENT_NOTIFICATION,
	* traverse to the ReaderEventNotificationData parameter.
	*/
	pNtf = (CREADER_EVENT_NOTIFICATION *)pMessage;
	pNtfData = pNtf->getReaderEventNotificationData();
	if (NULL == pNtfData)
	{
		goto fail;
	}

	/*
	* The ConnectionAttemptEvent parameter must be present.
	*/
	pEvent = pNtfData->getConnectionAttemptEvent();
	if (NULL == pEvent)
	{
		goto fail;
	}

	/*
	* The status in the ConnectionAttemptEvent parameter
	* must indicate connection success.
	*/
	if (ConnectionAttemptStatusType_Success != pEvent->getStatus())
	{
		goto fail;
	}

	/*
	* Done with the message
	*/
	delete pMessage;

	if (m_Verbose)
	{
		printf("INFO: Connection status OK\n");
	}

	/*
	* Victory.
	*/
	return 0;

fail:
	/*
	* Something went wrong. Tattle. Clean up. Return error.
	*/
	printf("ERROR: checkConnectionStatus failed\n");
	delete pMessage;
	return -1;
}

/**
*****************************************************************************
**
** @brief  Send an IMPINJ_ENABLE_EXTENSION_MESSAGE
**
** NB: Send the message to enable the impinj extension.  This must
** be done every time we connect to the reader.
**
** The message is:
** <Impinj:IMPINJ_ENABLE_EXTENSIONS MessageID="X">
** </Impinj:IMPINJ_ENABLE_EXTENSIONS >
**
**
** @return     ==0             Everything OK
**             !=0             Something went wrong
**
*****************************************************************************/
int
CMyApplication::enableImpinjExtensions(void)
{
	CIMPINJ_ENABLE_EXTENSIONS *        pCmd;
	CMessage *                         pRspMsg;
	CIMPINJ_ENABLE_EXTENSIONS_RESPONSE *pRsp;

	/*
	* Compose the command message
	*/
	pCmd = new CIMPINJ_ENABLE_EXTENSIONS();
	pCmd->setMessageID(m_messageID++);
	/*
	* Send the message, expect the response of certain type
	*/
	pRspMsg = transact(pCmd);

	/*
	* Done with the command message
	*/
	delete pCmd;

	/*
	* transact() returns NULL if something went wrong.
	*/
	if (NULL == pRspMsg)
	{
		/* transact already tattled */
		return -1;
	}

	/*
	* Cast to a CIMPINJ_ENABLE_EXTENSIONS_RESPONSE message.
	*/
	pRsp = (CIMPINJ_ENABLE_EXTENSIONS_RESPONSE *)pRspMsg;

	/*
	* Check the LLRPStatus parameter.
	*/
	if (0 != checkLLRPStatus(pRsp->getLLRPStatus(),
		"enableImpinjExtensions"))
	{
		/* checkLLRPStatus already tattled */
		delete pRspMsg;
		return -1;
	}

	/*
	* Done with the response message.
	*/
	delete pRspMsg;

	/*
	* Tattle progress, maybe
	*/
	if (m_Verbose)
	{
		printf("INFO: Impinj Extensions are enabled\n");
	}

	/*
	* Victory.
	*/
	return 0;
}

/**
*****************************************************************************
**
** @brief  Send a SET_READER_CONFIG message that resets the
**         reader to factory defaults.
**
** NB: The ResetToFactoryDefault semantics vary between readers.
**     It might have no effect because it is optional.
**
** The message is:
**
**     <SET_READER_CONFIG MessageID='X'>
**       <ResetToFactoryDefault>1</ResetToFactoryDefault>
**     </SET_READER_CONFIG>
**
** @return     ==0             Everything OK
**             !=0             Something went wrong
**
*****************************************************************************/

int
CMyApplication::resetConfigurationToFactoryDefaults(void)
{
	CSET_READER_CONFIG *        pCmd;
	CMessage *                  pRspMsg;
	CSET_READER_CONFIG_RESPONSE *pRsp;

	/*
	* Compose the command message
	*/
	pCmd = new CSET_READER_CONFIG();
	pCmd->setMessageID(m_messageID++);
	pCmd->setResetToFactoryDefault(1);



	/*
	* Send the message, expect the response of certain type
	*/
	pRspMsg = transact(pCmd);

	/*
	* Done with the command message
	*/
	delete pCmd;

	/*
	* transact() returns NULL if something went wrong.
	*/
	if (NULL == pRspMsg)
	{
		/* transact already tattled */
		return -1;
	}

	/*
	* Cast to a SET_READER_CONFIG_RESPONSE message.
	*/
	pRsp = (CSET_READER_CONFIG_RESPONSE *)pRspMsg;

	/*
	* Check the LLRPStatus parameter.
	*/
	if (0 != checkLLRPStatus(pRsp->getLLRPStatus(),
		"resetConfigurationToFactoryDefaults"))
	{
		/* checkLLRPStatus already tattled */
		delete pRspMsg;
		return -1;
	}

	/*
	* Done with the response message.
	*/
	delete pRspMsg;

	/*
	* Tattle progress, maybe
	*/
	if (m_Verbose)
	{
		printf("INFO: Configuration reset to factory defaults\n");
	}

	/*
	* Victory.
	*/
	return 0;
}

/**
*****************************************************************************
**
** @brief  Sends a CGET_READER_CAPABILITIES message and parses reply
**
** Gets the capabilities from the reader and looks for the
** reader manufacturer and model number.
**
**
** @return     ==0             Everything OK
**             !=0             Something went wrong
**
*****************************************************************************/
int
CMyApplication::getReaderCapabilities(void)
{
	CGET_READER_CAPABILITIES          *pCmd;
	CMessage *                         pRspMsg;
	CGET_READER_CAPABILITIES_RESPONSE *pRsp;
	CGeneralDeviceCapabilities		  *pDevCap;

	CRegulatoryCapabilities *pReg;
	CUHFBandCapabilities *pUhf;
	CTransmitPowerLevelTableEntry *pPwrLvl;
	std::list<CTransmitPowerLevelTableEntry *>::iterator PwrLvl;
	//CImpinjFrequencyCapabilities   *pFreqcap;


	/*
	* Compose the command message
	*/
	pCmd = new CGET_READER_CAPABILITIES();
	pCmd->setMessageID(m_messageID++);
	pCmd->setRequestedData(GetReaderCapabilitiesRequestedData_All);

	/*
	* Send the message, expect the response of certain type
	*/
	pRspMsg = transact(pCmd);

	/*
	* Done with the command message
	*/
	delete pCmd;

	/*
	* transact() returns NULL if something went wrong.
	*/
	if (NULL == pRspMsg)
	{
		/* transact already tattled */
		return -1;
	}

	/*
	* Cast to a CGET_READER_CAPABILITIES_RESPONSE message.
	*/
	pRsp = (CGET_READER_CAPABILITIES_RESPONSE *)pRspMsg;

	/*
	* Check the LLRPStatus parameter.
	*/
	if (0 != checkLLRPStatus(pRsp->getLLRPStatus(),
		"getReaderCapabilities"))
	{
		/* checkLLRPStatus already tattled */
		delete pRspMsg;
		return -1;
	}



	/*
	** Get out the Regulatory Capabilities element
	*/
	if (NULL == (pReg = pRsp->getRegulatoryCapabilities()))
	{
		delete pRspMsg;
		return -1;
	}
	/*
	** Get out the UHF Band Capabilities element
	*/
	if (NULL == (pUhf = pReg->getUHFBandCapabilities()))
	{
		delete pRspMsg;
		return -1;
	}

	///* get the last power level in the table */
	//PwrLvl = pUhf->endTransmitPowerLevelTableEntry();
	//// store the index for use int the ROSpec.
	//pPwrLvl = *PwrLvl;
	//if (1 < m_Verbose)
	//{
	//	printf("INFO: Reader Max Power index %u, power %f\n", pPwrLvl->getIndex(), pPwrLvl->getTransmitPowerValue() / 100);
	//}


	/* ��ȡƵ�� */
	llrp_u32v_t freqs = pUhf->getFrequencyInformation()->getFixedFrequencyTable()->getFrequency();
	int length = freqs.m_nValue;
	for (int i = 0; i < length; i++) {
		printf("Ƶ��%d\t%u\n", i + 1, freqs.m_pValue[i]);
	}




	/*
	** Get out the general device capabilities
	*/
	if (NULL == (pDevCap = pRsp->getGeneralDeviceCapabilities()))
	{
		delete pRspMsg;
		return -1;
	}
	/* if this parameter is missing, or if this is not an Impinj
	** reader, we can't determine its capabilities so we exit
	** Impinj Private Enterprise NUmber is 25882 */
	if ((NULL == (pDevCap = pRsp->getGeneralDeviceCapabilities())) ||
		(25882 != pDevCap->getDeviceManufacturerName()))
	{
		delete pRspMsg;
		return -1;
	}

	if (1 < m_Verbose)
	{
		printf("INFO: Reader Model Name %u\n", pDevCap->getModelName());
	}


	/*
	* Done with the response message.
	*/
	delete pRspMsg;

	/*
	* Tattle progress, maybe
	*/
	if (m_Verbose)
	{
		printf("INFO: Found LLRP Capabilities \n");
	}

	/*
	* Victory.
	*/
	return 0;
}



/**
*****************************************************************************
**
** @brief  Sends a CSET_READER_CONFIG message
**
** Sets up the impinj configuration to match the use case defined in the
** LTK Programmers Guide.  This could have been combined with the factory
** default setting, but we
**
** <?xml version="1.0" encoding="utf-8" ?>
**   <SET_READER_CONFIG MessageID="X">
**       <ResetToFactoryDefault>false</ResetToFactoryDefault>
**       <AntennaConfiguration>
**           <AntennaID>0</AntennaID>
**           <!-- will replace this whole Transmitter element within the ROSpec -->
**           <!-- Default to minimum power so we know if we are doing it wrong -->
**           <RFTransmitter>
**               <HopTableID>1</HopTableID>
**               <ChannelIndex>1</ChannelIndex>
**               <TransmitPower>1</TransmitPower>
**           </RFTransmitter>
**           <C1G2InventoryCommand>
**               <TagInventoryStateAware>false</TagInventoryStateAware>
**               <C1G2RFControl>
**                   <!--Set mode to Max Throughput AutoSet Mode Tari is ignored -->
**                   <ModeIndex>1000</ModeIndex>
**                   <Tari>0</Tari>
**               </C1G2RFControl>
**               <C1G2SingulationControl>
**                   <!--Best to have Dual-target for Low leve data , so use corresponsing session 2 -->
**                   <Session>2</Session>
**                   <TagPopulation>32</TagPopulation>
**                   <TagTransitTime>0</TagTransitTime>
**               </C1G2SingulationControl>
**               <Impinj:ImpinjInventorySearchMode xmlns="http://developer.impinj.com/ltk/schema/encoding/xml/1.0">
**                   <!--Best to have Dual-target for low level data -->
**                   <InventorySearchMode>Dual_Target</InventorySearchMode>
**               </Impinj:ImpinjInventorySearchMode>
**               <!--Enable Low Duty Cycle when no tags are seen for 10 seconds.  Check antennas every 200 msec -->
**               <Impinj:ImpinjLowDutyCycle xmlns="http://developer.impinj.com/ltk/schema/encoding/xml/1.0">
**                   <LowDutyCycleMode>Enabled</LowDutyCycleMode>
**                   <EmptyFieldTimeout>10000</EmptyFieldTimeout>
**                   <FieldPingInterval>200</FieldPingInterval>
**               </Impinj:ImpinjLowDutyCycle>
**           </C1G2InventoryCommand>
**       </AntennaConfiguration>
**       <ROReportSpec>
**           <ROReportTrigger>Upon_N_Tags_Or_End_Of_ROSpec</ROReportTrigger>
**           <N>1</N>
**           <!--Have to report every tag when tag direction is enabled -->
**           <TagReportContentSelector>
**               <EnableROSpecID>false</EnableROSpecID>
**               <EnableSpecIndex>false</EnableSpecIndex>
**               <EnableInventoryParameterSpecID>false</EnableInventoryParameterSpecID>
**               <EnableAntennaID>true</EnableAntennaID>
**               <EnableChannelIndex>true</EnableChannelIndex>
**               <EnablePeakRSSI>false</EnablePeakRSSI>
**               <EnableFirstSeenTimestamp>true</EnableFirstSeenTimestamp>
**               <EnableLastSeenTimestamp>false</EnableLastSeenTimestamp>
**               <EnableTagSeenCount>false</EnableTagSeenCount>
**               <EnableAccessSpecID>false</EnableAccessSpecID>
**               <C1G2EPCMemorySelector>
**                   <EnableCRC>false</EnableCRC>
**                   <EnablePCBits>false</EnablePCBits>
**               </C1G2EPCMemorySelector>
**           </TagReportContentSelector>
**           <!-- Don't need any extra tag information beyond EPC -->
**           <Impinj:ImpinjTagReportContentSelector>
**             <Impinj:EnableImpinjSerializedTID>false</Impinj:EnableImpinjSerializedTID>
**             <Impinj:EnableImpinjRFPhaseAngle>true</Impinj:EnableImpinjRFPhaseAngle>
**             <Impinj:EnableImpinjPeakRSSI>true</Impinj:EnableImpinjPeakRSSI>
**           </Impinj:ImpinjTagReportContentSelector>
**       </ROReportSpec>
**   </SET_READER_CONFIG>
**
** @return     ==0             Everything OK
**             !=0             Something went wrong
**
*****************************************************************************/
int
CMyApplication::setImpinjReaderConfig()
{
	CSET_READER_CONFIG          *pCmd;
	CMessage *                  pRspMsg;
	CSET_READER_CONFIG_RESPONSE *pRsp;

	/*
	* Compose the command message
	*/
	pCmd = new CSET_READER_CONFIG();
	pCmd->setMessageID(m_messageID++);

	CAntennaConfiguration *pAnt = new(CAntennaConfiguration);

	/*
	** vertify all antenna.
	*/
	pAnt->setAntennaID(0);

	/* change frequency */
	//CRFTransmitter *pRftx = new CRFTransmitter();
	//pRftx->setChannelIndex(m_channelIndex);
	//pRftx->setHopTableID(1);
	//pRftx->setTransmitPower(80);

	//pAnt->setRFTransmitter(pRftx);
	


	CC1G2InventoryCommand *pC1G2Inv = new CC1G2InventoryCommand();

	/* set the mode to auto-set max throughput */
	CC1G2RFControl *pC1G2Rf = new CC1G2RFControl();
	pC1G2Rf->setModeIndex(2); /* DRM M=4 */
	pC1G2Rf->setTari(0);        /* tari is ignored by the reader */
	pC1G2Inv->setC1G2RFControl(pC1G2Rf);

	CC1G2SingulationControl *pC1G2Sing = new CC1G2SingulationControl();
	pC1G2Sing->setSession(2);
	pC1G2Sing->setTagPopulation(1);
	pC1G2Sing->setTagTransitTime(0);
	pC1G2Inv->setC1G2SingulationControl(pC1G2Sing);

	pC1G2Inv->setTagInventoryStateAware(false);

	/* set the Impinj Inventory search mode as per the use case */
	CImpinjInventorySearchMode *pImpIsm = new CImpinjInventorySearchMode();
	pImpIsm->setInventorySearchMode(ImpinjInventorySearchType_Dual_Target);
	pC1G2Inv->addCustom(pImpIsm);

	/* set the Impinj Low Duty Cycle mode as per the use case */
	CImpinjLowDutyCycle *pImpLdc = new CImpinjLowDutyCycle();
	pImpLdc->setEmptyFieldTimeout(10000); // 10000
	pImpLdc->setFieldPingInterval(200); // 200
	pImpLdc->setLowDutyCycleMode(ImpinjLowDutyCycleMode_Enabled);
	pC1G2Inv->addCustom(pImpLdc);

	/* ʹ����չЭ��ı�Ƶ�� */
	CImpinjFixedFrequencyList * pFixedFrequency = new CImpinjFixedFrequencyList();
	pFixedFrequency->setFixedFrequencyMode(ImpinjFixedFrequencyMode_Channel_List);
	llrp_u16v_t channels = llrp_u16v_t(1); // �������ͣ����캯������ָ�������С������ʼ��ÿ������Ԫ��Ϊ 0
	channels.m_pValue[0] = m_channelIndex;              // Ϊ����Ԫ�ظ�ֵ
	pFixedFrequency->setChannelList(channels);
	pC1G2Inv->addCustom(pFixedFrequency);

	pAnt->addAirProtocolInventoryCommandSettings(pC1G2Inv);
	pCmd->addAntennaConfiguration(pAnt);

	/* report every tag (N=1) since that is required for tag direction */
	CROReportSpec *pROrs = new CROReportSpec();
	//pROrs->setROReportTrigger(ROReportTriggerType_None);    // �������tag���ݣ�default

	pROrs->setROReportTrigger(ROReportTriggerType_Upon_N_Tags_Or_End_Of_ROSpec);
	pROrs->setN(1);

		//pROrs->setROReportTrigger(ROReportTriggerType_Upon_N_Tags_Or_End_Of_AISpec);
		//pROrs->setN(1);


	/* lets turn off off report data that we don't need since our use
	** case suggests we are bandwidth constrained */
	CTagReportContentSelector *pROcontent = new CTagReportContentSelector();
	pROcontent->setEnableAccessSpecID(false);

	/* these are very handy to have with low level data */
	pROcontent->setEnableAntennaID(true);
	pROcontent->setEnableChannelIndex(true);
	pROcontent->setEnableFirstSeenTimestamp(false);

	pROcontent->setEnableInventoryParameterSpecID(false);
	pROcontent->setEnableLastSeenTimestamp(true);
	pROcontent->setEnablePeakRSSI(false);
	pROcontent->setEnableROSpecID(false);
	pROcontent->setEnableSpecIndex(false);
	pROcontent->setEnableTagSeenCount(false);
	CC1G2EPCMemorySelector *pC1G2Mem = new CC1G2EPCMemorySelector();
	pC1G2Mem->setEnableCRC(false);
	pC1G2Mem->setEnablePCBits(false);
	pROcontent->addAirProtocolEPCMemorySelector(pC1G2Mem);

	pROrs->setTagReportContentSelector(pROcontent);

	/* Turn on the low level phase data in the ImpinjTagContentSelector*/
	CImpinjTagReportContentSelector * pImpTagCnt = new CImpinjTagReportContentSelector();

	CImpinjEnableRFPhaseAngle       * pEnableRfPhase = new CImpinjEnableRFPhaseAngle();
	pEnableRfPhase->setRFPhaseAngleMode(ImpinjRFPhaseAngleMode_Enabled);
	pImpTagCnt->setImpinjEnableRFPhaseAngle(pEnableRfPhase);

	CImpinjEnablePeakRSSI       * pEnablePeakRssi = new CImpinjEnablePeakRSSI();
	pEnablePeakRssi->setPeakRSSIMode(ImpinjPeakRSSIMode_Enabled);
	pImpTagCnt->setImpinjEnablePeakRSSI(pEnablePeakRssi);

	CImpinjEnableSerializedTID  * pEnableSerializedTID = new CImpinjEnableSerializedTID();
	pEnableSerializedTID->setSerializedTIDMode(ImpinjSerializedTIDMode_Disabled);
	pImpTagCnt->setImpinjEnableSerializedTID(pEnableSerializedTID);

	pROrs->addCustom(pImpTagCnt);


	/** test buffer **/
	CImpinjReportBufferConfiguration * pBufferConfig = new CImpinjReportBufferConfiguration();
	pBufferConfig->setReportBufferMode(ImpinjReportBufferMode_Low_Latency);
	//pROrs->addCustom(pBufferConfig);

	pCmd->setROReportSpec(pROrs);
	pCmd->addCustom(pBufferConfig);






	

	
	

	/*
	* Send the message, expect the response of certain type
	*/
	pRspMsg = transact(pCmd);

	/*
	* Done with the command message
	*/
	delete pCmd;

	/*
	* transact() returns NULL if something went wrong.
	*/
	if (NULL == pRspMsg)
	{
		/* transact already tattled */
		return -1;
	}

	/*
	* Cast to a CSET_READER_CONFIG_RESPONSE message.
	*/
	pRsp = (CSET_READER_CONFIG_RESPONSE *)pRspMsg;

	/*
	* Check the LLRPStatus parameter.
	*/
	if (0 != checkLLRPStatus(pRsp->getLLRPStatus(),
		"setImpinjReaderConfig"))
	{
		/* checkLLRPStatus already tattled */
		delete pRspMsg;
		return -1;
	}

	/*
	* Done with the response message.
	*/
	delete pRspMsg;

	/*
	* Tattle progress, maybe
	*/
	if (m_Verbose)
	{
		printf("INFO: Set Impinj Reader Configuration \n");
	}

	/*
	* Victory.
	*/
	return 0;
}

/**
*****************************************************************************
**
** @brief  Add our ROSpec using ADD_ROSPEC message
**
** This ROSPec is the simples ROSpec possible. It
** starts and stops based on application command,
** enables all antennas, and uses all the reader
** settings from the SET_READER_CONFIG message
** (or default values if SET_READER_CONFIG has not
** been called on the reader
**
** The message is
**
** <ADD_ROSPEC MessageID="X">
**  <ROSpec>
**      <ROSpecID>1111</ROSpecID>
**      <Priority>0</Priority>
**      <CurrentState>Disabled</CurrentState>
**      <ROBoundarySpec>
**          <ROSpecStartTrigger>
**              <ROSpecStartTriggerType>Null</ROSpecStartTriggerType>
**          </ROSpecStartTrigger>
**          <ROSpecStopTrigger>
**              <ROSpecStopTriggerType>Null</ROSpecStopTriggerType>
**              <DurationTriggerValue>0</DurationTriggerValue>
**          </ROSpecStopTrigger>
**      </ROBoundarySpec>
**      <AISpec>
**          <AntennaIDs>0</AntennaIDs>
**          <AISpecStopTrigger>
**              <AISpecStopTriggerType>Null</AISpecStopTriggerType>
**              <DurationTrigger>0</DurationTrigger>
**          </AISpecStopTrigger>
**          <InventoryParameterSpec>
**              <InventoryParameterSpecID>1234</InventoryParameterSpecID>
**              <ProtocolID>EPCGlobalClass1Gen2</ProtocolID>
**          </InventoryParameterSpec>
**      </AISpec>
**  </ROSpec>
** </ADD_ROSPEC>
**
** @return     ==0             Everything OK
**             !=0             Something went wrong
**
*****************************************************************************/

int
CMyApplication::addROSpec(void)
{
	CROSpecStartTrigger *       pROSpecStartTrigger =
		new CROSpecStartTrigger();
	pROSpecStartTrigger->setROSpecStartTriggerType(
		ROSpecStartTriggerType_Null);

	CROSpecStopTrigger *        pROSpecStopTrigger = new CROSpecStopTrigger();
	pROSpecStopTrigger->setROSpecStopTriggerType(ROSpecStopTriggerType_Null);
	pROSpecStopTrigger->setDurationTriggerValue(0);     /* n/a */

	CROBoundarySpec *           pROBoundarySpec = new CROBoundarySpec();
	pROBoundarySpec->setROSpecStartTrigger(pROSpecStartTrigger);
	pROBoundarySpec->setROSpecStopTrigger(pROSpecStopTrigger);

	CAISpecStopTrigger *        pAISpecStopTrigger = new CAISpecStopTrigger();
	pAISpecStopTrigger->setAISpecStopTriggerType(
		AISpecStopTriggerType_Null);
	pAISpecStopTrigger->setDurationTrigger(0);

	CInventoryParameterSpec *   pInventoryParameterSpec =
		new CInventoryParameterSpec();
	pInventoryParameterSpec->setInventoryParameterSpecID(1234);
	pInventoryParameterSpec->setProtocolID(AirProtocols_EPCGlobalClass1Gen2);

	llrp_u16v_t                 AntennaIDs = llrp_u16v_t(1);
	AntennaIDs.m_pValue[0] = 0;         /* All */

	CAISpec *                   pAISpec = new CAISpec();
	pAISpec->setAntennaIDs(AntennaIDs);
	pAISpec->setAISpecStopTrigger(pAISpecStopTrigger);
	pAISpec->addInventoryParameterSpec(pInventoryParameterSpec);

	CROSpec *                   pROSpec = new CROSpec();
	pROSpec->setROSpecID(1111);
	pROSpec->setPriority(0);
	pROSpec->setCurrentState(ROSpecState_Disabled);
	pROSpec->setROBoundarySpec(pROBoundarySpec);
	pROSpec->addSpecParameter(pAISpec);

	CADD_ROSPEC *               pCmd;
	CMessage *                  pRspMsg;
	CADD_ROSPEC_RESPONSE *      pRsp;

	/*
	* Compose the command message.
	* N.B.: After the message is composed, all the parameters
	*       constructed, immediately above, are considered "owned"
	*       by the command message. When it is destructed so
	*       too will the parameters be.
	*/
	pCmd = new CADD_ROSPEC();
	pCmd->setMessageID(m_messageID++);
	pCmd->setROSpec(pROSpec);

	/*
	* Send the message, expect the response of certain type
	*/
	pRspMsg = transact(pCmd);

	/*
	* Done with the command message.
	* N.B.: And the parameters
	*/
	delete pCmd;

	/*
	* transact() returns NULL if something went wrong.
	*/
	if (NULL == pRspMsg)
	{
		/* transact already tattled */
		return -1;
	}

	/*
	* Cast to a ADD_ROSPEC_RESPONSE message.
	*/
	pRsp = (CADD_ROSPEC_RESPONSE *)pRspMsg;

	/*
	* Check the LLRPStatus parameter.
	*/
	if (0 != checkLLRPStatus(pRsp->getLLRPStatus(), "addROSpec"))
	{
		/* checkLLRPStatus already tattled */
		delete pRspMsg;
		return -1;
	}

	/*
	* Done with the response message.
	*/
	delete pRspMsg;

	/*
	* Tattle progress, maybe
	*/
	if (m_Verbose)
	{
		printf("INFO: ROSpec added\n");
	}

	/*
	* Victory.
	*/
	return 0;
}


/**
*****************************************************************************
**
** @brief  Enable our ROSpec using ENABLE_ROSPEC message
**
** Enable the ROSpec that was added above.
**
** The message we send is:
**     <ENABLE_ROSPEC MessageID='X'>
**       <ROSpecID>123</ROSpecID>
**     </ENABLE_ROSPEC>
**
** @return     ==0             Everything OK
**             !=0             Something went wrong
**
*****************************************************************************/

int
CMyApplication::enableROSpec(void)
{
	CENABLE_ROSPEC *            pCmd;
	CMessage *                  pRspMsg;
	CENABLE_ROSPEC_RESPONSE *   pRsp;

	/*
	* Compose the command message
	*/
	pCmd = new CENABLE_ROSPEC();
	pCmd->setMessageID(m_messageID++);
	pCmd->setROSpecID(1111);

	/*
	* Send the message, expect the response of certain type
	*/
	pRspMsg = transact(pCmd);

	/*
	* Done with the command message
	*/
	delete pCmd;

	/*
	* transact() returns NULL if something went wrong.
	*/
	if (NULL == pRspMsg)
	{
		/* transact already tattled */
		return -1;
	}

	/*
	* Cast to a ENABLE_ROSPEC_RESPONSE message.
	*/
	pRsp = (CENABLE_ROSPEC_RESPONSE *)pRspMsg;

	/*
	* Check the LLRPStatus parameter.
	*/
	if (0 != checkLLRPStatus(pRsp->getLLRPStatus(), "enableROSpec"))
	{
		/* checkLLRPStatus already tattled */
		delete pRspMsg;
		return -1;
	}

	/*
	* Done with the response message.
	*/
	delete pRspMsg;

	/*
	* Tattle progress, maybe
	*/
	if (m_Verbose)
	{
		printf("INFO: ROSpec enabled\n");
	}

	/*
	* Victory.
	*/
	return 0;
}


/**
*****************************************************************************
**
** @brief  Start our ROSpec using START_ROSPEC message
**
** Start the ROSpec that was added above.
**
** The message we send is:
**     <START_ROSPEC MessageID='X'>
**       <ROSpecID>123</ROSpecID>
**     </START_ROSPEC>
**
** @return     ==0             Everything OK
**             !=0             Something went wrong
**
*****************************************************************************/

int
CMyApplication::startROSpec(void)
{
	CSTART_ROSPEC *             pCmd;
	CMessage *                  pRspMsg;
	CSTART_ROSPEC_RESPONSE *    pRsp;

	/*
	* Compose the command message
	*/
	pCmd = new CSTART_ROSPEC();
	pCmd->setMessageID(m_messageID++);
	pCmd->setROSpecID(1111);

	/*
	* Send the message, expect the response of certain type
	*/
	pRspMsg = transact(pCmd);

	/*
	* Done with the command message
	*/
	delete pCmd;

	/*
	* transact() returns NULL if something went wrong.
	*/
	if (NULL == pRspMsg)
	{
		/* transact already tattled */
		return -1;
	}

	/*
	* Cast to a START_ROSPEC_RESPONSE message.
	*/
	pRsp = (CSTART_ROSPEC_RESPONSE *)pRspMsg;

	/*
	* Check the LLRPStatus parameter.
	*/
	if (0 != checkLLRPStatus(pRsp->getLLRPStatus(), "startROSpec"))
	{
		/* checkLLRPStatus already tattled */
		delete pRspMsg;
		return -1;
	}

	/*
	* Done with the response message.
	*/
	delete pRspMsg;

	/*
	* Tattle progress
	*/
	if (m_Verbose)
	{
		printf("INFO: ROSpec started\n");
	}

	/*
	* Victory.
	*/
	return 0;
}

/**
*****************************************************************************
**
** @brief  Stop our ROSpec using STOP_ROSPEC message
**
** Stop the ROSpec that was added above.
**
** The message we send is:
**     <STOP_ROSPEC MessageID='203'>
**       <ROSpecID>123</ROSpecID>
**     </STOP_ROSPEC>
**
** @return     ==0             Everything OK
**             !=0             Something went wrong
**
*****************************************************************************/

int
CMyApplication::stopROSpec(void)
{
	CSTOP_ROSPEC *             pCmd;
	CMessage *                  pRspMsg;
	CSTOP_ROSPEC_RESPONSE *    pRsp;

	/*
	* Compose the command message
	*/
	pCmd = new CSTOP_ROSPEC();
	pCmd->setMessageID(m_messageID++);
	pCmd->setROSpecID(1111);

	/*
	* Send the message, expect the response of certain type
	*/
	pRspMsg = transact(pCmd);

	/*
	* Done with the command message
	*/
	delete pCmd;

	/*
	* transact() returns NULL if something went wrong.
	*/
	if (NULL == pRspMsg)
	{
		/* transact already tattled */
		return -1;
	}

	/*
	* Cast to a STOP_ROSPEC_RESPONSE message.
	*/
	pRsp = (CSTOP_ROSPEC_RESPONSE *)pRspMsg;

	/*
	* Check the LLRPStatus parameter.
	*/
	if (0 != checkLLRPStatus(pRsp->getLLRPStatus(), "stopROSpec"))
	{
		/* checkLLRPStatus already tattled */
		delete pRspMsg;
		return -1;
	}

	/*
	* Done with the response message.
	*/
	delete pRspMsg;

	/*
	* Tattle progress
	*/
	if (m_Verbose)
	{
		printf("INFO: ROSpec stopped\n");
	}

	/*
	* Victory.
	*/
	return 0;
}


/**
*****************************************************************************
**
** @brief  Receive and print the RO_ACCESS_REPORT
**
** Receive messages for timeout seconds and then stop. Typically
** for simple applications, this is sufficient.  For applications with
** asyncrhonous reporting or other asyncrhonous activity, it is recommended
** to create a thread to perform the report listening.
**
** @param[in]                  timeout
**
** This shows how to determine the type of a received message.
**
** @return     ==0             Everything OK
**             !=0             Something went wrong
**
*****************************************************************************/

int
CMyApplication::awaitAndPrintReport(int timeout)
{
	int                         bDone = 0;
	int                         retVal = 0;
	time_t                      startTime = time(NULL);
	time_t                      tempTime;
	/*
	* Keep receiving messages until done or until
	* something bad happens.
	*/

	int cnt = 0;

	while (!bDone) //��ѭ��
	{

		//cnt++;                         // test piece, comment it when used in production
		//if (cnt > 0) break;
		CMessage *              pMessage;
		const CTypeDescriptor * pType;
		/*
		* Wait up to 100 ms for a report.  Check
		* That way, we can check the timestamp even if
		* there are no reports coming in
		*/
		
		pMessage = recvMessage(100);

		/* validate the timestamp */
		tempTime = time(NULL);

		if (difftime(tempTime, startTime) > timeout) //��ʱ�䳬���趨ʱ�������ѭ��
		{
			bDone = 1;
		}

		if (NULL == pMessage)
		{
			continue;
			printf("missed");
		}

		/*
		* What happens depends on what kind of message
		* received. Use the type label (m_pType) to
		* discriminate message types.
		*/
		pType = pMessage->m_pType;

		/*
		* Is it a tag report? If so, print it out.
		*/
		if (&CRO_ACCESS_REPORT::s_typeDescriptor == pType)
		{
			CRO_ACCESS_REPORT * pNtf;

			pNtf = (CRO_ACCESS_REPORT *)pMessage;

			printTagReportData(pNtf);     
		}

		/*
		* Is it a reader event? This example only recognizes
		* AntennaEvents.
		*/
		else if (&CREADER_EVENT_NOTIFICATION::s_typeDescriptor == pType)
		{
			CREADER_EVENT_NOTIFICATION *pNtf;
			CReaderEventNotificationData *pNtfData;

			pNtf = (CREADER_EVENT_NOTIFICATION *)pMessage;

			pNtfData = pNtf->getReaderEventNotificationData();
			if (NULL != pNtfData)
			{
				handleReaderEventNotification(pNtfData);
			}
			else
			{
				/*
				* This should never happen. Using continue
				* to keep indent depth down.
				*/
				printf("WARNING: READER_EVENT_NOTIFICATION without data\n");
			}
		}

		/*
		* Hmmm. Something unexpected. Just tattle and keep going.
		*/
		else
		{
			printf("WARNING: Ignored unexpected message during monitor: %s\n",
				pType->m_pName);
		}
		/*
		* Done with the received message
		*/
		delete pMessage;
	}

	//stop the robot
	geometry_msgs::Twist vel_msg;
	vel_msg.linear.x = 0;
	vel_msg.angular.z = 0;
	stop_publish.publish(vel_msg);

	return retVal;
}


/**
*****************************************************************************
**
** @brief  Helper routine to print a tag report
**
** The report is printed in list order, which is arbitrary.
**
** TODO: It would be cool to sort the list by EPC and antenna,
**       then print it.
**
** @return     void
**
*****************************************************************************/

void
CMyApplication::printTagReportData(
CRO_ACCESS_REPORT *           pRO_ACCESS_REPORT)
{
	std::list<CTagReportData *>::iterator Cur;

	unsigned int                nEntry = 0;

	/*
	* Loop through and count the number of entries
	*/
	for (
		Cur = pRO_ACCESS_REPORT->beginTagReportData();
		Cur != pRO_ACCESS_REPORT->endTagReportData();
	Cur++)
	{
		nEntry++;
	}


	//if (m_Verbose)
	//{
	//	printf("INFO: %u tag report entries\n", nEntry);
	//}

	/*
	* Loop through again and print each entry.
	*/

	for (
		Cur = pRO_ACCESS_REPORT->beginTagReportData();
		Cur != pRO_ACCESS_REPORT->endTagReportData();
	Cur++)
	{
		printOneTagReportData(*Cur);
		
	}
}


/**
*****************************************************************************
**
** @brief  Helper routine to print one EPC data parameter
**
** @return     void
**
*****************************************************************************/
void
CMyApplication::formatOneEPC(
CParameter *pEPCParameter,
char *buf,
int buflen)
{
	char *              p = buf;
	int                 bufsize = buflen;
	int                 written = 0;

	if (NULL != pEPCParameter)
	{
		const CTypeDescriptor *     pType;
		llrp_u96_t          my_u96;
		llrp_u1v_t          my_u1v;
		llrp_u8_t *         pValue = NULL;
		unsigned int        n, i;

		pType = pEPCParameter->m_pType;
		if (&CEPC_96::s_typeDescriptor == pType)
		{
			CEPC_96             *pEPC_96;

			pEPC_96 = (CEPC_96 *)pEPCParameter;
			my_u96 = pEPC_96->getEPC();
			pValue = my_u96.m_aValue;
			n = 12u;
		}
		else if (&CEPCData::s_typeDescriptor == pType)
		{
			CEPCData *          pEPCData;

			pEPCData = (CEPCData *)pEPCParameter;
			my_u1v = pEPCData->getEPC();
			pValue = my_u1v.m_pValue;
			n = (my_u1v.m_nBit + 7u) / 8u;
		}

		if (NULL != pValue)
		{
			for (i = 0; i < n; i++)
			{
				if (0 < i && i % 2 == 0 && 1 < bufsize)
				{
					*p++ = '-';
					bufsize--;
				}
				if (bufsize > 2)
				{
					written = snprintf(p, bufsize, "%02X", pValue[i]);
					bufsize -= written;
					p += written;
				}
			}
		}
		else
		{
			written = snprintf(p, bufsize, "%s", "---unknown-epc-data-type---");
			bufsize -= written;
			p += written;
		}
	}
	else
	{
		written = snprintf(p, bufsize, "%s", "--null epc---");
		bufsize -= written;
		p += written;
	}

	// null terminate this for good practice
	buf[buflen - 1] = '\0';

}

/**
*****************************************************************************
**
** @brief  Helper routine to get One Impinj Phase Angle
**
** @return   non-zero on success
**
*****************************************************************************/
int
CMyApplication::getOnePhaseAngle(
CImpinjRFPhaseAngle  *pRfPhase,
double               *out)
{
	if (NULL != pRfPhase)
	{
		llrp_u16_t phase = pRfPhase->getPhaseAngle();
		*out = ((double)phase * 360) / 4096;
		return 1;
	}
	return 0;
}

/**
*****************************************************************************
**
** @brief  Helper routine to get one Impinj Peak RSSI
**
** @return   non-zero on success
**
*****************************************************************************/
int
CMyApplication::getOnePeakRSSI(
CImpinjPeakRSSI      *pPeakRSSI,
double               *out)
{
	if (NULL != pPeakRSSI)
	{
		llrp_s16_t rssival = pPeakRSSI->getRSSI();
		*out = ((double)rssival / 100);
		return 1;
	}
	return 0;
}

/**
*****************************************************************************
**
** @brief  Helper routine to get one Timestamp
**
** @return   non-zero on success
**
*****************************************************************************/
int
CMyApplication::getOneTimestamp(
CParameter           *pTimestamp,
unsigned long long    *out)
{
	llrp_u64_t ttime;

	if (NULL == pTimestamp)
	{
		return 0;
	}

	if (&CFirstSeenTimestampUTC::s_typeDescriptor == pTimestamp->m_pType)
	{
		CFirstSeenTimestampUTC *pftutc = (CFirstSeenTimestampUTC*)pTimestamp;
		ttime = pftutc->getMicroseconds();
	}
	else if (&CFirstSeenTimestampUptime::s_typeDescriptor == pTimestamp->m_pType)
	{
		CFirstSeenTimestampUptime *pftup = (CFirstSeenTimestampUptime*)pTimestamp;
		ttime = pftup->getMicroseconds();
	}
	else if (&CLastSeenTimestampUTC::s_typeDescriptor == pTimestamp->m_pType)
	{
		CLastSeenTimestampUTC *pltutc = (CLastSeenTimestampUTC*)pTimestamp;
		ttime = pltutc->getMicroseconds();
	}
	else if (&CLastSeenTimestampUptime::s_typeDescriptor == pTimestamp->m_pType)
	{
		CLastSeenTimestampUptime *pltup = (CLastSeenTimestampUptime*)pTimestamp;
		ttime = pltup->getMicroseconds();
	}


	*out = ttime;
	return 1;
}

/**
*****************************************************************************
**
** @brief  Helper routine to get one Antenna
**
** @return   non-zero on success
**
*****************************************************************************/
int
CMyApplication::getOneAntenna(
CAntennaID           *pAntenna,
unsigned short       *out)
{
	if (NULL != pAntenna)
	{
		*out = pAntenna->getAntennaID();
		return 1;
	}
	return 0;
}

/**
*****************************************************************************
**
** @brief  Helper routine to get one Channel Index
**
** @return   non-zero on success
**
*****************************************************************************/
int
CMyApplication::getOneChannelIndex(
CChannelIndex        *pChannelIndex,
unsigned short       *out)
{
	if (NULL != pChannelIndex)
	{

		*out = pChannelIndex->getChannelIndex();
		return 1;
	}
	return 0;
}

/**
*****************************************************************************
**
** @brief  Helper routine to get estimate the Velocity
**
** @return   non-zero on success
**
*****************************************************************************/
int
CMyApplication::estimateVelocity(
char *                epcStr,
double                rssi,
double                phase,
unsigned short        channelIndex,
unsigned short        antenna,
unsigned long long    time,
double                *outVelocity)
{
	int retVal = 0;
	static char lastEpcStr[128];
	static double lastrssi = 0;
	static double lastphase = 0;
	static unsigned short lastchannelindex = 0;
	static unsigned short lastantenna = 0;
	static unsigned long long lasttime = 0;

	/* only collect a velocity sample if we have
	** been on the same EPC, antenna and channel. It's best
	** to run this example with only one EPC */
	if ((0 == strcmp(epcStr, lastEpcStr)) &&
		(lastantenna == antenna) &&
		(lastchannelindex == channelIndex))
	{
		/* positive velocity is moving towards the antenna */
		double phaseChangeDegrees = (phase - lastphase);
		double timeChangeUsec = (double)(time - lasttime);

		/* always wrap the phase to between -180 and 180 */
		while (phaseChangeDegrees < -180)
			phaseChangeDegrees += 360;
		while (phaseChangeDegrees > 180)
			phaseChangeDegrees -= 360;

		/* if our phase changes close to 180 degrees, you can see we
		** have an ambiguity of whether the phase advanced or retarded by
		** 180 degrees (or slightly over). There is no way to tell unless
		** you use more advanced techiques with multiple channels.  So just
		** ignore any samples where phase change is > 90 */

		if (abs((int)phaseChangeDegrees) <= 90)
		{
			/* We can divide these two to get degrees/usec, but it would be more
			** convenient to have this in a common unit like meters/second.
			** Here's a straightforward conversion.  NOTE: to be exact here, we
			** should use the channel index to find the channel frequency/wavelength.
			** For now, I'll just assume the wavelength corresponds to mid-band at
			** 0.32786885245901635 meters. The formula below eports meters per second.
			** Note that 360 degrees equals only 1/2 a wavelength of motion because
			** we are computing the round trip phase change.
			**
			**  phaseChange (degrees)   1/2 wavelength     0.327 meter      1000000 usec
			**  --------------------- * -------------- * ---------------- * ------------
			**  timeChange (usec)       360 degrees       1  wavelength      1 second
			**
			** which should net out to estimated tag velocity in meters/second */

			*outVelocity = ((phaseChangeDegrees * 0.5 * 0.327868852 * 1000000) / (360 * timeChangeUsec));

			retVal = 1;
		}
	}

	/* record these for next time */
	strcpy(lastEpcStr, epcStr);
	lastrssi = rssi;
	lastphase = phase;
	lastchannelindex = channelIndex;
	lastantenna = antenna;
	lasttime = time;

	return retVal;
}



/**
*****************************************************************************
**
** @brief  Helper routine to print one tag report entry on one line
**
** @return     void
**
*****************************************************************************/
void
CMyApplication::printOneTagReportData(
CTagReportData *              pTagReportData)
{
	char                        epcBuf[128];
	char                        aBuf[128];
	char                        *ptr = aBuf;
	int                         len = 128;
	int                         written;
	unsigned long long          time;
	unsigned short              antenna, channelIndex;
	double                      rssi, phase, velocityInst;

	/* this is static to keep a moving average of velocity */
	static double               velocity = 0;
	std::list<CParameter *>::iterator Cur;
	/*
	* Print the EPC. It could be an 96-bit EPC_96 parameter
	* or an variable length EPCData parameter.
	*/

	CParameter *                pEPCParameter =
		pTagReportData->getEPCParameter();

	MyData oneTagData;


	/* save a copy of the EPC */
	memset(epcBuf, 0x00, sizeof(epcBuf));
	formatOneEPC(pEPCParameter, epcBuf, 128);


	char * target_epc = "E200-001A-0411-0257-1070-E424";
	if (strcmp(epcBuf, target_epc) != 0) {
		return;
	}


		strcpy(oneTagData.epc, epcBuf);
		//printf("EPC: %s\n", epcBuf);



		if (getOneAntenna(pTagReportData->getAntennaID(), &antenna))
		{
			written = snprintf(ptr, len, " ant=%01u", antenna);
			ptr += written;
			len -= written;
			//printf("ant=%01u\n", antenna);

			oneTagData.antennaId = antenna;
		}

		if (getOneTimestamp(pTagReportData->getLastSeenTimestampUTC(), &time))
		{
			written = snprintf(ptr, len, " tm=%010llu", time);
			ptr += written;
			len -= written;

			//printf("UTC_TimeStamp: %010llu\n", time);
			//PrintTimeStampToTime(time);//print formal time
			/*
			struct timeval tv;
			gettimeofday(&tv, NULL);
			printf("LinuxMicrosecond: %ld\n", tv.tv_sec * 1000000 + tv.tv_usec); // 徽秒
			unsigned long long LinuxMicrosecond = tv.tv_sec * 1000000 + tv.tv_usec;
			PrintTimeStampToTime(LinuxMicrosecond);
			*/
			oneTagData.timestamp = time;
			oneTagData.timestamp_pc = getPreciseTimeStamp();
			//printf("%010llu\n",oneTagData.timestamp_pc);
		}

		if (getOneChannelIndex(pTagReportData->getChannelIndex(), &channelIndex))
		{
			written = snprintf(ptr, len, " idx=%02u", channelIndex);
			ptr += written;
			len -= written;
			//printf("idx=%02u\n", channelIndex);

			oneTagData.channelIndex = channelIndex;
		}

		for (
			Cur = pTagReportData->beginCustom();
			Cur != pTagReportData->endCustom();
		Cur++)
		{
			/* look for our special Impinj Tag Report Data */
			if (&CImpinjRFPhaseAngle::s_typeDescriptor == (*Cur)->m_pType)
			{
				if (getOnePhaseAngle((CImpinjRFPhaseAngle*)*Cur, &phase))
				{
					written = snprintf(ptr, len, " ph=%+04d", (int)phase);
					ptr += written;
					len -= written;
					//printf("phaseAngle=%+04d\n", (int)phase);
					oneTagData.phase = (int)phase;
				}
			}
			else if (&CImpinjPeakRSSI::s_typeDescriptor == (*Cur)->m_pType)
			{
				if (getOnePeakRSSI((CImpinjPeakRSSI*)*Cur, &rssi))
				{
					written = snprintf(ptr, len, " rs=%+3.2f", rssi);
					ptr += written;
					len -= written;
					//printf("RSSI=%+3.2f\n", rssi);
					oneTagData.rssi = rssi;
				}
			}
		}

		//Reader limit, negate
		oneTagData.phase = 360.0 - oneTagData.phase;

		if (antenna == 1)
		{	

			if(leftDataVec.begin() == leftDataVec.end())
			{
				leftDataVec.push_back(oneTagData);
			}
			else
			{
				oneTagData.phase = unwrappingPhase(oneTagData.phase, leftDataVec.back().phase);
				leftDataVec.push_back(oneTagData);
			}
			//printf("leftphase:%f\n",oneTagData.phase);
			if(leftDataVec.size()<=rightDataVec.size() && leftDataVec.size()!=0){
				rfid_reader::DataDev d;
				d.v_data =  leftDataVec.back().phase + rightDataVec[leftDataVec.size()-1].phase - 
							rightDataVec[0].phase - leftDataVec[0].phase;
				d.a_data =	leftDataVec.back().phase - rightDataVec[leftDataVec.size()-1].phase;
				d.time_data = leftDataVec.back().timestamp - leftDataVec[0].timestamp;
				printf("left:v=%ld,w=%ld,t=%ld\n",d.v_data,d.a_data,d.time_data);
				DataVec_pub.publish(d);
			}
		}

		if (antenna == 2)
		{
			
			if(rightDataVec.begin() == rightDataVec.end())
			{	
				rightDataVec.push_back(oneTagData);
			}
			else
			{
				oneTagData.phase = unwrappingPhase(oneTagData.phase, rightDataVec.back().phase);
				rightDataVec.push_back(oneTagData);
			}
		
			//printf("rightphase:%f\n",oneTagData.phase);
			if(leftDataVec.size()>=rightDataVec.size() && rightDataVec.size()!=0)
			{
				rfid_reader::DataDev d;
				d.v_data =  rightDataVec.back().phase + leftDataVec[leftDataVec.size()-1].phase - rightDataVec[0].phase - leftDataVec[0].phase;
				d.a_data =	leftDataVec[rightDataVec.size()-1].phase - rightDataVec.back().phase;
				d.time_data = rightDataVec.back().timestamp - rightDataVec[0].timestamp;
				printf("right:v=%ld,w=%ld,t=%ld\n",d.v_data,d.a_data,d.time_data);
				DataVec_pub.publish(d);
			}
		}
}

/**
*****************************************************************************
**
** @brief  Handle a ReaderEventNotification
**
** Handle the payload of a READER_EVENT_NOTIFICATION message.
** This routine simply dispatches to handlers of specific
** event types.
**
** @return     void
**
*****************************************************************************/

void
CMyApplication::handleReaderEventNotification(
CReaderEventNotificationData *pNtfData)
{
	CAntennaEvent *             pAntennaEvent;
	CReaderExceptionEvent *     pReaderExceptionEvent;
	int                         nReported = 0;

	pAntennaEvent = pNtfData->getAntennaEvent();
	if (NULL != pAntennaEvent)
	{
		handleAntennaEvent(pAntennaEvent);
		nReported++;
	}

	pReaderExceptionEvent = pNtfData->getReaderExceptionEvent();
	if (NULL != pReaderExceptionEvent)
	{
		handleReaderExceptionEvent(pReaderExceptionEvent);
		nReported++;
	}

	/*
	* Similarly handle other events here:
	*      HoppingEvent
	*      GPIEvent
	*      ROSpecEvent
	*      ReportBufferLevelWarningEvent
	*      ReportBufferOverflowErrorEvent
	*      RFSurveyEvent
	*      AISpecEvent
	*      ConnectionAttemptEvent
	*      ConnectionCloseEvent
	*      Custom
	*/

	if (0 == nReported)
	{
		printf("NOTICE: Unexpected (unhandled) ReaderEvent\n");
	}
}


/**
*****************************************************************************
**
** @brief  Handle an AntennaEvent
**
** An antenna was disconnected or (re)connected. Tattle.
**
** @return     void
**
*****************************************************************************/

void
CMyApplication::handleAntennaEvent(
CAntennaEvent *               pAntennaEvent)
{
	EAntennaEventType           eEventType;
	llrp_u16_t                  AntennaID;
	char *                      pStateStr;

	eEventType = pAntennaEvent->getEventType();
	AntennaID = pAntennaEvent->getAntennaID();

	switch (eEventType)
	{
	case AntennaEventType_Antenna_Disconnected:
		pStateStr = "disconnected";
		break;

	case AntennaEventType_Antenna_Connected:
		pStateStr = "connected";
		break;

	default:
		pStateStr = "?unknown-event?";
		break;
	}

	printf("NOTICE: Antenna %d is %s\n", AntennaID, pStateStr);
}


/**
*****************************************************************************
**
** @brief  Handle a ReaderExceptionEvent
**
** Something has gone wrong. There are lots of details but
** all this does is print the message, if one.
**
** @return     void
**
*****************************************************************************/

void
CMyApplication::handleReaderExceptionEvent(
CReaderExceptionEvent *       pReaderExceptionEvent)
{
	llrp_utf8v_t                Message;

	Message = pReaderExceptionEvent->getMessage();

	if (0 < Message.m_nValue && NULL != Message.m_pValue)
	{
		printf("NOTICE: ReaderException '%.*s'\n",
			Message.m_nValue, Message.m_pValue);
	}
	else
	{
		printf("NOTICE: ReaderException but no message\n");
	}
}


/**
*****************************************************************************
**
** @brief  Helper routine to check an LLRPStatus parameter
**         and tattle on errors
**
** Helper routine to interpret the LLRPStatus subparameter
** that is in all responses. It tattles on an error, if one,
** and tries to safely provide details.
**
** This simplifies the code, above, for common check/tattle
** sequences.
**
** @return     ==0             Everything OK
**             !=0             Something went wrong, already tattled
**
*****************************************************************************/

int
CMyApplication::checkLLRPStatus(
CLLRPStatus *                 pLLRPStatus,
char *                        pWhatStr)
{
	/*
	* The LLRPStatus parameter is mandatory in all responses.
	* If it is missing there should have been a decode error.
	* This just makes sure (remember, this program is a
	* diagnostic and suppose to catch LTKC mistakes).
	*/
	if (NULL == pLLRPStatus)
	{
		printf("ERROR: %s missing LLRP status\n", pWhatStr);
		return -1;
	}

	/*
	* Make sure the status is M_Success.
	* If it isn't, print the error string if one.
	* This does not try to pretty-print the status
	* code. To get that, run this program with -vv
	* and examine the XML output.
	*/
	if (StatusCode_M_Success != pLLRPStatus->getStatusCode())
	{
		llrp_utf8v_t            ErrorDesc;

		ErrorDesc = pLLRPStatus->getErrorDescription();

		if (0 == ErrorDesc.m_nValue)
		{
			printf("ERROR: %s failed, no error description given\n",
				pWhatStr);
		}
		else
		{
			printf("ERROR: %s failed, %.*s\n",
				pWhatStr, ErrorDesc.m_nValue, ErrorDesc.m_pValue);
		}
		return -2;
	}

	/*
	* Victory. Everything is fine.
	*/
	return 0;
}


/**
*****************************************************************************
**
** @brief  Wrapper routine to do an LLRP transaction
**
** Wrapper to transact a request/resposne.
**     - Print the outbound message in XML if verbose level is at least 2
**     - Send it using the LLRP_Conn_transact()
**     - LLRP_Conn_transact() receives the response or recognizes an error
**     - Tattle on errors, if any
**     - Print the received message in XML if verbose level is at least 2
**     - If the response is ERROR_MESSAGE, the request was sufficiently
**       misunderstood that the reader could not send a proper reply.
**       Deem this an error, free the message.
**
** The message returned resides in allocated memory. It is the
** caller's obligtation to free it.
**
** @return     ==NULL          Something went wrong, already tattled
**             !=NULL          Pointer to a message
**
*****************************************************************************/

CMessage *
CMyApplication::transact(
CMessage *                    pSendMsg)
{
	CConnection *               pConn = m_pConnectionToReader;
	CMessage *                  pRspMsg;

	/*
	* Print the XML text for the outbound message if
	* verbosity is 2 or higher.
	*/
	if (1 < m_Verbose)
	{
		printf("\n===================================\n");
		printf("INFO: Transact sending\n");
		printXMLMessage(pSendMsg);
	}

	/*
	* Send the message, expect the response of certain type.
	* If LLRP::CConnection::transact() returns NULL then there was
	* an error. In that case we try to print the error details.
	*/
	pRspMsg = pConn->transact(pSendMsg, 5000);

	if (NULL == pRspMsg)
	{
		const CErrorDetails *   pError = pConn->getTransactError();

		printf("ERROR: %s transact failed, %s\n",
			pSendMsg->m_pType->m_pName,
			pError->m_pWhatStr ? pError->m_pWhatStr : "no reason given");

		if (NULL != pError->m_pRefType)
		{
			printf("ERROR: ... reference type %s\n",
				pError->m_pRefType->m_pName);
		}

		if (NULL != pError->m_pRefField)
		{
			printf("ERROR: ... reference field %s\n",
				pError->m_pRefField->m_pName);
		}

		return NULL;
	}

	/*
	* Print the XML text for the inbound message if
	* verbosity is 2 or higher.
	*/
	if (1 < m_Verbose)
	{
		printf("\n- - - - - - - - - - - - - - - - - -\n");
		printf("INFO: Transact received response\n");
		printXMLMessage(pRspMsg);
	}

	/*
	* If it is an ERROR_MESSAGE (response from reader
	* when it can't understand the request), tattle
	* and declare defeat.
	*/
	if (&CERROR_MESSAGE::s_typeDescriptor == pRspMsg->m_pType)
	{
		const CTypeDescriptor * pResponseType;

		pResponseType = pSendMsg->m_pType->m_pResponseType;

		printf("ERROR: Received ERROR_MESSAGE instead of %s\n",
			pResponseType->m_pName);
		delete pRspMsg;
		pRspMsg = NULL;
	}

	return pRspMsg;
}


/**
*****************************************************************************
**
** @brief  Wrapper routine to receive a message
**
** This can receive notifications as well as responses.
**     - Recv a message using the LLRP_Conn_recvMessage()
**     - Tattle on errors, if any
**     - Print the message in XML if verbose level is at least 2
**
** The message returned resides in allocated memory. It is the
** caller's obligtation to free it.
**
** @param[in]  nMaxMS          -1 => block indefinitely
**                              0 => just peek at input queue and
**                                   socket queue, return immediately
**                                   no matter what
**                             >0 => ms to await complete frame
**
** @return     ==NULL          Something went wrong, already tattled
**             !=NULL          Pointer to a message
**
*****************************************************************************/

CMessage *
CMyApplication::recvMessage(
int                           nMaxMS)
{
	CConnection *               pConn = m_pConnectionToReader;
	CMessage *                  pMessage;

	/*
	* Receive the message subject to a time limit
	*/
	pMessage = pConn->recvMessage(nMaxMS);

	/*
	* If LLRP::CConnection::recvMessage() returns NULL then there was
	* an error. In that case we try to print the error details.
	*/
	if (NULL == pMessage)
	{
		const CErrorDetails *   pError = pConn->getRecvError();

		/* don't warn on timeout since this is a polling example */
		if (pError->m_eResultCode != RC_RecvTimeout)
		{
			printf("ERROR: recvMessage failed, %s\n",
				pError->m_pWhatStr ? pError->m_pWhatStr : "no reason given");
		}

		if (NULL != pError->m_pRefType)
		{
			printf("ERROR: ... reference type %s\n",
				pError->m_pRefType->m_pName);
		}

		if (NULL != pError->m_pRefField)
		{
			printf("ERROR: ... reference field %s\n",
				pError->m_pRefField->m_pName);
		}

		return NULL;
	}

	/*
	* Print the XML text for the inbound message if
	* verbosity is 2 or higher.
	*/
	if (1 < m_Verbose)
	{
		printf("\n===================================\n");
		printf("INFO: Message received\n");
		printXMLMessage(pMessage);
	}

	return pMessage;
}


/**
*****************************************************************************
**
** @brief  Wrapper routine to send a message
**
** Wrapper to send a message.
**     - Print the message in XML if verbose level is at least 2
**     - Send it using the LLRP_Conn_sendMessage()
**     - Tattle on errors, if any
**
** @param[in]  pSendMsg        Pointer to message to send
**
** @return     ==0             Everything OK
**             !=0             Something went wrong, already tattled
**
*****************************************************************************/

int
CMyApplication::sendMessage(
CMessage *                    pSendMsg)
{
	CConnection *               pConn = m_pConnectionToReader;

	/*
	* Print the XML text for the outbound message if
	* verbosity is 2 or higher.
	*/
	if (1 < m_Verbose)
	{
		printf("\n===================================\n");
		printf("INFO: Sending\n");
		printXMLMessage(pSendMsg);
	}

	/*
	* If LLRP::CConnection::sendMessage() returns other than RC_OK
	* then there was an error. In that case we try to print
	* the error details.
	*/
	if (RC_OK != pConn->sendMessage(pSendMsg))
	{
		const CErrorDetails *   pError = pConn->getSendError();

		printf("ERROR: %s sendMessage failed, %s\n",
			pSendMsg->m_pType->m_pName,
			pError->m_pWhatStr ? pError->m_pWhatStr : "no reason given");

		if (NULL != pError->m_pRefType)
		{
			printf("ERROR: ... reference type %s\n",
				pError->m_pRefType->m_pName);
		}

		if (NULL != pError->m_pRefField)
		{
			printf("ERROR: ... reference field %s\n",
				pError->m_pRefField->m_pName);
		}

		return -1;
	}

	/*
	* Victory
	*/
	return 0;
}


/**
*****************************************************************************
**
** @brief  Helper to print a message as XML text
**
** Print a LLRP message as XML text
**
** @param[in]  pMessage        Pointer to message to print
**
** @return     void
**
*****************************************************************************/

void
CMyApplication::printXMLMessage(
CMessage *                    pMessage)
{
	char                        aBuf[10 * 1024];

	/*
	* Convert the message to an XML string.
	* This fills the buffer with either the XML string
	* or an error message. The return value could
	* be checked.
	*/

	pMessage->toXMLString(aBuf, sizeof aBuf);

	/*
	* Print the XML Text to the standard output.
	*/
	printf("%s", aBuf);
}
/*
void
CMyApplication::readerStopCallback(
const std_msgs::Bool::ConstPtr& msg){
	bDone = !(msg->data);
}
*/