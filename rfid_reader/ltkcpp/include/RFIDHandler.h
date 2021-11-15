#include "ltkcpp.h"
#include "impinj_ltkcpp.h"
#include <stdio.h>
#include <vector>
#include "MyData.h"
#include "StaticProperties.h"
#include "utils.h"
#include <ros/ros.h>
#include <string>
#include "phase_processing.hpp"
#include "rfid_reader/DataDev.h"
#include <geometry_msgs/Twist.h>

using namespace LLRP;

/*
** Sorry, we use this linux safe method
** to print buffers.  WIndows has the same
** method, but by a different name
*/
#if (WIN32)
#define snprintf _snprintf
#endif

	

class CMyApplication
{
private:
	unsigned int m_messageID;

public:

	ros::NodeHandle n;
	ros::Publisher DataVec_pub = n.advertise<rfid_reader::DataDev>("/DataDev_info", 30);
	ros::Publisher stop_publish = n.advertise<geometry_msgs::Twist>("/cmd_vel", 30);

	/** Verbose level, incremented by each -v on command line */
	//int        					bDone = 0;
	int                         m_Verbose;
	//TagData                     leftdataArray[1500];
	//int                         leftdataIndex = 0;
	//TagData                     rightdataArray[1500];
	//int                         rightdataIndex = 0;
	std::vector<MyData>           leftDataVec;
	std::vector<MyData>           rightDataVec;

	unsigned int m_channelIndex; // frequency point (1-16), default to 1


	/** Connection to the LLRP reader */
	CConnection *               m_pConnectionToReader;

	inline
		CMyApplication(void)
		: m_Verbose(0), m_pConnectionToReader(NULL)
	{
		m_messageID = 0;
		m_channelIndex = 1;
	}

	int
		run(
		char *                    pReaderHostName);

	int
		checkConnectionStatus(void);

	int
		enableImpinjExtensions(void);

	int
		resetConfigurationToFactoryDefaults(void);

	int
		getReaderCapabilities(void);

	int
		setImpinjReaderConfig();

	int
		addROSpec(void);

	int
		enableROSpec(void);

	int
		startROSpec(void);

	int
		stopROSpec(void);

	int
		awaitAndPrintReport(int timeout);

	int numi;

	void
		printTagReportData(
		CRO_ACCESS_REPORT *       pRO_ACCESS_REPORT);

	void
		printOneTagReportData(
		CTagReportData *          pTagReportData);

	void
		formatOneEPC(
		CParameter *          pEpcParameter,
		char *                buf,
		int                   buflen);

	int getOnePhaseAngle(
		CImpinjRFPhaseAngle  *pRfPhase,
		double               *out);

	int
		getOnePeakRSSI(
		CImpinjPeakRSSI      *pPeakRSSI,
		double               *out);


	int
		getOneTimestamp(
		CParameter           *pTimestamp,
		unsigned long long   *out);

	int
		getOneAntenna(
		CAntennaID           *pAntenna,
		unsigned short       *out);

	int
		getOneChannelIndex(
		CChannelIndex        *pChannelIndex,
		unsigned short       *out);

	int
		estimateVelocity(
		char *                epcStr,
		double                rssi,
		double                phase,
		unsigned short        channelIndex,
		unsigned short        antenna,
		unsigned long long    time,
		double                *outVelocity);

	void
		handleReaderEventNotification(
		CReaderEventNotificationData *pNtfData);

	void
		handleAntennaEvent(
		CAntennaEvent *           pAntennaEvent);

	void
		handleReaderExceptionEvent(
		CReaderExceptionEvent *   pReaderExceptionEvent);

	int
		checkLLRPStatus(
		CLLRPStatus *             pLLRPStatus,
		char *                    pWhatStr);

	CMessage *
		transact(
		CMessage *                pSendMsg);

	CMessage *
		recvMessage(
		int                       nMaxMS);

	int
		sendMessage(
		CMessage *                pSendMsg);

	void
		printXMLMessage(
		CMessage *                pMessage);
	
};



