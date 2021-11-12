
/*
 * Generated file - DO NOT EDIT
 *
 * This is the header file for the LLRP Tool Kit (LTK)
 * C++ (aka cpp) implementation. It is generated into a .inc file
 * that is included by a platform specific .h header file.
 * That .h file takes care of prerequisites needed by this file.
 */


/*
 * Message classes - forward decls
 */


/* Custom messages */

class CIMPINJ_ENABLE_EXTENSIONS;
class CIMPINJ_ENABLE_EXTENSIONS_RESPONSE;
class CIMPINJ_SAVE_SETTINGS;
class CIMPINJ_SAVE_SETTINGS_RESPONSE;

/*
 * Parameter classes - forward decls
 */


/* Custom parameters */

class CImpinjRequestedData;
class CImpinjSubRegulatoryRegion;
class CImpinjInventorySearchMode;
class CImpinjFixedFrequencyList;
class CImpinjReducedPowerFrequencyList;
class CImpinjLowDutyCycle;
class CImpinjHubVersions;
class CImpinjDetailedVersion;
class CImpinjFrequencyCapabilities;
class CImpinjGPIDebounceConfiguration;
class CImpinjReaderTemperature;
class CImpinjLinkMonitorConfiguration;
class CImpinjReportBufferConfiguration;
class CImpinjAccessSpecConfiguration;
class CImpinjBlockWriteWordCount;
class CImpinjBlockPermalock;
class CImpinjBlockPermalockOpSpecResult;
class CImpinjGetBlockPermalockStatus;
class CImpinjGetBlockPermalockStatusOpSpecResult;
class CImpinjSetQTConfig;
class CImpinjSetQTConfigOpSpecResult;
class CImpinjGetQTConfig;
class CImpinjGetQTConfigOpSpecResult;
class CImpinjTagReportContentSelector;
class CImpinjEnableSerializedTID;
class CImpinjEnableRFPhaseAngle;
class CImpinjEnablePeakRSSI;
class CImpinjEnableGPSCoordinates;
class CImpinjSerializedTID;
class CImpinjRFPhaseAngle;
class CImpinjPeakRSSI;
class CImpinjGPSCoordinates;
class CImpinjLoopSpec;
class CImpinjGPSNMEASentences;
class CImpinjGGASentence;
class CImpinjRMCSentence;
class CImpinjOpSpecRetryCount;
class CImpinjAdvancedGPOConfiguration;
class CImpinjEnableOptimizedRead;
class CImpinjAccessSpecOrdering;
class CImpinjEnableRFDopplerFrequency;
class CImpinjRFDopplerFrequency;
class CImpinjInventoryConfiguration;
class CImpinjEnableTxPower;
class CImpinjTxPower;
class CImpinjArrayVersion;
class CImpinjxArrayCapabilities;
class CImpinjTiltConfiguration;
class CImpinjBeaconConfiguration;
class CImpinjAntennaConfiguration;
class CImpinjAntennaEventHysteresis;
class CImpinjAntennaEventConfiguration;
class CImpinjAntennaAttemptEvent;
class CImpinjHubConfiguration;
class CImpinjDiagnosticReport;
class CImpinjPlacementConfiguration;
class CImpinjLISpec;
class CImpinjLocationConfig;
class CImpinjC1G2LocationConfig;
class CImpinjLocationReporting;
class CImpinjLocationConfidence;
class CImpinjLocationReportData;
class CImpinjDISpec;
class CImpinjDirectionSectors;
class CImpinjDirectionConfig;
class CImpinjDirectionUserTagPopulationLimit;
class CImpinjC1G2DirectionConfig;
class CImpinjExtendedTagInformation;
class CImpinjDirectionReporting;
class CImpinjDirectionReportData;
class CImpinjDirectionDiagnosticData;
class CImpinjxArrayDirectionCapabilities;
class CImpinjIntelligentAntennaManagement;
class CImpinjTransmitPower;
class CImpinjPolarizationControl;
class CImpinjAntennaCapabilities;
class CImpinjAntennaPolarizationCapability;
class CImpinjDisabledAntennas;
class CImpinjTIDParity;
class CImpinjMarginRead;
class CImpinjMarginReadOpSpecResult;
class CImpinjBLEVersion;
class CImpinjLocationAlgorithmControl;
class CImpinjRFPowerSweep;
class CImpinjTruncatedReplyConfiguration;
class CImpinjAuthenticate;
class CImpinjAuthenticateOpSpecResult;
class CImpinjTagFilterVerificationConfiguration;

/*
 * Vendor descriptor declarations.
 */

extern const CVendorDescriptor
g_vdescImpinj;


/*
 * Namespace descriptor declarations.
 */

extern const CNamespaceDescriptor
g_nsdescImpinj;


/*
 * Enumeration definitions and declarations of
 * enumeration string tables.
 */


/**
 ** @brief  Global enumeration EImpinjRequestedDataType for LLRP enumerated field ImpinjRequestedDataType
 **
 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
 **/

enum EImpinjRequestedDataType
{

    ImpinjRequestedDataType_All_Capabilities = 1000, /**< All_Capabilities */ 
    ImpinjRequestedDataType_Impinj_Detailed_Version = 1001, /**< Impinj_Detailed_Version */ 
    ImpinjRequestedDataType_Impinj_Frequency_Capabilities = 1002, /**< Impinj_Frequency_Capabilities */ 
    ImpinjRequestedDataType_Impinj_xArray_Capabilities = 1003, /**< Impinj_xArray_Capabilities */ 
    ImpinjRequestedDataType_Impinj_Antenna_Capabilities = 1004, /**< Impinj_Antenna_Capabilities */ 
    ImpinjRequestedDataType_All_Configuration = 2000, /**< All_Configuration */ 
    ImpinjRequestedDataType_Impinj_Sub_Regulatory_Region = 2001, /**< Impinj_Sub_Regulatory_Region */ 
    ImpinjRequestedDataType_Impinj_GPI_Debounce_Configuration = 2003, /**< Impinj_GPI_Debounce_Configuration */ 
    ImpinjRequestedDataType_Impinj_Reader_Temperature = 2004, /**< Impinj_Reader_Temperature */ 
    ImpinjRequestedDataType_Impinj_Link_Monitor_Configuration = 2005, /**< Impinj_Link_Monitor_Configuration */ 
    ImpinjRequestedDataType_Impinj_Report_Buffer_Configuration = 2006, /**< Impinj_Report_Buffer_Configuration */ 
    ImpinjRequestedDataType_Impinj_Access_Spec_Configuration = 2007, /**< Impinj_Access_Spec_Configuration */ 
    ImpinjRequestedDataType_Impinj_GPS_NMEA_Sentences = 2008, /**< Impinj_GPS_NMEA_Sentences */ 
    ImpinjRequestedDataType_Impinj_Advanced_GPO_Configuration = 2009, /**< Impinj_Advanced_GPO_Configuration */ 
    ImpinjRequestedDataType_Impinj_Tilt_Configuration = 2010, /**< Impinj_Tilt_Configuration */ 
    ImpinjRequestedDataType_Impinj_Beacon_Configuration = 2011, /**< Impinj_Beacon_Configuration */ 
    ImpinjRequestedDataType_Impinj_Antenna_Configuration = 2012, /**< Impinj_Antenna_Configuration */ 
    ImpinjRequestedDataType_Impinj_Location_Configuration = 2013, /**< Impinj_Location_Configuration */ 
    ImpinjRequestedDataType_Impinj_Transition_Configuration = 2014, /**< Impinj_Transition_Configuration */ 
    ImpinjRequestedDataType_Impinj_Hub_Configuration = 2015, /**< Impinj_Hub_Configuration */ 
    ImpinjRequestedDataType_Impinj_PolarizationControl_Configuration = 2017, /**< Impinj_PolarizationControl_Configuration */ 
    ImpinjRequestedDataType_Impinj_Direction_Configuration = 2018, /**< Impinj_Direction_Configuration */  
};

extern const SEnumTableEntry
g_estImpinjRequestedDataType[];


/**
 ** @brief  Global enumeration EImpinjRegulatoryRegion for LLRP enumerated field ImpinjRegulatoryRegion
 **
 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
 **/

enum EImpinjRegulatoryRegion
{

    ImpinjRegulatoryRegion_FCC_Part_15_247 = 0, /**< FCC_Part_15_247 */ 
    ImpinjRegulatoryRegion_ETSI_EN_300_220 = 1, /**< ETSI_EN_300_220 */ 
    ImpinjRegulatoryRegion_ETSI_EN_302_208_With_LBT = 2, /**< ETSI_EN_302_208_With_LBT */ 
    ImpinjRegulatoryRegion_Hong_Kong_920_925_MHz = 3, /**< Hong_Kong_920_925_MHz */ 
    ImpinjRegulatoryRegion_Taiwan_922_928_MHz = 4, /**< Taiwan_922_928_MHz */ 
    ImpinjRegulatoryRegion_ETSI_EN_302_208_v1_2_1 = 7, /**< ETSI_EN_302_208_v1_2_1 */ 
    ImpinjRegulatoryRegion_Korea_917_921_MHz = 8, /**< Korea_917_921_MHz */ 
    ImpinjRegulatoryRegion_Malaysia_919_923_MHz = 9, /**< Malaysia_919_923_MHz */ 
    ImpinjRegulatoryRegion_China_920_925_MHz = 10, /**< China_920_925_MHz */ 
    ImpinjRegulatoryRegion_South_Africa_915_919_MHz = 12, /**< South_Africa_915_919_MHz */ 
    ImpinjRegulatoryRegion_Brazil_902_907_and_915_928_MHz = 13, /**< Brazil_902_907_and_915_928_MHz */ 
    ImpinjRegulatoryRegion_Thailand_920_925_MHz = 14, /**< Thailand_920_925_MHz */ 
    ImpinjRegulatoryRegion_Singapore_920_925_MHz = 15, /**< Singapore_920_925_MHz */ 
    ImpinjRegulatoryRegion_Australia_920_926_MHz = 16, /**< Australia_920_926_MHz */ 
    ImpinjRegulatoryRegion_India_865_867_MHz = 17, /**< India_865_867_MHz */ 
    ImpinjRegulatoryRegion_Uruguay_916_928_MHz = 18, /**< Uruguay_916_928_MHz */ 
    ImpinjRegulatoryRegion_Vietnam_918_923_MHz = 19, /**< Vietnam_918_923_MHz */ 
    ImpinjRegulatoryRegion_Israel_915_917_MHz = 20, /**< Israel_915_917_MHz */ 
    ImpinjRegulatoryRegion_Philippines_918_920_MHz = 21, /**< Philippines_918_920_MHz */ 
    ImpinjRegulatoryRegion_Vietnam_920_923_MHz = 22, /**< Vietnam_920_923_MHz */ 
    ImpinjRegulatoryRegion_Indonesia_920_923_MHz = 23, /**< Indonesia_920_923_MHz */ 
    ImpinjRegulatoryRegion_New_Zealand_921p5_928_MHz = 24, /**< New_Zealand_921p5_928_MHz */ 
    ImpinjRegulatoryRegion_Japan_916_921_MHz_Without_LBT = 25, /**< Japan_916_921_MHz_Without_LBT */ 
    ImpinjRegulatoryRegion_Latin_America_902_928_MHz = 26, /**< Latin_America_902_928_MHz */ 
    ImpinjRegulatoryRegion_Peru_916_928_MHz = 27, /**< Peru_916_928_MHz */ 
    ImpinjRegulatoryRegion_Bangladesh_925_927_MHz = 28, /**< Bangladesh_925_927_MHz */ 
    ImpinjRegulatoryRegion_ETSI_915_921_MHz = 29, /**< ETSI_915_921_MHz */ 
    ImpinjRegulatoryRegion_Morocco_867_868_MHz = 30, /**< Morocco_867_868_MHz */ 
    ImpinjRegulatoryRegion_Paraguay_918_928_MHz = 31, /**< Paraguay_918_928_MHz */ 
    ImpinjRegulatoryRegion_Morocco = 32, /**< Morocco */  
};

extern const SEnumTableEntry
g_estImpinjRegulatoryRegion[];


/**
 ** @brief  Global enumeration EImpinjInventorySearchType for LLRP enumerated field ImpinjInventorySearchType
 **
 
    
    
    
    
    
    
    
  
 **/

enum EImpinjInventorySearchType
{

    ImpinjInventorySearchType_Reader_Selected = 0, /**< Reader_Selected */ 
    ImpinjInventorySearchType_Single_Target = 1, /**< Single_Target */ 
    ImpinjInventorySearchType_Dual_Target = 2, /**< Dual_Target */ 
    ImpinjInventorySearchType_Single_Target_With_Suppression = 3, /**< Single_Target_With_Suppression */ 
    ImpinjInventorySearchType_No_Target = 4, /**< No_Target */ 
    ImpinjInventorySearchType_Single_Target_BtoA = 5, /**< Single_Target_BtoA */ 
    ImpinjInventorySearchType_Dual_Target_with_BtoASelect = 6, /**< Dual_Target_with_BtoASelect */  
};

extern const SEnumTableEntry
g_estImpinjInventorySearchType[];


/**
 ** @brief  Global enumeration EImpinjFixedFrequencyMode for LLRP enumerated field ImpinjFixedFrequencyMode
 **
 
    
    
    
  
 **/

enum EImpinjFixedFrequencyMode
{

    ImpinjFixedFrequencyMode_Disabled = 0, /**< Disabled */ 
    ImpinjFixedFrequencyMode_Auto_Select = 1, /**< Auto_Select */ 
    ImpinjFixedFrequencyMode_Channel_List = 2, /**< Channel_List */  
};

extern const SEnumTableEntry
g_estImpinjFixedFrequencyMode[];


/**
 ** @brief  Global enumeration EImpinjReducedPowerMode for LLRP enumerated field ImpinjReducedPowerMode
 **
 
    
    
  
 **/

enum EImpinjReducedPowerMode
{

    ImpinjReducedPowerMode_Disabled = 0, /**< Disabled */ 
    ImpinjReducedPowerMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjReducedPowerMode[];


/**
 ** @brief  Global enumeration EImpinjLowDutyCycleMode for LLRP enumerated field ImpinjLowDutyCycleMode
 **
 
    
    
  
 **/

enum EImpinjLowDutyCycleMode
{

    ImpinjLowDutyCycleMode_Disabled = 0, /**< Disabled */ 
    ImpinjLowDutyCycleMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjLowDutyCycleMode[];


/**
 ** @brief  Global enumeration EImpinjLinkMonitorMode for LLRP enumerated field ImpinjLinkMonitorMode
 **
 
    
    
  
 **/

enum EImpinjLinkMonitorMode
{

    ImpinjLinkMonitorMode_Disabled = 0, /**< Disabled */ 
    ImpinjLinkMonitorMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjLinkMonitorMode[];


/**
 ** @brief  Global enumeration EImpinjReportBufferMode for LLRP enumerated field ImpinjReportBufferMode
 **
 
    
    
  
 **/

enum EImpinjReportBufferMode
{

    ImpinjReportBufferMode_Normal = 0, /**< Normal */ 
    ImpinjReportBufferMode_Low_Latency = 1, /**< Low_Latency */  
};

extern const SEnumTableEntry
g_estImpinjReportBufferMode[];


/**
 ** @brief  Global enumeration EImpinjBlockPermalockResultType for LLRP enumerated field ImpinjBlockPermalockResultType
 **
 
    
    
    
    
    
    
    
  
 **/

enum EImpinjBlockPermalockResultType
{

    ImpinjBlockPermalockResultType_Success = 0, /**< Success */ 
    ImpinjBlockPermalockResultType_Insufficient_Power = 1, /**< Insufficient_Power */ 
    ImpinjBlockPermalockResultType_Nonspecific_Tag_Error = 2, /**< Nonspecific_Tag_Error */ 
    ImpinjBlockPermalockResultType_No_Response_From_Tag = 3, /**< No_Response_From_Tag */ 
    ImpinjBlockPermalockResultType_Nonspecific_Reader_Error = 4, /**< Nonspecific_Reader_Error */ 
    ImpinjBlockPermalockResultType_Incorrect_Password_Error = 5, /**< Incorrect_Password_Error */ 
    ImpinjBlockPermalockResultType_Tag_Memory_Overrun_Error = 6, /**< Tag_Memory_Overrun_Error */  
};

extern const SEnumTableEntry
g_estImpinjBlockPermalockResultType[];


/**
 ** @brief  Global enumeration EImpinjGetBlockPermalockStatusResultType for LLRP enumerated field ImpinjGetBlockPermalockStatusResultType
 **
 
    
    
    
    
    
    
  
 **/

enum EImpinjGetBlockPermalockStatusResultType
{

    ImpinjGetBlockPermalockStatusResultType_Success = 0, /**< Success */ 
    ImpinjGetBlockPermalockStatusResultType_Nonspecific_Tag_Error = 1, /**< Nonspecific_Tag_Error */ 
    ImpinjGetBlockPermalockStatusResultType_No_Response_From_Tag = 2, /**< No_Response_From_Tag */ 
    ImpinjGetBlockPermalockStatusResultType_Nonspecific_Reader_Error = 3, /**< Nonspecific_Reader_Error */ 
    ImpinjGetBlockPermalockStatusResultType_Incorrect_Password_Error = 4, /**< Incorrect_Password_Error */ 
    ImpinjGetBlockPermalockStatusResultType_Tag_Memory_Overrun_Error = 5, /**< Tag_Memory_Overrun_Error */  
};

extern const SEnumTableEntry
g_estImpinjGetBlockPermalockStatusResultType[];


/**
 ** @brief  Global enumeration EImpinjQTDataProfile for LLRP enumerated field ImpinjQTDataProfile
 **
 
    
    
    
  
 **/

enum EImpinjQTDataProfile
{

    ImpinjQTDataProfile_Unknown = 0, /**< Unknown */ 
    ImpinjQTDataProfile_Private = 1, /**< Private */ 
    ImpinjQTDataProfile_Public = 2, /**< Public */  
};

extern const SEnumTableEntry
g_estImpinjQTDataProfile[];


/**
 ** @brief  Global enumeration EImpinjQTAccessRange for LLRP enumerated field ImpinjQTAccessRange
 **
 
    
    
    
  
 **/

enum EImpinjQTAccessRange
{

    ImpinjQTAccessRange_Unknown = 0, /**< Unknown */ 
    ImpinjQTAccessRange_Normal_Range = 1, /**< Normal_Range */ 
    ImpinjQTAccessRange_Short_Range = 2, /**< Short_Range */  
};

extern const SEnumTableEntry
g_estImpinjQTAccessRange[];


/**
 ** @brief  Global enumeration EImpinjQTPersistence for LLRP enumerated field ImpinjQTPersistence
 **
 
    
    
    
  
 **/

enum EImpinjQTPersistence
{

    ImpinjQTPersistence_Unknown = 0, /**< Unknown */ 
    ImpinjQTPersistence_Temporary = 1, /**< Temporary */ 
    ImpinjQTPersistence_Permanent = 2, /**< Permanent */  
};

extern const SEnumTableEntry
g_estImpinjQTPersistence[];


/**
 ** @brief  Global enumeration EImpinjSetQTConfigResultType for LLRP enumerated field ImpinjSetQTConfigResultType
 **
 
    
    
    
    
    
    
  
 **/

enum EImpinjSetQTConfigResultType
{

    ImpinjSetQTConfigResultType_Success = 0, /**< Success */ 
    ImpinjSetQTConfigResultType_Insufficient_Power = 1, /**< Insufficient_Power */ 
    ImpinjSetQTConfigResultType_Nonspecific_Tag_Error = 2, /**< Nonspecific_Tag_Error */ 
    ImpinjSetQTConfigResultType_No_Response_From_Tag = 3, /**< No_Response_From_Tag */ 
    ImpinjSetQTConfigResultType_Nonspecific_Reader_Error = 4, /**< Nonspecific_Reader_Error */ 
    ImpinjSetQTConfigResultType_Incorrect_Password_Error = 5, /**< Incorrect_Password_Error */  
};

extern const SEnumTableEntry
g_estImpinjSetQTConfigResultType[];


/**
 ** @brief  Global enumeration EImpinjGetQTConfigResultType for LLRP enumerated field ImpinjGetQTConfigResultType
 **
 
    
    
    
    
    
  
 **/

enum EImpinjGetQTConfigResultType
{

    ImpinjGetQTConfigResultType_Success = 0, /**< Success */ 
    ImpinjGetQTConfigResultType_Nonspecific_Tag_Error = 1, /**< Nonspecific_Tag_Error */ 
    ImpinjGetQTConfigResultType_No_Response_From_Tag = 2, /**< No_Response_From_Tag */ 
    ImpinjGetQTConfigResultType_Nonspecific_Reader_Error = 3, /**< Nonspecific_Reader_Error */ 
    ImpinjGetQTConfigResultType_Incorrect_Password_Error = 4, /**< Incorrect_Password_Error */  
};

extern const SEnumTableEntry
g_estImpinjGetQTConfigResultType[];


/**
 ** @brief  Global enumeration EImpinjSerializedTIDMode for LLRP enumerated field ImpinjSerializedTIDMode
 **
 
    
    
  
 **/

enum EImpinjSerializedTIDMode
{

    ImpinjSerializedTIDMode_Disabled = 0, /**< Disabled */ 
    ImpinjSerializedTIDMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjSerializedTIDMode[];


/**
 ** @brief  Global enumeration EImpinjRFPhaseAngleMode for LLRP enumerated field ImpinjRFPhaseAngleMode
 **
 
    
    
  
 **/

enum EImpinjRFPhaseAngleMode
{

    ImpinjRFPhaseAngleMode_Disabled = 0, /**< Disabled */ 
    ImpinjRFPhaseAngleMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjRFPhaseAngleMode[];


/**
 ** @brief  Global enumeration EImpinjPeakRSSIMode for LLRP enumerated field ImpinjPeakRSSIMode
 **
 
    
    
  
 **/

enum EImpinjPeakRSSIMode
{

    ImpinjPeakRSSIMode_Disabled = 0, /**< Disabled */ 
    ImpinjPeakRSSIMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjPeakRSSIMode[];


/**
 ** @brief  Global enumeration EImpinjGPSCoordinatesMode for LLRP enumerated field ImpinjGPSCoordinatesMode
 **
 
    
    
  
 **/

enum EImpinjGPSCoordinatesMode
{

    ImpinjGPSCoordinatesMode_Disabled = 0, /**< Disabled */ 
    ImpinjGPSCoordinatesMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjGPSCoordinatesMode[];


/**
 ** @brief  Global enumeration EImpinjAdvancedGPOMode for LLRP enumerated field ImpinjAdvancedGPOMode
 **
 
    
    
    
    
    
    
    
  
 **/

enum EImpinjAdvancedGPOMode
{

    ImpinjAdvancedGPOMode_Normal = 0, /**< Normal */ 
    ImpinjAdvancedGPOMode_Pulsed = 1, /**< Pulsed */ 
    ImpinjAdvancedGPOMode_Reader_Operational_Status = 2, /**< Reader_Operational_Status */ 
    ImpinjAdvancedGPOMode_LLRP_Connection_Status = 3, /**< LLRP_Connection_Status */ 
    ImpinjAdvancedGPOMode_Reader_Inventory_Status = 4, /**< Reader_Inventory_Status */ 
    ImpinjAdvancedGPOMode_Network_Connection_Status = 5, /**< Network_Connection_Status */ 
    ImpinjAdvancedGPOMode_Reader_Inventory_Tags_Status = 6, /**< Reader_Inventory_Tags_Status */  
};

extern const SEnumTableEntry
g_estImpinjAdvancedGPOMode[];


/**
 ** @brief  Global enumeration EImpinjOptimizedReadMode for LLRP enumerated field ImpinjOptimizedReadMode
 **
 
    
    
  
 **/

enum EImpinjOptimizedReadMode
{

    ImpinjOptimizedReadMode_Disabled = 0, /**< Disabled */ 
    ImpinjOptimizedReadMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjOptimizedReadMode[];


/**
 ** @brief  Global enumeration EImpinjAccessSpecOrderingMode for LLRP enumerated field ImpinjAccessSpecOrderingMode
 **
 
    
    
  
 **/

enum EImpinjAccessSpecOrderingMode
{

    ImpinjAccessSpecOrderingMode_FIFO = 0, /**< FIFO */ 
    ImpinjAccessSpecOrderingMode_Ascending = 1, /**< Ascending */  
};

extern const SEnumTableEntry
g_estImpinjAccessSpecOrderingMode[];


/**
 ** @brief  Global enumeration EImpinjRFDopplerFrequencyMode for LLRP enumerated field ImpinjRFDopplerFrequencyMode
 **
 
    
    
  
 **/

enum EImpinjRFDopplerFrequencyMode
{

    ImpinjRFDopplerFrequencyMode_Disabled = 0, /**< Disabled */ 
    ImpinjRFDopplerFrequencyMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjRFDopplerFrequencyMode[];


/**
 ** @brief  Global enumeration EImpinjTxPowerReportingModeEnum for LLRP enumerated field ImpinjTxPowerReportingModeEnum
 **
 
    
    
  
 **/

enum EImpinjTxPowerReportingModeEnum
{

    ImpinjTxPowerReportingModeEnum_Disabled = 0, /**< Disabled */ 
    ImpinjTxPowerReportingModeEnum_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjTxPowerReportingModeEnum[];


/**
 ** @brief  Global enumeration EImpinjHubConnectedType for LLRP enumerated field ImpinjHubConnectedType
 **
 
    
    
    
  
 **/

enum EImpinjHubConnectedType
{

    ImpinjHubConnectedType_Unknown = 0, /**< Unknown */ 
    ImpinjHubConnectedType_Disconnected = 1, /**< Disconnected */ 
    ImpinjHubConnectedType_Connected = 2, /**< Connected */  
};

extern const SEnumTableEntry
g_estImpinjHubConnectedType[];


/**
 ** @brief  Global enumeration EImpinjHubFaultType for LLRP enumerated field ImpinjHubFaultType
 **
 
    
    
    
    
    
    
    
    
    
  
 **/

enum EImpinjHubFaultType
{

    ImpinjHubFaultType_No_Fault = 0, /**< No_Fault */ 
    ImpinjHubFaultType_RF_Power = 1, /**< RF_Power */ 
    ImpinjHubFaultType_RF_Power_On_Hub_1 = 2, /**< RF_Power_On_Hub_1 */ 
    ImpinjHubFaultType_RF_Power_On_Hub_2 = 3, /**< RF_Power_On_Hub_2 */ 
    ImpinjHubFaultType_RF_Power_On_Hub_3 = 4, /**< RF_Power_On_Hub_3 */ 
    ImpinjHubFaultType_RF_Power_On_Hub_4 = 5, /**< RF_Power_On_Hub_4 */ 
    ImpinjHubFaultType_No_Init = 6, /**< No_Init */ 
    ImpinjHubFaultType_Serial_Overflow = 7, /**< Serial_Overflow */ 
    ImpinjHubFaultType_Disconnected = 8, /**< Disconnected */  
};

extern const SEnumTableEntry
g_estImpinjHubFaultType[];


/**
 ** @brief  Global enumeration EImpinjLocationReportType for LLRP enumerated field ImpinjLocationReportType
 **
 
    
    
    
  
 **/

enum EImpinjLocationReportType
{

    ImpinjLocationReportType_Entry = 0, /**< Entry */ 
    ImpinjLocationReportType_Update = 1, /**< Update */ 
    ImpinjLocationReportType_Exit = 2, /**< Exit */  
};

extern const SEnumTableEntry
g_estImpinjLocationReportType[];


/**
 ** @brief  Global enumeration EImpinjDirectionFieldOfView for LLRP enumerated field ImpinjDirectionFieldOfView
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>Description</p> 
 
        
    <ul>
        
    <li>
    <p>ReaderSelected: Use inner beams (ring 2) with 2 enabled sectors, use the outer beams (ring 4) with 3 or more enabled sectors. This is the default.</p> 
 </li>
 
        
    <li>
    <p>Wide:           Use the outer beams (ring 4).</p> 
 </li>
 
        
    <li>
    <p>Narrow:         Use the inner beams (ring 2).</p> 
 </li>
 
        </ul> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

enum EImpinjDirectionFieldOfView
{

    ImpinjDirectionFieldOfView_ReaderSelected = 0, /**< ReaderSelected */ 
    ImpinjDirectionFieldOfView_Wide = 1, /**< Wide */ 
    ImpinjDirectionFieldOfView_Narrow = 2, /**< Narrow */  
};

extern const SEnumTableEntry
g_estImpinjDirectionFieldOfView[];


/**
 ** @brief  Global enumeration EImpinjDirectionRFMode for LLRP enumerated field ImpinjDirectionRFMode
 **
 
    
      
<ul>
  
</ul>  

      
        
    <ul>
        
    <li>
    <p>HighSensitivity: Optimal for difficult to reach tag populations.</p> 
 </li>
 
        
    <li>
    <p>HighPerformance: Optimal for larger tag populations. This is the default.</p> 
 </li>
 
        </ul> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

enum EImpinjDirectionRFMode
{

    ImpinjDirectionRFMode_HighSensitivity = 0, /**< HighSensitivity */ 
    ImpinjDirectionRFMode_HighPerformance = 1, /**< HighPerformance */  
};

extern const SEnumTableEntry
g_estImpinjDirectionRFMode[];


/**
 ** @brief  Global enumeration EImpinjDirectionDiagnosticReportLevel for LLRP enumerated field ImpinjDirectionDiagnosticReportLevel
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter specifies the reporting level for direction operation.</p> 
 
        
    <ul>
        
    <li>
    <p>Off:      Exclude any diagnostics from reports. This is the default.</p> 
 </li>
 
        
    <li>
    <p>Basic:    Include basic diagnostics in reports.</p> 
 </li>
 
        
    <li>
    <p>Extended: Include extended diagnostic data in reports.</p> 
 </li>
 
        
    <li>
    <p>Debug:    Include debug data in reports.</p> 
 </li>
 
        </ul> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

enum EImpinjDirectionDiagnosticReportLevel
{

    ImpinjDirectionDiagnosticReportLevel_Off = 0, /**< Off */ 
    ImpinjDirectionDiagnosticReportLevel_Basic = 1, /**< Basic */ 
    ImpinjDirectionDiagnosticReportLevel_Extended = 2, /**< Extended */ 
    ImpinjDirectionDiagnosticReportLevel_Debug = 3, /**< Debug */  
};

extern const SEnumTableEntry
g_estImpinjDirectionDiagnosticReportLevel[];


/**
 ** @brief  Global enumeration EImpinjDirectionReportType for LLRP enumerated field ImpinjDirectionReportType
 **
 
    
      
        
    <p>This parameter specifies the type of direction report.</p> 
 
        
    <ul>
        
    <li>
    <p>Entry:  Report is an entry report.</p> 
 </li>
 
        
    <li>
    <p>Update: Report is an update report.</p> 
 </li>
 
        
    <li>
    <p>Exit:   Report is an exit report.</p> 
 </li>
 
        </ul> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

enum EImpinjDirectionReportType
{

    ImpinjDirectionReportType_Entry = 0, /**< Entry */ 
    ImpinjDirectionReportType_Update = 1, /**< Update */ 
    ImpinjDirectionReportType_Exit = 2, /**< Exit */  
};

extern const SEnumTableEntry
g_estImpinjDirectionReportType[];


/**
 ** @brief  Global enumeration EImpinjDirectionTagPopulationStatus for LLRP enumerated field ImpinjDirectionTagPopulationStatus
 **
 
    
      
        
    <p>This parameter indicates the status of the tag population.</p> 
 
        
    <ul>
        
    <li>
    <p>OK:             Tag population is within system and user limits.</p> 
 </li>
 
        
    <li>
    <p>UserOverflow:   Tag population exceeds the user limit, if such a limit is configured.</p> 
 </li>
 
        
    <li>
    <p>SystemOverflow: Tag population exceeds the system limit.</p> 
 </li>
 
        </ul> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

enum EImpinjDirectionTagPopulationStatus
{

    ImpinjDirectionTagPopulationStatus_OK = 0, /**< OK */ 
    ImpinjDirectionTagPopulationStatus_UserOverflow = 1, /**< UserOverflow */ 
    ImpinjDirectionTagPopulationStatus_SystemOverflow = 2, /**< SystemOverflow */  
};

extern const SEnumTableEntry
g_estImpinjDirectionTagPopulationStatus[];


/**
 ** @brief  Global enumeration EImpinjIntelligentAntennaMode for LLRP enumerated field ImpinjIntelligentAntennaMode
 **
 
    
    
  
 **/

enum EImpinjIntelligentAntennaMode
{

    ImpinjIntelligentAntennaMode_Disabled = 0, /**< Disabled */ 
    ImpinjIntelligentAntennaMode_Enabled = 1, /**< Enabled */  
};

extern const SEnumTableEntry
g_estImpinjIntelligentAntennaMode[];


/**
 ** @brief  Global enumeration EImpinjAntennaPolarizationType for LLRP enumerated field ImpinjAntennaPolarizationType
 **
 
    
    
    
    
  
 **/

enum EImpinjAntennaPolarizationType
{

    ImpinjAntennaPolarizationType_LinearHorizontal = 0, /**< LinearHorizontal */ 
    ImpinjAntennaPolarizationType_LinearVertical = 1, /**< LinearVertical */ 
    ImpinjAntennaPolarizationType_CircularRight = 2, /**< CircularRight */ 
    ImpinjAntennaPolarizationType_CircularLeft = 3, /**< CircularLeft */  
};

extern const SEnumTableEntry
g_estImpinjAntennaPolarizationType[];


/**
 ** @brief  Global enumeration EImpinjMarginReadResultType for LLRP enumerated field ImpinjMarginReadResultType
 **
 
    
    
    
    
    
    
    
    
    
  
 **/

enum EImpinjMarginReadResultType
{

    ImpinjMarginReadResultType_Success = 0, /**< Success */ 
    ImpinjMarginReadResultType_Failure = 1, /**< Failure */ 
    ImpinjMarginReadResultType_Insufficient_Power = 2, /**< Insufficient_Power */ 
    ImpinjMarginReadResultType_Nonspecific_Tag_Error = 3, /**< Nonspecific_Tag_Error */ 
    ImpinjMarginReadResultType_No_Response_From_Tag = 4, /**< No_Response_From_Tag */ 
    ImpinjMarginReadResultType_Nonspecific_Reader_Error = 5, /**< Nonspecific_Reader_Error */ 
    ImpinjMarginReadResultType_Incorrect_Password_Error = 6, /**< Incorrect_Password_Error */ 
    ImpinjMarginReadResultType_Tag_Memory_Overrun_Error = 7, /**< Tag_Memory_Overrun_Error */ 
    ImpinjMarginReadResultType_Tag_Memory_Locked_Error = 8, /**< Tag_Memory_Locked_Error */  
};

extern const SEnumTableEntry
g_estImpinjMarginReadResultType[];


/**
 ** @brief  Global enumeration EImpinjAuthenticateResultType for LLRP enumerated field ImpinjAuthenticateResultType
 **
 
    
    
    
    
    
    
  
 **/

enum EImpinjAuthenticateResultType
{

    ImpinjAuthenticateResultType_Success = 0, /**< Success */ 
    ImpinjAuthenticateResultType_Insufficient_Power = 1, /**< Insufficient_Power */ 
    ImpinjAuthenticateResultType_Not_Supported_Error = 2, /**< Not_Supported_Error */ 
    ImpinjAuthenticateResultType_Nonspecific_Tag_Error = 3, /**< Nonspecific_Tag_Error */ 
    ImpinjAuthenticateResultType_Nonspecific_Reader_Error = 4, /**< Nonspecific_Reader_Error */ 
    ImpinjAuthenticateResultType_No_Response_From_Tag = 5, /**< No_Response_From_Tag */  
};

extern const SEnumTableEntry
g_estImpinjAuthenticateResultType[];


/**
 ** @brief  Global enumeration EImpinjTagFilterVerificationMode for LLRP enumerated field ImpinjTagFilterVerificationMode
 **
 
    
    
  
 **/

enum EImpinjTagFilterVerificationMode
{

    ImpinjTagFilterVerificationMode_Disabled = 0, /**< Disabled */ 
    ImpinjTagFilterVerificationMode_Active = 1, /**< Active */  
};

extern const SEnumTableEntry
g_estImpinjTagFilterVerificationMode[];


/** 
 * \defgroup ImpinjMessage  Impinj Message Classes
 * Classes to manipulate the messages defined by the Impinj LLRP protocol
 */
/*@{*/ 

/**
 ** @brief  Class Definition CIMPINJ_ENABLE_EXTENSIONS for LLRP message IMPINJ_ENABLE_EXTENSIONS
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>The IMPINJ_ENABLE_EXTENSIONS message only applies for the duration of the current LLRP connection. If the LLRP connection is broken and re-established, the application must re-issue this command.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CIMPINJ_ENABLE_EXTENSIONS : public CMessage
{
  public:
    CIMPINJ_ENABLE_EXTENSIONS (void);
    ~CIMPINJ_ENABLE_EXTENSIONS (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_ENABLE_EXTENSIONS_RESPONSE for LLRP message IMPINJ_ENABLE_EXTENSIONS_RESPONSE
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom message is the response by the Reader to an IMPINJ_ENABLE_EXTENSIONS message. If the Reader was capable of enabling the Impinj extensions the reader returns the success code in the LLRPStatus parameter. If there is an error, the reader returns an appropriate error code.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CIMPINJ_ENABLE_EXTENSIONS_RESPONSE : public CMessage
{
  public:
    CIMPINJ_ENABLE_EXTENSIONS_RESPONSE (void);
    ~CIMPINJ_ENABLE_EXTENSIONS_RESPONSE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CLLRPStatus * m_pLLRPStatus;

  public:
    /** @brief Get accessor functions for the LLRP LLRPStatus sub-parameter */  
    inline CLLRPStatus *
    getLLRPStatus (void)
    {
        return m_pLLRPStatus;
    }

    /** @brief Set accessor functions for the LLRP LLRPStatus sub-parameter */  
    EResultCode
    setLLRPStatus (
      CLLRPStatus * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_SAVE_SETTINGS for LLRP message IMPINJ_SAVE_SETTINGS
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom message instructs the Reader to save its current settings to persistent storage. The saved parameters will then become the Reader's power-on and reset settings.</p> 
 
         
    <p>On Speedway the settings include only the current configuration set through SET_READER_CONFIG.</p> 
 
         
    <p>On Speedway Revolution the settings include the current configuration, ROSpecs, and AccessSpecs. The enabled or disabled state of ROSpecs and AccessSpecs are saved. An active ROSpec is saved as enabled. The current countdown of AccessSpecs, if any, are saved. The enable/disable state and countdown are not automatically updated in persistent storage during reader operation.</p> 
 
         
    <p>Note that there is no way to recall the persistent settings during runtime. Only after a Reader power-on or reset are the persistent settings applied. When ResetToFactoryDefault in SET_READER_CONFIG is true the persistent settings are deleted. The SaveConfiguration Boolean must be set TRUE. When FALSE this message does nothing.</p> 
 
      <SMALL><i>Copyright 2007, 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CIMPINJ_SAVE_SETTINGS : public CMessage
{
  public:
    CIMPINJ_SAVE_SETTINGS (void);
    ~CIMPINJ_SAVE_SETTINGS (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_SaveConfiguration;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSaveConfiguration;
//@}

    /** @brief Get accessor functions for the LLRP SaveConfiguration field */
    inline llrp_u1_t
    getSaveConfiguration (void)
    {
        return m_SaveConfiguration;
    }

    /** @brief Set accessor functions for the LLRP SaveConfiguration field */
    inline void
    setSaveConfiguration (
      llrp_u1_t value)
    {
        m_SaveConfiguration = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CIMPINJ_SAVE_SETTINGS_RESPONSE for LLRP message IMPINJ_SAVE_SETTINGS_RESPONSE
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom message is the response by the Reader to an IMPINJ_SAVE_SETTINGS message. If the Reader was capable of saving the current configuration to persistent storage, the Reader returns the success code in the LLRPStatus parameter. If there is an error, the Reader returns an appropriate error code.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CIMPINJ_SAVE_SETTINGS_RESPONSE : public CMessage
{
  public:
    CIMPINJ_SAVE_SETTINGS_RESPONSE (void);
    ~CIMPINJ_SAVE_SETTINGS_RESPONSE (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CLLRPStatus * m_pLLRPStatus;

  public:
    /** @brief Get accessor functions for the LLRP LLRPStatus sub-parameter */  
    inline CLLRPStatus *
    getLLRPStatus (void)
    {
        return m_pLLRPStatus;
    }

    /** @brief Set accessor functions for the LLRP LLRPStatus sub-parameter */  
    EResultCode
    setLLRPStatus (
      CLLRPStatus * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/*@}*/

/** 
 * \defgroup ImpinjParameter Impinj Parameter Classes
 * Classes to manipulate the parameters defined by the Impinj LLRP protocol
 */
/*@{*/ 

/**
 ** @brief  Class Definition CImpinjRequestedData for LLRP parameter ImpinjRequestedData
 **
 
    
      
<ul>
  
</ul>  

      
      <SMALL><i>Copyright 2007, 2008, 2014 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjRequestedData : public CParameter
{
  public:
    CImpinjRequestedData (void);
    ~CImpinjRequestedData (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjRequestedDataType m_eRequestedData;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRequestedData;
//@}

    /** @brief Get accessor functions for the LLRP RequestedData field */
    inline EImpinjRequestedDataType
    getRequestedData (void)
    {
        return m_eRequestedData;
    }

    /** @brief Set accessor functions for the LLRP RequestedData field */
    inline void
    setRequestedData (
      EImpinjRequestedDataType value)
    {
        m_eRequestedData = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSubRegulatoryRegion for LLRP parameter ImpinjSubRegulatoryRegion
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is used when a particular regulatory region supports multiple operational modes. The Reader validates the RegulatoryRegion field against the regulatory region advertised in the reader's capabilities and only allows compatible regions to be set. Note that when setting the sub-regulatory region using the SET_READER_CONFIG message, the ResetToFactoryDefault field must be set to true. This will delete any configured ROSpecs and AccessSpecs. Failure to set the ResetToFactoryDefault field will result in an error. The Client should subsequently issue a GET_READER_CAPABILITIES command after updating the regulatory region as the change may have affected the advertised tables.</p> 
 
        
    <p>After the reader accepts this parameter, it will begin to reload its regulatory settings; this can take several seconds. Applications should plan for an additional delay of several seconds for the SET_READER_CONFIG_RESPONSE. Note: An LLRP ResetToFactoryDefault that changes the RegulatoryRegion will have the same behavior.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjSubRegulatoryRegion : public CParameter
{
  public:
    CImpinjSubRegulatoryRegion (void);
    ~CImpinjSubRegulatoryRegion (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjRegulatoryRegion m_eRegulatoryRegion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRegulatoryRegion;
//@}

    /** @brief Get accessor functions for the LLRP RegulatoryRegion field */
    inline EImpinjRegulatoryRegion
    getRegulatoryRegion (void)
    {
        return m_eRegulatoryRegion;
    }

    /** @brief Set accessor functions for the LLRP RegulatoryRegion field */
    inline void
    setRegulatoryRegion (
      EImpinjRegulatoryRegion value)
    {
        m_eRegulatoryRegion = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjInventorySearchMode for LLRP parameter ImpinjInventorySearchMode
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom parameter specifies the Impinj-specific inventory search mode used by a particular antenna. The inventory search mode may be configured as either part of the default reader configuration (via a SET_READER_CONFIG message), or as part of individual AISpecs within a ROSpec (via an ADD_ROSPEC message). For any AISpec, each enabled antenna must be configured to use the same search algorithm. Mismatched antennas will result in an error reported by the Reader.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjInventorySearchMode : public CParameter
{
  public:
    CImpinjInventorySearchMode (void);
    ~CImpinjInventorySearchMode (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjInventorySearchType m_eInventorySearchMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdInventorySearchMode;
//@}

    /** @brief Get accessor functions for the LLRP InventorySearchMode field */
    inline EImpinjInventorySearchType
    getInventorySearchMode (void)
    {
        return m_eInventorySearchMode;
    }

    /** @brief Set accessor functions for the LLRP InventorySearchMode field */
    inline void
    setInventorySearchMode (
      EImpinjInventorySearchType value)
    {
        m_eInventorySearchMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjFixedFrequencyList for LLRP parameter ImpinjFixedFrequencyList
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom parameter allows the Reader to make intelligent decisions about which channel to use in fixed frequency or intelligent hopping regulatory regions. The Mode field determines how the Reader will select the active channel. When set to zero (disabled), the Reader ignores this parameter and instead uses the frequency information in the LLRP RFTransmitter parameter. When set to one, the Reader chooses the active channel automatically based on the rules of the regulatory region. When set to two, the Reader chooses the active channel from a configurable list of channel indices based on the FixedFrequencyTable parameter advertised in the Reader's capabilities. The maximum number of channels allowed in the configurable list varies by regulatory region. A repeated channel index means the Reader will use the channel multiple times. When Mode is set to zero or one, the ChannelList array is ignored.</p> 
 
         
    <p>This parameter may only be added in an operational mode (i.e. not disabled) when the Reader is operating in a fixed frequency or intelligent hopping regulatory region. The parameter contents must be consistent across all enabled antennas in an AISpec.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjFixedFrequencyList : public CParameter
{
  public:
    CImpinjFixedFrequencyList (void);
    ~CImpinjFixedFrequencyList (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjFixedFrequencyMode m_eFixedFrequencyMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFixedFrequencyMode;
//@}

    /** @brief Get accessor functions for the LLRP FixedFrequencyMode field */
    inline EImpinjFixedFrequencyMode
    getFixedFrequencyMode (void)
    {
        return m_eFixedFrequencyMode;
    }

    /** @brief Set accessor functions for the LLRP FixedFrequencyMode field */
    inline void
    setFixedFrequencyMode (
      EImpinjFixedFrequencyMode value)
    {
        m_eFixedFrequencyMode = value;
    }


  protected:
    llrp_u16v_t m_ChannelList;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdChannelList;
//@}

    /** @brief Get accessor functions for the LLRP ChannelList field */
    inline llrp_u16v_t
    getChannelList (void)
    {
        return m_ChannelList;
    }

    /** @brief Set accessor functions for the LLRP ChannelList field */
    inline void
    setChannelList (
      llrp_u16v_t value)
    {
        m_ChannelList = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjReducedPowerFrequencyList for LLRP parameter ImpinjReducedPowerFrequencyList
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter allows the Reader to apply a reduced power to specific channels listed in the ChannelList when operating in the FCC regulatory region. The ReducedPowerMode field determines how the Reader will interpret the channels listed. When set to zero (disabled), the Reader ignores this parameter. When set to one, during inventory and access the Reader will apply a reduced power level to the list of channel indices derived from the FrequencyList supplied by the ImpinjFrequenciesCapabilities parameter advertised in the Reader's capabilities. The reduced power level is not configurable, and defaults to the lowest power possible by the device. The minimum number of channels allowed in the configurable list is two, and the maximum is sixteen.</p> 
 
        
    <p>This parameter is valid only when the Reader is operating in the FCC regulatory region. The parameter contents must be consistent across all enabled antennas in an AISpec.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjReducedPowerFrequencyList : public CParameter
{
  public:
    CImpinjReducedPowerFrequencyList (void);
    ~CImpinjReducedPowerFrequencyList (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjReducedPowerMode m_eReducedPowerMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdReducedPowerMode;
//@}

    /** @brief Get accessor functions for the LLRP ReducedPowerMode field */
    inline EImpinjReducedPowerMode
    getReducedPowerMode (void)
    {
        return m_eReducedPowerMode;
    }

    /** @brief Set accessor functions for the LLRP ReducedPowerMode field */
    inline void
    setReducedPowerMode (
      EImpinjReducedPowerMode value)
    {
        m_eReducedPowerMode = value;
    }


  protected:
    llrp_u16v_t m_ChannelList;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdChannelList;
//@}

    /** @brief Get accessor functions for the LLRP ChannelList field */
    inline llrp_u16v_t
    getChannelList (void)
    {
        return m_ChannelList;
    }

    /** @brief Set accessor functions for the LLRP ChannelList field */
    inline void
    setChannelList (
      llrp_u16v_t value)
    {
        m_ChannelList = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLowDutyCycle for LLRP parameter ImpinjLowDutyCycle
 **
 
    
      
<ul>
  
</ul>  

      
         
    <p>This custom parameter provides additional control of the RF duty cycle of the Reader beyond that provided by the TagTransitTime field in the LLRP C1G2SingulationControl parameter. During inventory, if the Reader detects zero tags on all enabled antennas in the AISpec, EmptyFieldTimeout specifies in milliseconds the time the Reader will wait before entering low duty cycle mode. In this low duty cycle mode, the Reader will revisit each enabled antenna in the AISpec every FieldPingInterval milliseconds, checking for tags. When a tag is detected, full duty cycle will resume. The Reader will exit low duty cycle mode at the start of each AISpec and restart its EmptyFieldTimeout timer.</p> 
 
         
    <p>As an example, assume EmptyFieldTimeout is set to 500 ms and FieldPingInterval is set to 200 ms for each of the enabled antennas in an AISpec, and four antennas are enabled. Once the Reader detects zero tags on each of the four antennas, the EmptyFieldTimeout timer starts while the Reader continues to search the FOV for tags. If the Reader detects tags, the timer stops. If the Reader detects zero tags for 500 ms, a timeout occurs and the Reader enters low duty cycle mode. During this mode, the Reader will visit each of the four enabled antennas once in the FieldPingInterval of 200 ms. Therefore, the Reader will switch on the transmitter briefly every 50 ms to check for tags in the FOV of one of the enabled antennas.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjLowDutyCycle : public CParameter
{
  public:
    CImpinjLowDutyCycle (void);
    ~CImpinjLowDutyCycle (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjLowDutyCycleMode m_eLowDutyCycleMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLowDutyCycleMode;
//@}

    /** @brief Get accessor functions for the LLRP LowDutyCycleMode field */
    inline EImpinjLowDutyCycleMode
    getLowDutyCycleMode (void)
    {
        return m_eLowDutyCycleMode;
    }

    /** @brief Set accessor functions for the LLRP LowDutyCycleMode field */
    inline void
    setLowDutyCycleMode (
      EImpinjLowDutyCycleMode value)
    {
        m_eLowDutyCycleMode = value;
    }


  protected:
    llrp_u16_t m_EmptyFieldTimeout;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEmptyFieldTimeout;
//@}

    /** @brief Get accessor functions for the LLRP EmptyFieldTimeout field */
    inline llrp_u16_t
    getEmptyFieldTimeout (void)
    {
        return m_EmptyFieldTimeout;
    }

    /** @brief Set accessor functions for the LLRP EmptyFieldTimeout field */
    inline void
    setEmptyFieldTimeout (
      llrp_u16_t value)
    {
        m_EmptyFieldTimeout = value;
    }


  protected:
    llrp_u16_t m_FieldPingInterval;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFieldPingInterval;
//@}

    /** @brief Get accessor functions for the LLRP FieldPingInterval field */
    inline llrp_u16_t
    getFieldPingInterval (void)
    {
        return m_FieldPingInterval;
    }

    /** @brief Set accessor functions for the LLRP FieldPingInterval field */
    inline void
    setFieldPingInterval (
      llrp_u16_t value)
    {
        m_FieldPingInterval = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjHubVersions for LLRP parameter ImpinjHubVersions
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter contains Antenna Hub-specific hardware and version information that is considered additional to ImpinjDetailedVersion information.</p> 
 
      <SMALL><i>Copyright 2012, 2014 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
  
 **/

class CImpinjHubVersions : public CParameter
{
  public:
    CImpinjHubVersions (void);
    ~CImpinjHubVersions (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    std::list<CImpinjArrayVersion *> m_listImpinjArrayVersion;

  public:
     /** @brief  Returns the first element of the ImpinjArrayVersion sub-parameter list*/  
    inline std::list<CImpinjArrayVersion *>::iterator
    beginImpinjArrayVersion (void)
    {
        return m_listImpinjArrayVersion.begin();
    }

     /** @brief  Returns the last element of the ImpinjArrayVersion sub-parameter list*/  
    inline std::list<CImpinjArrayVersion *>::iterator
    endImpinjArrayVersion (void)
    {
        return m_listImpinjArrayVersion.end();
    }

     /** @brief  Clears the LLRP ImpinjArrayVersion sub-parameter list*/  
    inline void
    clearImpinjArrayVersion (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listImpinjArrayVersion);
    }

     /** @brief  Count of the LLRP ImpinjArrayVersion sub-parameter list*/  
    inline int
    countImpinjArrayVersion (void)
    {
        return (int) (m_listImpinjArrayVersion.size());
    }

    EResultCode
     /** @brief  Add a ImpinjArrayVersion to the LLRP sub-parameter list*/  
    addImpinjArrayVersion (
      CImpinjArrayVersion * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDetailedVersion for LLRP parameter ImpinjDetailedVersion
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides detailed information about the individual components running on the Reader. The primary platform version is available in the FirmwareVersion field in the GeneralDeviceCapabilities parameter of the Reader's capabilities. However, there are sub-components of the Reader that contain independent version information that is unavailable in this manner. This parameter provides this detailed information.</p> 
 
      <SMALL><i>Copyright 2007, 2008, 2014 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjDetailedVersion : public CParameter
{
  public:
    CImpinjDetailedVersion (void);
    ~CImpinjDetailedVersion (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_ModelName;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdModelName;
//@}

    /** @brief Get accessor functions for the LLRP ModelName field */
    inline llrp_utf8v_t
    getModelName (void)
    {
        return m_ModelName;
    }

    /** @brief Set accessor functions for the LLRP ModelName field */
    inline void
    setModelName (
      llrp_utf8v_t value)
    {
        m_ModelName = value;
    }


  protected:
    llrp_utf8v_t m_SerialNumber;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSerialNumber;
//@}

    /** @brief Get accessor functions for the LLRP SerialNumber field */
    inline llrp_utf8v_t
    getSerialNumber (void)
    {
        return m_SerialNumber;
    }

    /** @brief Set accessor functions for the LLRP SerialNumber field */
    inline void
    setSerialNumber (
      llrp_utf8v_t value)
    {
        m_SerialNumber = value;
    }


  protected:
    llrp_utf8v_t m_SoftwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSoftwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP SoftwareVersion field */
    inline llrp_utf8v_t
    getSoftwareVersion (void)
    {
        return m_SoftwareVersion;
    }

    /** @brief Set accessor functions for the LLRP SoftwareVersion field */
    inline void
    setSoftwareVersion (
      llrp_utf8v_t value)
    {
        m_SoftwareVersion = value;
    }


  protected:
    llrp_utf8v_t m_FirmwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFirmwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP FirmwareVersion field */
    inline llrp_utf8v_t
    getFirmwareVersion (void)
    {
        return m_FirmwareVersion;
    }

    /** @brief Set accessor functions for the LLRP FirmwareVersion field */
    inline void
    setFirmwareVersion (
      llrp_utf8v_t value)
    {
        m_FirmwareVersion = value;
    }


  protected:
    llrp_utf8v_t m_FPGAVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFPGAVersion;
//@}

    /** @brief Get accessor functions for the LLRP FPGAVersion field */
    inline llrp_utf8v_t
    getFPGAVersion (void)
    {
        return m_FPGAVersion;
    }

    /** @brief Set accessor functions for the LLRP FPGAVersion field */
    inline void
    setFPGAVersion (
      llrp_utf8v_t value)
    {
        m_FPGAVersion = value;
    }


  protected:
    llrp_utf8v_t m_PCBAVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPCBAVersion;
//@}

    /** @brief Get accessor functions for the LLRP PCBAVersion field */
    inline llrp_utf8v_t
    getPCBAVersion (void)
    {
        return m_PCBAVersion;
    }

    /** @brief Set accessor functions for the LLRP PCBAVersion field */
    inline void
    setPCBAVersion (
      llrp_utf8v_t value)
    {
        m_PCBAVersion = value;
    }


  
  protected:
    CImpinjHubVersions * m_pImpinjHubVersions;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjHubVersions sub-parameter */  
    inline CImpinjHubVersions *
    getImpinjHubVersions (void)
    {
        return m_pImpinjHubVersions;
    }

    /** @brief Set accessor functions for the LLRP ImpinjHubVersions sub-parameter */  
    EResultCode
    setImpinjHubVersions (
      CImpinjHubVersions * pValue);


  protected:
    CImpinjArrayVersion * m_pImpinjArrayVersion;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjArrayVersion sub-parameter */  
    inline CImpinjArrayVersion *
    getImpinjArrayVersion (void)
    {
        return m_pImpinjArrayVersion;
    }

    /** @brief Set accessor functions for the LLRP ImpinjArrayVersion sub-parameter */  
    EResultCode
    setImpinjArrayVersion (
      CImpinjArrayVersion * pValue);


  protected:
    CImpinjBLEVersion * m_pImpinjBLEVersion;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjBLEVersion sub-parameter */  
    inline CImpinjBLEVersion *
    getImpinjBLEVersion (void)
    {
        return m_pImpinjBLEVersion;
    }

    /** @brief Set accessor functions for the LLRP ImpinjBLEVersion sub-parameter */  
    EResultCode
    setImpinjBLEVersion (
      CImpinjBLEVersion * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjFrequencyCapabilities for LLRP parameter ImpinjFrequencyCapabilities
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is included in the Reader's capabilities and carries each frequency supported by the reader (see section 4.2.9 for more information). The FrequencyList field is a one-based array of frequencies in kHz.</p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjFrequencyCapabilities : public CParameter
{
  public:
    CImpinjFrequencyCapabilities (void);
    ~CImpinjFrequencyCapabilities (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32v_t m_FrequencyList;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFrequencyList;
//@}

    /** @brief Get accessor functions for the LLRP FrequencyList field */
    inline llrp_u32v_t
    getFrequencyList (void)
    {
        return m_FrequencyList;
    }

    /** @brief Set accessor functions for the LLRP FrequencyList field */
    inline void
    setFrequencyList (
      llrp_u32v_t value)
    {
        m_FrequencyList = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGPIDebounceConfiguration for LLRP parameter ImpinjGPIDebounceConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter controls the GPI debounce timing. The GPIPortNum is the 1-based GPI number. Once a transition, rising or falling, is detected subsequent transitions are ignored for GPIDebounceTimerMSec milliseconds. GPIDebounceTimerMSec must be a multiple of 10ms with a maximum value of 1000ms. Setting GPIDebounceTimerMSec to zero effectively disables debounce. The debounced GPI affects triggered ROSpecs and GPIEvent reporting.</p> 
 
      <SMALL><i>Copyright 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjGPIDebounceConfiguration : public CParameter
{
  public:
    CImpinjGPIDebounceConfiguration (void);
    ~CImpinjGPIDebounceConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_GPIPortNum;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPIPortNum;
//@}

    /** @brief Get accessor functions for the LLRP GPIPortNum field */
    inline llrp_u16_t
    getGPIPortNum (void)
    {
        return m_GPIPortNum;
    }

    /** @brief Set accessor functions for the LLRP GPIPortNum field */
    inline void
    setGPIPortNum (
      llrp_u16_t value)
    {
        m_GPIPortNum = value;
    }


  protected:
    llrp_u32_t m_GPIDebounceTimerMSec;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPIDebounceTimerMSec;
//@}

    /** @brief Get accessor functions for the LLRP GPIDebounceTimerMSec field */
    inline llrp_u32_t
    getGPIDebounceTimerMSec (void)
    {
        return m_GPIDebounceTimerMSec;
    }

    /** @brief Set accessor functions for the LLRP GPIDebounceTimerMSec field */
    inline void
    setGPIDebounceTimerMSec (
      llrp_u32_t value)
    {
        m_GPIDebounceTimerMSec = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjReaderTemperature for LLRP parameter ImpinjReaderTemperature
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the current temperature of the Reader in degrees Celsius. The temperature that is reported is the internal temperature of the Reader, not the ambient temperature of the Reader surroundings. The temperature is accurate to within +- 2 degrees Celsius across all operating temperatures.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjReaderTemperature : public CParameter
{
  public:
    CImpinjReaderTemperature (void);
    ~CImpinjReaderTemperature (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s16_t m_Temperature;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTemperature;
//@}

    /** @brief Get accessor functions for the LLRP Temperature field */
    inline llrp_s16_t
    getTemperature (void)
    {
        return m_Temperature;
    }

    /** @brief Set accessor functions for the LLRP Temperature field */
    inline void
    setTemperature (
      llrp_s16_t value)
    {
        m_Temperature = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLinkMonitorConfiguration for LLRP parameter ImpinjLinkMonitorConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the Reader to monitor LLRP link health using KEEPALIVE and KEEPALIVE_ACK messages. When disabled or unsupported, the Reader ignores KEEPALIVE_ACK messages entirely. When this parameter is enabled, if the Reader fails to receive LinkDownThreshold consecutive KEEPALIVE_ACK messages from the Client, the Reader will close the current connection. Note that this parameter must be configured in conjunction with the KeepaliveSpec LLRP parameter in the standard LLRP configuration. The frequency with which the Reader is configured to send KEEPALIVE messages, along with the threshold set in this parameter determines how long the Reader will tolerate missing KEEPALIVE_ACK messages. The Reader uses the LLRP MessageID field to correlate KEEPALIVE and KEEPALIVE_ACK messages. Clients must send the same MessageID when responding to reader KEEPALIVE requests.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjLinkMonitorConfiguration : public CParameter
{
  public:
    CImpinjLinkMonitorConfiguration (void);
    ~CImpinjLinkMonitorConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjLinkMonitorMode m_eLinkMonitorMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLinkMonitorMode;
//@}

    /** @brief Get accessor functions for the LLRP LinkMonitorMode field */
    inline EImpinjLinkMonitorMode
    getLinkMonitorMode (void)
    {
        return m_eLinkMonitorMode;
    }

    /** @brief Set accessor functions for the LLRP LinkMonitorMode field */
    inline void
    setLinkMonitorMode (
      EImpinjLinkMonitorMode value)
    {
        m_eLinkMonitorMode = value;
    }


  protected:
    llrp_u16_t m_LinkDownThreshold;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLinkDownThreshold;
//@}

    /** @brief Get accessor functions for the LLRP LinkDownThreshold field */
    inline llrp_u16_t
    getLinkDownThreshold (void)
    {
        return m_LinkDownThreshold;
    }

    /** @brief Set accessor functions for the LLRP LinkDownThreshold field */
    inline void
    setLinkDownThreshold (
      llrp_u16_t value)
    {
        m_LinkDownThreshold = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjReportBufferConfiguration for LLRP parameter ImpinjReportBufferConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures how the Reader buffers asynchronous reports sent to the Client. In Normal mode, the Reader buffers RO_ACCESS_REPORT messages internally for an optimal time period before transmission over the network. Response messages, KEEPALIVE messages, and READER_EVENT_NOTIFICATION messages are not affected, and are sent immediately. In Low_Latency mode, the Reader sends RO_ACCESS_REPORT messages as soon as they are available. In general, the default mode is well suited to most applications. Applications requiring immediate access to inventory reports may require Low_Latency mode, but users should first evaluate network and system load.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjReportBufferConfiguration : public CParameter
{
  public:
    CImpinjReportBufferConfiguration (void);
    ~CImpinjReportBufferConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjReportBufferMode m_eReportBufferMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdReportBufferMode;
//@}

    /** @brief Get accessor functions for the LLRP ReportBufferMode field */
    inline EImpinjReportBufferMode
    getReportBufferMode (void)
    {
        return m_eReportBufferMode;
    }

    /** @brief Set accessor functions for the LLRP ReportBufferMode field */
    inline void
    setReportBufferMode (
      EImpinjReportBufferMode value)
    {
        m_eReportBufferMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAccessSpecConfiguration for LLRP parameter ImpinjAccessSpecConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter allows for additional control over how the Reader executes AccessSpecs. This parameter does not contain any specific controls, but it encapsulates individual parameters that do. Each parameter contained within is optional, allowing for maximum flexibility for Client implementations.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
  
 **/

class CImpinjAccessSpecConfiguration : public CParameter
{
  public:
    CImpinjAccessSpecConfiguration (void);
    ~CImpinjAccessSpecConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjBlockWriteWordCount * m_pImpinjBlockWriteWordCount;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjBlockWriteWordCount sub-parameter */  
    inline CImpinjBlockWriteWordCount *
    getImpinjBlockWriteWordCount (void)
    {
        return m_pImpinjBlockWriteWordCount;
    }

    /** @brief Set accessor functions for the LLRP ImpinjBlockWriteWordCount sub-parameter */  
    EResultCode
    setImpinjBlockWriteWordCount (
      CImpinjBlockWriteWordCount * pValue);


  protected:
    CImpinjOpSpecRetryCount * m_pImpinjOpSpecRetryCount;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjOpSpecRetryCount sub-parameter */  
    inline CImpinjOpSpecRetryCount *
    getImpinjOpSpecRetryCount (void)
    {
        return m_pImpinjOpSpecRetryCount;
    }

    /** @brief Set accessor functions for the LLRP ImpinjOpSpecRetryCount sub-parameter */  
    EResultCode
    setImpinjOpSpecRetryCount (
      CImpinjOpSpecRetryCount * pValue);


  protected:
    CImpinjAccessSpecOrdering * m_pImpinjAccessSpecOrdering;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjAccessSpecOrdering sub-parameter */  
    inline CImpinjAccessSpecOrdering *
    getImpinjAccessSpecOrdering (void)
    {
        return m_pImpinjAccessSpecOrdering;
    }

    /** @brief Set accessor functions for the LLRP ImpinjAccessSpecOrdering sub-parameter */  
    EResultCode
    setImpinjAccessSpecOrdering (
      CImpinjAccessSpecOrdering * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBlockWriteWordCount for LLRP parameter ImpinjBlockWriteWordCount
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the number of words sent at a time to a tag when processing a C1G2BlockWrite OpSpec. The LLRP C1G2BlockWrite parameter has a word vector containing the data to be written to a tag. Internally the Reader breaks this vector up into individual C1G2 BlockWrite commands. This parameter determines the number of words sent via each BlockWrite command. Note that it is the user's responsibility to ensure that the tag population supports the BlockWrite word count configured via this parameter. BlockWrite commands to tags that do not support the configured word count will fail. The Reader automatically aligns C1G2BlockWrite commands to appropriate boundaries and accounts for odd data lengths. The default word count is one.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjBlockWriteWordCount : public CParameter
{
  public:
    CImpinjBlockWriteWordCount (void);
    ~CImpinjBlockWriteWordCount (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_WordCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdWordCount;
//@}

    /** @brief Get accessor functions for the LLRP WordCount field */
    inline llrp_u16_t
    getWordCount (void)
    {
        return m_WordCount;
    }

    /** @brief Set accessor functions for the LLRP WordCount field */
    inline void
    setWordCount (
      llrp_u16_t value)
    {
        m_WordCount = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBlockPermalock for LLRP parameter ImpinjBlockPermalock
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that configures the C1G2 BlockPermalock status of a particular memory bank from a tag. The AccessPassword field is the password required to move the tag into the secured state if needed.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjBlockPermalock : public CParameter
{
  public:
    CImpinjBlockPermalock (void);
    ~CImpinjBlockPermalock (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    llrp_u2_t m_MB;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMB;
//@}

    /** @brief Get accessor functions for the LLRP MB field */
    inline llrp_u2_t
    getMB (void)
    {
        return m_MB;
    }

    /** @brief Set accessor functions for the LLRP MB field */
    inline void
    setMB (
      llrp_u2_t value)
    {
        m_MB = value;
    }


  protected:
    llrp_u16_t m_BlockPointer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockPointer;
//@}

    /** @brief Get accessor functions for the LLRP BlockPointer field */
    inline llrp_u16_t
    getBlockPointer (void)
    {
        return m_BlockPointer;
    }

    /** @brief Set accessor functions for the LLRP BlockPointer field */
    inline void
    setBlockPointer (
      llrp_u16_t value)
    {
        m_BlockPointer = value;
    }


  protected:
    llrp_u16v_t m_BlockMask;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockMask;
//@}

    /** @brief Get accessor functions for the LLRP BlockMask field */
    inline llrp_u16v_t
    getBlockMask (void)
    {
        return m_BlockMask;
    }

    /** @brief Set accessor functions for the LLRP BlockMask field */
    inline void
    setBlockMask (
      llrp_u16v_t value)
    {
        m_BlockMask = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBlockPermalockOpSpecResult for LLRP parameter ImpinjBlockPermalockOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjBlockPermalock OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjBlockPermalockOpSpecResult : public CParameter
{
  public:
    CImpinjBlockPermalockOpSpecResult (void);
    ~CImpinjBlockPermalockOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjBlockPermalockResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjBlockPermalockResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjBlockPermalockResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetBlockPermalockStatus for LLRP parameter ImpinjGetBlockPermalockStatus
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that retrieves the C1G2 BlockPermalock status of a particular memory bank from a tag. The AccessPassword field is the password required to move the tag into the secured state if needed.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjGetBlockPermalockStatus : public CParameter
{
  public:
    CImpinjGetBlockPermalockStatus (void);
    ~CImpinjGetBlockPermalockStatus (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    llrp_u2_t m_MB;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMB;
//@}

    /** @brief Get accessor functions for the LLRP MB field */
    inline llrp_u2_t
    getMB (void)
    {
        return m_MB;
    }

    /** @brief Set accessor functions for the LLRP MB field */
    inline void
    setMB (
      llrp_u2_t value)
    {
        m_MB = value;
    }


  protected:
    llrp_u16_t m_BlockPointer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockPointer;
//@}

    /** @brief Get accessor functions for the LLRP BlockPointer field */
    inline llrp_u16_t
    getBlockPointer (void)
    {
        return m_BlockPointer;
    }

    /** @brief Set accessor functions for the LLRP BlockPointer field */
    inline void
    setBlockPointer (
      llrp_u16_t value)
    {
        m_BlockPointer = value;
    }


  protected:
    llrp_u16_t m_BlockRange;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBlockRange;
//@}

    /** @brief Get accessor functions for the LLRP BlockRange field */
    inline llrp_u16_t
    getBlockRange (void)
    {
        return m_BlockRange;
    }

    /** @brief Set accessor functions for the LLRP BlockRange field */
    inline void
    setBlockRange (
      llrp_u16_t value)
    {
        m_BlockRange = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetBlockPermalockStatusOpSpecResult for LLRP parameter ImpinjGetBlockPermalockStatusOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjGetBlockPermalockStatus OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjGetBlockPermalockStatusOpSpecResult : public CParameter
{
  public:
    CImpinjGetBlockPermalockStatusOpSpecResult (void);
    ~CImpinjGetBlockPermalockStatusOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjGetBlockPermalockStatusResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjGetBlockPermalockStatusResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjGetBlockPermalockStatusResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u16v_t m_PermalockStatus;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPermalockStatus;
//@}

    /** @brief Get accessor functions for the LLRP PermalockStatus field */
    inline llrp_u16v_t
    getPermalockStatus (void)
    {
        return m_PermalockStatus;
    }

    /** @brief Set accessor functions for the LLRP PermalockStatus field */
    inline void
    setPermalockStatus (
      llrp_u16v_t value)
    {
        m_PermalockStatus = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSetQTConfig for LLRP parameter ImpinjSetQTConfig
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that sets the QT TechnologyTM configuration on Impinj Monza 4QT tags. For more information on the meaning of the fields within this parameter, and the use cases for this technology, please reference the Impinj Monza 4QT datasheet.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjSetQTConfig : public CParameter
{
  public:
    CImpinjSetQTConfig (void);
    ~CImpinjSetQTConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    EImpinjQTDataProfile m_eDataProfile;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDataProfile;
//@}

    /** @brief Get accessor functions for the LLRP DataProfile field */
    inline EImpinjQTDataProfile
    getDataProfile (void)
    {
        return m_eDataProfile;
    }

    /** @brief Set accessor functions for the LLRP DataProfile field */
    inline void
    setDataProfile (
      EImpinjQTDataProfile value)
    {
        m_eDataProfile = value;
    }


  protected:
    EImpinjQTAccessRange m_eAccessRange;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessRange;
//@}

    /** @brief Get accessor functions for the LLRP AccessRange field */
    inline EImpinjQTAccessRange
    getAccessRange (void)
    {
        return m_eAccessRange;
    }

    /** @brief Set accessor functions for the LLRP AccessRange field */
    inline void
    setAccessRange (
      EImpinjQTAccessRange value)
    {
        m_eAccessRange = value;
    }


  protected:
    EImpinjQTPersistence m_ePersistence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPersistence;
//@}

    /** @brief Get accessor functions for the LLRP Persistence field */
    inline EImpinjQTPersistence
    getPersistence (void)
    {
        return m_ePersistence;
    }

    /** @brief Set accessor functions for the LLRP Persistence field */
    inline void
    setPersistence (
      EImpinjQTPersistence value)
    {
        m_ePersistence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSetQTConfigOpSpecResult for LLRP parameter ImpinjSetQTConfigOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjSetQTConfig OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjSetQTConfigOpSpecResult : public CParameter
{
  public:
    CImpinjSetQTConfigOpSpecResult (void);
    ~CImpinjSetQTConfigOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjSetQTConfigResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjSetQTConfigResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjSetQTConfigResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetQTConfig for LLRP parameter ImpinjGetQTConfig
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that retrieves the QT TechnologyTM configuration on Impinj Monza 4QT tags. For more information on the meaning of the fields within this parameter, and the use cases for this technology, please reference the Impinj Monza 4QT datasheet.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjGetQTConfig : public CParameter
{
  public:
    CImpinjGetQTConfig (void);
    ~CImpinjGetQTConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGetQTConfigOpSpecResult for LLRP parameter ImpinjGetQTConfigOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjGetQTConfig OpSpec.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
  
 **/

class CImpinjGetQTConfigOpSpecResult : public CParameter
{
  public:
    CImpinjGetQTConfigOpSpecResult (void);
    ~CImpinjGetQTConfigOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjGetQTConfigResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjGetQTConfigResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjGetQTConfigResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    EImpinjQTDataProfile m_eDataProfile;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDataProfile;
//@}

    /** @brief Get accessor functions for the LLRP DataProfile field */
    inline EImpinjQTDataProfile
    getDataProfile (void)
    {
        return m_eDataProfile;
    }

    /** @brief Set accessor functions for the LLRP DataProfile field */
    inline void
    setDataProfile (
      EImpinjQTDataProfile value)
    {
        m_eDataProfile = value;
    }


  protected:
    EImpinjQTAccessRange m_eAccessRange;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessRange;
//@}

    /** @brief Get accessor functions for the LLRP AccessRange field */
    inline EImpinjQTAccessRange
    getAccessRange (void)
    {
        return m_eAccessRange;
    }

    /** @brief Set accessor functions for the LLRP AccessRange field */
    inline void
    setAccessRange (
      EImpinjQTAccessRange value)
    {
        m_eAccessRange = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagReportContentSelector for LLRP parameter ImpinjTagReportContentSelector
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures additional parameters to be reported via the TagReportData parameter. Each optional parameter individually enables/configures a particular feature. Note that because of how the ROReportSpec parameter is handled (see section 3.1.15), if the optional parameter used to control a particular feature is absent, the feature is considered disabled. See the documentation for the actual parameters for full feature descriptions.</p> 
 
      <SMALL><i>Copyright 2011 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjTagReportContentSelector : public CParameter
{
  public:
    CImpinjTagReportContentSelector (void);
    ~CImpinjTagReportContentSelector (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjEnableSerializedTID * m_pImpinjEnableSerializedTID;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableSerializedTID sub-parameter */  
    inline CImpinjEnableSerializedTID *
    getImpinjEnableSerializedTID (void)
    {
        return m_pImpinjEnableSerializedTID;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableSerializedTID sub-parameter */  
    EResultCode
    setImpinjEnableSerializedTID (
      CImpinjEnableSerializedTID * pValue);


  protected:
    CImpinjEnableRFPhaseAngle * m_pImpinjEnableRFPhaseAngle;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableRFPhaseAngle sub-parameter */  
    inline CImpinjEnableRFPhaseAngle *
    getImpinjEnableRFPhaseAngle (void)
    {
        return m_pImpinjEnableRFPhaseAngle;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableRFPhaseAngle sub-parameter */  
    EResultCode
    setImpinjEnableRFPhaseAngle (
      CImpinjEnableRFPhaseAngle * pValue);


  protected:
    CImpinjEnablePeakRSSI * m_pImpinjEnablePeakRSSI;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnablePeakRSSI sub-parameter */  
    inline CImpinjEnablePeakRSSI *
    getImpinjEnablePeakRSSI (void)
    {
        return m_pImpinjEnablePeakRSSI;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnablePeakRSSI sub-parameter */  
    EResultCode
    setImpinjEnablePeakRSSI (
      CImpinjEnablePeakRSSI * pValue);


  protected:
    CImpinjEnableGPSCoordinates * m_pImpinjEnableGPSCoordinates;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableGPSCoordinates sub-parameter */  
    inline CImpinjEnableGPSCoordinates *
    getImpinjEnableGPSCoordinates (void)
    {
        return m_pImpinjEnableGPSCoordinates;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableGPSCoordinates sub-parameter */  
    EResultCode
    setImpinjEnableGPSCoordinates (
      CImpinjEnableGPSCoordinates * pValue);


  protected:
    CImpinjEnableOptimizedRead * m_pImpinjEnableOptimizedRead;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableOptimizedRead sub-parameter */  
    inline CImpinjEnableOptimizedRead *
    getImpinjEnableOptimizedRead (void)
    {
        return m_pImpinjEnableOptimizedRead;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableOptimizedRead sub-parameter */  
    EResultCode
    setImpinjEnableOptimizedRead (
      CImpinjEnableOptimizedRead * pValue);


  protected:
    CImpinjEnableRFDopplerFrequency * m_pImpinjEnableRFDopplerFrequency;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableRFDopplerFrequency sub-parameter */  
    inline CImpinjEnableRFDopplerFrequency *
    getImpinjEnableRFDopplerFrequency (void)
    {
        return m_pImpinjEnableRFDopplerFrequency;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableRFDopplerFrequency sub-parameter */  
    EResultCode
    setImpinjEnableRFDopplerFrequency (
      CImpinjEnableRFDopplerFrequency * pValue);


  protected:
    CImpinjEnableTxPower * m_pImpinjEnableTxPower;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjEnableTxPower sub-parameter */  
    inline CImpinjEnableTxPower *
    getImpinjEnableTxPower (void)
    {
        return m_pImpinjEnableTxPower;
    }

    /** @brief Set accessor functions for the LLRP ImpinjEnableTxPower sub-parameter */  
    EResultCode
    setImpinjEnableTxPower (
      CImpinjEnableTxPower * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableSerializedTID for LLRP parameter ImpinjEnableSerializedTID
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjSerializedTID feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableSerializedTID : public CParameter
{
  public:
    CImpinjEnableSerializedTID (void);
    ~CImpinjEnableSerializedTID (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjSerializedTIDMode m_eSerializedTIDMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSerializedTIDMode;
//@}

    /** @brief Get accessor functions for the LLRP SerializedTIDMode field */
    inline EImpinjSerializedTIDMode
    getSerializedTIDMode (void)
    {
        return m_eSerializedTIDMode;
    }

    /** @brief Set accessor functions for the LLRP SerializedTIDMode field */
    inline void
    setSerializedTIDMode (
      EImpinjSerializedTIDMode value)
    {
        m_eSerializedTIDMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableRFPhaseAngle for LLRP parameter ImpinjEnableRFPhaseAngle
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjRFPhaseAngle feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableRFPhaseAngle : public CParameter
{
  public:
    CImpinjEnableRFPhaseAngle (void);
    ~CImpinjEnableRFPhaseAngle (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjRFPhaseAngleMode m_eRFPhaseAngleMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRFPhaseAngleMode;
//@}

    /** @brief Get accessor functions for the LLRP RFPhaseAngleMode field */
    inline EImpinjRFPhaseAngleMode
    getRFPhaseAngleMode (void)
    {
        return m_eRFPhaseAngleMode;
    }

    /** @brief Set accessor functions for the LLRP RFPhaseAngleMode field */
    inline void
    setRFPhaseAngleMode (
      EImpinjRFPhaseAngleMode value)
    {
        m_eRFPhaseAngleMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnablePeakRSSI for LLRP parameter ImpinjEnablePeakRSSI
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjPeakRSSI feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnablePeakRSSI : public CParameter
{
  public:
    CImpinjEnablePeakRSSI (void);
    ~CImpinjEnablePeakRSSI (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjPeakRSSIMode m_ePeakRSSIMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPeakRSSIMode;
//@}

    /** @brief Get accessor functions for the LLRP PeakRSSIMode field */
    inline EImpinjPeakRSSIMode
    getPeakRSSIMode (void)
    {
        return m_ePeakRSSIMode;
    }

    /** @brief Set accessor functions for the LLRP PeakRSSIMode field */
    inline void
    setPeakRSSIMode (
      EImpinjPeakRSSIMode value)
    {
        m_ePeakRSSIMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableGPSCoordinates for LLRP parameter ImpinjEnableGPSCoordinates
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjGPSCoordinates feature.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableGPSCoordinates : public CParameter
{
  public:
    CImpinjEnableGPSCoordinates (void);
    ~CImpinjEnableGPSCoordinates (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjGPSCoordinatesMode m_eGPSCoordinatesMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPSCoordinatesMode;
//@}

    /** @brief Get accessor functions for the LLRP GPSCoordinatesMode field */
    inline EImpinjGPSCoordinatesMode
    getGPSCoordinatesMode (void)
    {
        return m_eGPSCoordinatesMode;
    }

    /** @brief Set accessor functions for the LLRP GPSCoordinatesMode field */
    inline void
    setGPSCoordinatesMode (
      EImpinjGPSCoordinatesMode value)
    {
        m_eGPSCoordinatesMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjSerializedTID for LLRP parameter ImpinjSerializedTID
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the content of the tag TID memory bank for tags supporting the ImpinjSerializedTID feature. Only the portion of the TID memory bank supported by the feature will be included and may vary from tag to tag. Tags inventoried that do not support the feature will omit this parameter from the TagReportData within the RO_ACCESS_REPORT. If a TID parity error is detected the ImpinjTIDParity sub-parameter will be included indicating the error</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjSerializedTID : public CParameter
{
  public:
    CImpinjSerializedTID (void);
    ~CImpinjSerializedTID (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16v_t m_TID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTID;
//@}

    /** @brief Get accessor functions for the LLRP TID field */
    inline llrp_u16v_t
    getTID (void)
    {
        return m_TID;
    }

    /** @brief Set accessor functions for the LLRP TID field */
    inline void
    setTID (
      llrp_u16v_t value)
    {
        m_TID = value;
    }


  
  protected:
    CImpinjTIDParity * m_pImpinjTIDParity;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjTIDParity sub-parameter */  
    inline CImpinjTIDParity *
    getImpinjTIDParity (void)
    {
        return m_pImpinjTIDParity;
    }

    /** @brief Set accessor functions for the LLRP ImpinjTIDParity sub-parameter */  
    EResultCode
    setImpinjTIDParity (
      CImpinjTIDParity * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjRFPhaseAngle for LLRP parameter ImpinjRFPhaseAngle
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the RF phase angle of a singulated tag during normal inventory (EPC backscatter). The PhaseAngle field is a scaled, 12-bit value, with 0 representing 0 degrees (0 radians), and 4096 representing 360 degrees (2 pi radians). If report accumulation is enabled via the ROReportSpec for the currently executing ROSpec, the RF phase angle reported via this parameter is the phase angle of the last tag singulation. No accumulation of phase data is available.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjRFPhaseAngle : public CParameter
{
  public:
    CImpinjRFPhaseAngle (void);
    ~CImpinjRFPhaseAngle (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_PhaseAngle;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPhaseAngle;
//@}

    /** @brief Get accessor functions for the LLRP PhaseAngle field */
    inline llrp_u16_t
    getPhaseAngle (void)
    {
        return m_PhaseAngle;
    }

    /** @brief Set accessor functions for the LLRP PhaseAngle field */
    inline void
    setPhaseAngle (
      llrp_u16_t value)
    {
        m_PhaseAngle = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjPeakRSSI for LLRP parameter ImpinjPeakRSSI
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the peak RSSI of the tag during the current reporting interval. Standard LLRP reports peak RSSI in whole dBm units. This parameter provides the same RSSI value in more precise dBm x 100 units. Applications requiring precise RSSI calculations may enable this parameter instead of (or in addition to) the PeakRSSI LLRP parameter.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjPeakRSSI : public CParameter
{
  public:
    CImpinjPeakRSSI (void);
    ~CImpinjPeakRSSI (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s16_t m_RSSI;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRSSI;
//@}

    /** @brief Get accessor functions for the LLRP RSSI field */
    inline llrp_s16_t
    getRSSI (void)
    {
        return m_RSSI;
    }

    /** @brief Set accessor functions for the LLRP RSSI field */
    inline void
    setRSSI (
      llrp_s16_t value)
    {
        m_RSSI = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGPSCoordinates for LLRP parameter ImpinjGPSCoordinates
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the GPS coordinates of the reader when the tag was singulated. If the GPS receiver has not acquired a location fix, this parameter will not be included in the report. If LLRP accumulation is enabled, the reported coordinates correspond to the last known reader location when the tag was singulated. The GPS coordinates are reported in signed micro-degrees, so a minor conversion is required to convert the reported value to typically used GPS coordinate formats.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjGPSCoordinates : public CParameter
{
  public:
    CImpinjGPSCoordinates (void);
    ~CImpinjGPSCoordinates (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s32_t m_Latitude;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLatitude;
//@}

    /** @brief Get accessor functions for the LLRP Latitude field */
    inline llrp_s32_t
    getLatitude (void)
    {
        return m_Latitude;
    }

    /** @brief Set accessor functions for the LLRP Latitude field */
    inline void
    setLatitude (
      llrp_s32_t value)
    {
        m_Latitude = value;
    }


  protected:
    llrp_s32_t m_Longitude;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLongitude;
//@}

    /** @brief Get accessor functions for the LLRP Longitude field */
    inline llrp_s32_t
    getLongitude (void)
    {
        return m_Longitude;
    }

    /** @brief Set accessor functions for the LLRP Longitude field */
    inline void
    setLongitude (
      llrp_s32_t value)
    {
        m_Longitude = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLoopSpec for LLRP parameter ImpinjLoopSpec
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter allows the Reader to loop execution of AISpecs within a ROSpec. If included within the list of SpecParameters in a ROSpec, it must be the last SpecParameter present. There also must be at least one AISpec preceding the ImpinjLoopSpec parameter. If either condition is not met, the Reader will respond with an error.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjLoopSpec : public CParameter
{
  public:
    CImpinjLoopSpec (void);
    ~CImpinjLoopSpec (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32_t m_LoopCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLoopCount;
//@}

    /** @brief Get accessor functions for the LLRP LoopCount field */
    inline llrp_u32_t
    getLoopCount (void)
    {
        return m_LoopCount;
    }

    /** @brief Set accessor functions for the LLRP LoopCount field */
    inline void
    setLoopCount (
      llrp_u32_t value)
    {
        m_LoopCount = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGPSNMEASentences for LLRP parameter ImpinjGPSNMEASentences
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter encapsulates the various NMEA (National Marine Electronic Association) sentences supported by the GPS device attached to the Reader. The Sierra Wireless PinPoint XT cellular modem supports GGA and RMC sentences. For more information regarding these sentences, visit the NMEA website.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjGPSNMEASentences : public CParameter
{
  public:
    CImpinjGPSNMEASentences (void);
    ~CImpinjGPSNMEASentences (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjGGASentence * m_pImpinjGGASentence;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjGGASentence sub-parameter */  
    inline CImpinjGGASentence *
    getImpinjGGASentence (void)
    {
        return m_pImpinjGGASentence;
    }

    /** @brief Set accessor functions for the LLRP ImpinjGGASentence sub-parameter */  
    EResultCode
    setImpinjGGASentence (
      CImpinjGGASentence * pValue);


  protected:
    CImpinjRMCSentence * m_pImpinjRMCSentence;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjRMCSentence sub-parameter */  
    inline CImpinjRMCSentence *
    getImpinjRMCSentence (void)
    {
        return m_pImpinjRMCSentence;
    }

    /** @brief Set accessor functions for the LLRP ImpinjRMCSentence sub-parameter */  
    EResultCode
    setImpinjRMCSentence (
      CImpinjRMCSentence * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjGGASentence for LLRP parameter ImpinjGGASentence
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter contains the current GPS information of the Reader's location as reported in NMEA GGA sentence format. If the GPS device has not acquired a location fix, the string is reported empty.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjGGASentence : public CParameter
{
  public:
    CImpinjGGASentence (void);
    ~CImpinjGGASentence (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_GGASentence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGGASentence;
//@}

    /** @brief Get accessor functions for the LLRP GGASentence field */
    inline llrp_utf8v_t
    getGGASentence (void)
    {
        return m_GGASentence;
    }

    /** @brief Set accessor functions for the LLRP GGASentence field */
    inline void
    setGGASentence (
      llrp_utf8v_t value)
    {
        m_GGASentence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjRMCSentence for LLRP parameter ImpinjRMCSentence
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter contains the current GPS information of the Reader's location as reported in NMEA RMC sentence format. If the GPS device has not acquired a location fix, the string is reported empty.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjRMCSentence : public CParameter
{
  public:
    CImpinjRMCSentence (void);
    ~CImpinjRMCSentence (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_RMCSentence;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRMCSentence;
//@}

    /** @brief Get accessor functions for the LLRP RMCSentence field */
    inline llrp_utf8v_t
    getRMCSentence (void)
    {
        return m_RMCSentence;
    }

    /** @brief Set accessor functions for the LLRP RMCSentence field */
    inline void
    setRMCSentence (
      llrp_utf8v_t value)
    {
        m_RMCSentence = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjOpSpecRetryCount for LLRP parameter ImpinjOpSpecRetryCount
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the number of times an OpSpec operation will be automatically retried by the reader before failure is declared. The reader intelligently chooses which types of failures to retry. For example, the reader will not retry if the tag indicates that the operation failed due to a memory locked or memory overrun, operations that have no chance of succeeding. However, if the operation failed due to transient errors, such as CRC errors due to interference, the reader will automatically retry RetryCount attempts before failure is declared. LLRP dictates that OpSpec failure be declared once a single operation has failed, thus the default RetryCount is 0.</p> 
 
      <SMALL><i>Copyright 2009 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjOpSpecRetryCount : public CParameter
{
  public:
    CImpinjOpSpecRetryCount (void);
    ~CImpinjOpSpecRetryCount (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_RetryCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRetryCount;
//@}

    /** @brief Get accessor functions for the LLRP RetryCount field */
    inline llrp_u16_t
    getRetryCount (void)
    {
        return m_RetryCount;
    }

    /** @brief Set accessor functions for the LLRP RetryCount field */
    inline void
    setRetryCount (
      llrp_u16_t value)
    {
        m_RetryCount = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAdvancedGPOConfiguration for LLRP parameter ImpinjAdvancedGPOConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter controls the advanced GPO feature of Speedway Revolution readers. When set to Normal (default) the GPO is set via the regular LLRP SET_READER_CONFIG message. When set to Pulsed, the GPO changes state based on the SET_READER_CONFIG message, and will change to the opposite state after GPOPulseDurationMSec milliseconds. When set to Reader_Operational_Status, LLRP_Connection_Status, or Reader_Inventory_Status, the GPO status acts like a Boolean value. When high (true, 1), the corresponding status is true, meaning the reader is operating, has a LLRP connection, or is inventorying. When low (false, 0), the opposite is the case.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjAdvancedGPOConfiguration : public CParameter
{
  public:
    CImpinjAdvancedGPOConfiguration (void);
    ~CImpinjAdvancedGPOConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_GPOPortNum;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPOPortNum;
//@}

    /** @brief Get accessor functions for the LLRP GPOPortNum field */
    inline llrp_u16_t
    getGPOPortNum (void)
    {
        return m_GPOPortNum;
    }

    /** @brief Set accessor functions for the LLRP GPOPortNum field */
    inline void
    setGPOPortNum (
      llrp_u16_t value)
    {
        m_GPOPortNum = value;
    }


  protected:
    EImpinjAdvancedGPOMode m_eGPOMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPOMode;
//@}

    /** @brief Get accessor functions for the LLRP GPOMode field */
    inline EImpinjAdvancedGPOMode
    getGPOMode (void)
    {
        return m_eGPOMode;
    }

    /** @brief Set accessor functions for the LLRP GPOMode field */
    inline void
    setGPOMode (
      EImpinjAdvancedGPOMode value)
    {
        m_eGPOMode = value;
    }


  protected:
    llrp_u32_t m_GPOPulseDurationMSec;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGPOPulseDurationMSec;
//@}

    /** @brief Get accessor functions for the LLRP GPOPulseDurationMSec field */
    inline llrp_u32_t
    getGPOPulseDurationMSec (void)
    {
        return m_GPOPulseDurationMSec;
    }

    /** @brief Set accessor functions for the LLRP GPOPulseDurationMSec field */
    inline void
    setGPOPulseDurationMSec (
      llrp_u32_t value)
    {
        m_GPOPulseDurationMSec = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableOptimizedRead for LLRP parameter ImpinjEnableOptimizedRead
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjOptimizedRead feature. ImpinjOptimizedRead allows for the reporting of additional tag memory content during an inventory without the use of AccessSpecs. The reader optimizes the execution of these reads for improved overall inventory performance.</p> 
 
        
    <p>The memory bank and location of the reads are specified using the C1G2Read parameter, just as they are when using AccessSpecs. Similarly, the results of the reads are reported using the C1G2ReadOpSpecResult parameter within the TagReportData parameter. Reads issued using the ImpinjOptimizedRead feature are reported the same as reads using AccessSpecs and thus users should ensure the OpSpecIDs used for the operations are unique.</p> 
 
        
    <p>Users may configure up to two optimized read operations. One departure from the AccessSpec model is optimized reads are always attempted, even if the first read fails. So for example, if the first read results in a failure due to a memory overrun, the second read will still be attempted. Thus, if there are two optimized reads configured it is guaranteed that there will be two C1G2ReadOpSpecResult parameters in each TagReportData parameter generated by the reader.</p> 
 
        
    <p>Because this feature was designed for optimized inventory performance, any retries configured via the ImpinjOpSpecRetryCount parameter do not apply.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjEnableOptimizedRead : public CParameter
{
  public:
    CImpinjEnableOptimizedRead (void);
    ~CImpinjEnableOptimizedRead (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjOptimizedReadMode m_eOptimizedReadMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOptimizedReadMode;
//@}

    /** @brief Get accessor functions for the LLRP OptimizedReadMode field */
    inline EImpinjOptimizedReadMode
    getOptimizedReadMode (void)
    {
        return m_eOptimizedReadMode;
    }

    /** @brief Set accessor functions for the LLRP OptimizedReadMode field */
    inline void
    setOptimizedReadMode (
      EImpinjOptimizedReadMode value)
    {
        m_eOptimizedReadMode = value;
    }


  
  protected:
    std::list<CC1G2Read *> m_listC1G2Read;

  public:
     /** @brief  Returns the first element of the C1G2Read sub-parameter list*/  
    inline std::list<CC1G2Read *>::iterator
    beginC1G2Read (void)
    {
        return m_listC1G2Read.begin();
    }

     /** @brief  Returns the last element of the C1G2Read sub-parameter list*/  
    inline std::list<CC1G2Read *>::iterator
    endC1G2Read (void)
    {
        return m_listC1G2Read.end();
    }

     /** @brief  Clears the LLRP C1G2Read sub-parameter list*/  
    inline void
    clearC1G2Read (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listC1G2Read);
    }

     /** @brief  Count of the LLRP C1G2Read sub-parameter list*/  
    inline int
    countC1G2Read (void)
    {
        return (int) (m_listC1G2Read.size());
    }

    EResultCode
     /** @brief  Add a C1G2Read to the LLRP sub-parameter list*/  
    addC1G2Read (
      CC1G2Read * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAccessSpecOrdering for LLRP parameter ImpinjAccessSpecOrdering
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures how AccessSpecs are added on Speedway Revolution readers. AccessSpecs are executed based on the order in which they were added to the reader. By default, the reader adds AccessSpecs in a first-in-first-out (FIFO) order, compliant with the LLRP specification. When the OrderingMode is configured to Ascending, the reader will add new AccessSpecs in ascending order based on the AccessSpecID. If the ordering mode is changed from FIFO to Ascending while AccessSpecs are already configured, the existing AccessSpecs will be sorted.</p> 
 
        
    <p>This parameter exists within the ImpinjAccessSpecConfiguration parameter which may be present in either a SET_READER_CONFIG message, or an ADD_ACCESSSPEC message. However, because this is a global parameter and does not logically apply in a per-AccessSpec context, this parameter may only be included in a SET_READER_CONFIG message. If this parameter is present in the context of an individual AccessSpec, the message will be rejected by the reader.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjAccessSpecOrdering : public CParameter
{
  public:
    CImpinjAccessSpecOrdering (void);
    ~CImpinjAccessSpecOrdering (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjAccessSpecOrderingMode m_eOrderingMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOrderingMode;
//@}

    /** @brief Get accessor functions for the LLRP OrderingMode field */
    inline EImpinjAccessSpecOrderingMode
    getOrderingMode (void)
    {
        return m_eOrderingMode;
    }

    /** @brief Set accessor functions for the LLRP OrderingMode field */
    inline void
    setOrderingMode (
      EImpinjAccessSpecOrderingMode value)
    {
        m_eOrderingMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableRFDopplerFrequency for LLRP parameter ImpinjEnableRFDopplerFrequency
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjRFDopplerFrequency feature.</p> 
 
      <SMALL><i>Copyright 2011 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableRFDopplerFrequency : public CParameter
{
  public:
    CImpinjEnableRFDopplerFrequency (void);
    ~CImpinjEnableRFDopplerFrequency (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjRFDopplerFrequencyMode m_eRFDopplerFrequencyMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRFDopplerFrequencyMode;
//@}

    /** @brief Get accessor functions for the LLRP RFDopplerFrequencyMode field */
    inline EImpinjRFDopplerFrequencyMode
    getRFDopplerFrequencyMode (void)
    {
        return m_eRFDopplerFrequencyMode;
    }

    /** @brief Set accessor functions for the LLRP RFDopplerFrequencyMode field */
    inline void
    setRFDopplerFrequencyMode (
      EImpinjRFDopplerFrequencyMode value)
    {
        m_eRFDopplerFrequencyMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjRFDopplerFrequency for LLRP parameter ImpinjRFDopplerFrequency
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the Doppler shift for a singulated tag. Doppler shift is the total phase rotation across the packet divided by the accumulation time. The DopplerFrequency field is a signed value with units in Hz. The upper twelve bits are the integer portion, the lower four bits are fractional. If report accumulation is enabled via the ROReportSpec for the currently executing ROSpec, the RF Doppler frequency reported via this parameter is the Doppler frequency of the last tag singulation. No accumulation of Doppler frequency data is available.</p> 
 
      <SMALL><i>Copyright 2011 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjRFDopplerFrequency : public CParameter
{
  public:
    CImpinjRFDopplerFrequency (void);
    ~CImpinjRFDopplerFrequency (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s16_t m_DopplerFrequency;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDopplerFrequency;
//@}

    /** @brief Get accessor functions for the LLRP DopplerFrequency field */
    inline llrp_s16_t
    getDopplerFrequency (void)
    {
        return m_DopplerFrequency;
    }

    /** @brief Set accessor functions for the LLRP DopplerFrequency field */
    inline void
    setDopplerFrequency (
      llrp_s16_t value)
    {
        m_DopplerFrequency = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjInventoryConfiguration for LLRP parameter ImpinjInventoryConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
          
    <p>This custom parameter specifies Impinj-specific inventory related configuration parameters. These parameters may be configured as either part of the default reader configuration (via a SET_READER_CONFIG message), or as part of individual AISpecs within a ROSpec (via an ADD_ROSPEC message). For any AISpec, each enabled antenna must be configured to use the same configuration. Mismatched antennas will result in an error reported by the Reader.</p> 
 
          
    <p> EnableAntDwellTimeLimit: Set to enable antenna dwell time restriction (250ms) in Single Target Inventory Search Modes. Set by default, must be reset to disable dwell time restriction.</p> 
 
          
    <p> EnableSelectGapClose: Valid only if InventorySearchMode is set to Dual_Target_with_BtoASelect. Set to follow the B->A SELECT command with a simplified B->A microcycle to 'mop up' tags that did not see the SELECT commands. Reset by default.</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjInventoryConfiguration : public CParameter
{
  public:
    CImpinjInventoryConfiguration (void);
    ~CImpinjInventoryConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_EnableAntDwellTimeLimit;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableAntDwellTimeLimit;
//@}

    /** @brief Get accessor functions for the LLRP EnableAntDwellTimeLimit field */
    inline llrp_u1_t
    getEnableAntDwellTimeLimit (void)
    {
        return m_EnableAntDwellTimeLimit;
    }

    /** @brief Set accessor functions for the LLRP EnableAntDwellTimeLimit field */
    inline void
    setEnableAntDwellTimeLimit (
      llrp_u1_t value)
    {
        m_EnableAntDwellTimeLimit = value;
    }


  protected:
    llrp_u1_t m_EnableSelectGapClose;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableSelectGapClose;
//@}

    /** @brief Get accessor functions for the LLRP EnableSelectGapClose field */
    inline llrp_u1_t
    getEnableSelectGapClose (void)
    {
        return m_EnableSelectGapClose;
    }

    /** @brief Set accessor functions for the LLRP EnableSelectGapClose field */
    inline void
    setEnableSelectGapClose (
      llrp_u1_t value)
    {
        m_EnableSelectGapClose = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjEnableTxPower for LLRP parameter ImpinjEnableTxPower
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter configures the ImpinjTxPower feature.</p> 
 
      <SMALL><i>Copyright 2017 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjEnableTxPower : public CParameter
{
  public:
    CImpinjEnableTxPower (void);
    ~CImpinjEnableTxPower (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjTxPowerReportingModeEnum m_eTxPowerReportingMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTxPowerReportingMode;
//@}

    /** @brief Get accessor functions for the LLRP TxPowerReportingMode field */
    inline EImpinjTxPowerReportingModeEnum
    getTxPowerReportingMode (void)
    {
        return m_eTxPowerReportingMode;
    }

    /** @brief Set accessor functions for the LLRP TxPowerReportingMode field */
    inline void
    setTxPowerReportingMode (
      EImpinjTxPowerReportingModeEnum value)
    {
        m_eTxPowerReportingMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTxPower for LLRP parameter ImpinjTxPower
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter reports the Tx Power of reader when this tag was reported. </p> 
 
      <SMALL><i>Copyright 2017 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjTxPower : public CParameter
{
  public:
    CImpinjTxPower (void);
    ~CImpinjTxPower (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_TxPower;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTxPower;
//@}

    /** @brief Get accessor functions for the LLRP TxPower field */
    inline llrp_u16_t
    getTxPower (void)
    {
        return m_TxPower;
    }

    /** @brief Set accessor functions for the LLRP TxPower field */
    inline void
    setTxPower (
      llrp_u16_t value)
    {
        m_TxPower = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjArrayVersion for LLRP parameter ImpinjArrayVersion
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter contains Array specific hardware and version information that is considered additional to ImpinjDetailedVersion information.</p> 
 
      <SMALL><i>Copyright 2010, 2014 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
    
  
 **/

class CImpinjArrayVersion : public CParameter
{
  public:
    CImpinjArrayVersion (void);
    ~CImpinjArrayVersion (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_SerialNumber;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSerialNumber;
//@}

    /** @brief Get accessor functions for the LLRP SerialNumber field */
    inline llrp_utf8v_t
    getSerialNumber (void)
    {
        return m_SerialNumber;
    }

    /** @brief Set accessor functions for the LLRP SerialNumber field */
    inline void
    setSerialNumber (
      llrp_utf8v_t value)
    {
        m_SerialNumber = value;
    }


  protected:
    llrp_utf8v_t m_FirmwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFirmwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP FirmwareVersion field */
    inline llrp_utf8v_t
    getFirmwareVersion (void)
    {
        return m_FirmwareVersion;
    }

    /** @brief Set accessor functions for the LLRP FirmwareVersion field */
    inline void
    setFirmwareVersion (
      llrp_utf8v_t value)
    {
        m_FirmwareVersion = value;
    }


  protected:
    llrp_utf8v_t m_PCBAVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPCBAVersion;
//@}

    /** @brief Get accessor functions for the LLRP PCBAVersion field */
    inline llrp_utf8v_t
    getPCBAVersion (void)
    {
        return m_PCBAVersion;
    }

    /** @brief Set accessor functions for the LLRP PCBAVersion field */
    inline void
    setPCBAVersion (
      llrp_utf8v_t value)
    {
        m_PCBAVersion = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjxArrayCapabilities for LLRP parameter ImpinjxArrayCapabilities
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to report xArray-specific capabilities.</p> 
 
      <SMALL><i>Copyright 2010, 2014, 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjxArrayCapabilities : public CParameter
{
  public:
    CImpinjxArrayCapabilities (void);
    ~CImpinjxArrayCapabilities (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32_t m_MaxNumSectors;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMaxNumSectors;
//@}

    /** @brief Get accessor functions for the LLRP MaxNumSectors field */
    inline llrp_u32_t
    getMaxNumSectors (void)
    {
        return m_MaxNumSectors;
    }

    /** @brief Set accessor functions for the LLRP MaxNumSectors field */
    inline void
    setMaxNumSectors (
      llrp_u32_t value)
    {
        m_MaxNumSectors = value;
    }


  protected:
    llrp_u1_t m_SupportsLISpecs;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSupportsLISpecs;
//@}

    /** @brief Get accessor functions for the LLRP SupportsLISpecs field */
    inline llrp_u1_t
    getSupportsLISpecs (void)
    {
        return m_SupportsLISpecs;
    }

    /** @brief Set accessor functions for the LLRP SupportsLISpecs field */
    inline void
    setSupportsLISpecs (
      llrp_u1_t value)
    {
        m_SupportsLISpecs = value;
    }


  protected:
    llrp_u1_t m_SupportsTISpecs;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSupportsTISpecs;
//@}

    /** @brief Get accessor functions for the LLRP SupportsTISpecs field */
    inline llrp_u1_t
    getSupportsTISpecs (void)
    {
        return m_SupportsTISpecs;
    }

    /** @brief Set accessor functions for the LLRP SupportsTISpecs field */
    inline void
    setSupportsTISpecs (
      llrp_u1_t value)
    {
        m_SupportsTISpecs = value;
    }


  protected:
    llrp_u1_t m_SupportsTSISpecs;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSupportsTSISpecs;
//@}

    /** @brief Get accessor functions for the LLRP SupportsTSISpecs field */
    inline llrp_u1_t
    getSupportsTSISpecs (void)
    {
        return m_SupportsTSISpecs;
    }

    /** @brief Set accessor functions for the LLRP SupportsTSISpecs field */
    inline void
    setSupportsTSISpecs (
      llrp_u1_t value)
    {
        m_SupportsTSISpecs = value;
    }


  protected:
    llrp_u1_t m_SupportsDISpecs;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSupportsDISpecs;
//@}

    /** @brief Get accessor functions for the LLRP SupportsDISpecs field */
    inline llrp_u1_t
    getSupportsDISpecs (void)
    {
        return m_SupportsDISpecs;
    }

    /** @brief Set accessor functions for the LLRP SupportsDISpecs field */
    inline void
    setSupportsDISpecs (
      llrp_u1_t value)
    {
        m_SupportsDISpecs = value;
    }


  
  protected:
    CImpinjxArrayDirectionCapabilities * m_pImpinjxArrayDirectionCapabilities;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjxArrayDirectionCapabilities sub-parameter */  
    inline CImpinjxArrayDirectionCapabilities *
    getImpinjxArrayDirectionCapabilities (void)
    {
        return m_pImpinjxArrayDirectionCapabilities;
    }

    /** @brief Set accessor functions for the LLRP ImpinjxArrayDirectionCapabilities sub-parameter */  
    EResultCode
    setImpinjxArrayDirectionCapabilities (
      CImpinjxArrayDirectionCapabilities * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTiltConfiguration for LLRP parameter ImpinjTiltConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to get the xArray physical orientation from the onboard sensor.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
    
    
  
 **/

class CImpinjTiltConfiguration : public CParameter
{
  public:
    CImpinjTiltConfiguration (void);
    ~CImpinjTiltConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_s32_t m_XAxis;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdXAxis;
//@}

    /** @brief Get accessor functions for the LLRP XAxis field */
    inline llrp_s32_t
    getXAxis (void)
    {
        return m_XAxis;
    }

    /** @brief Set accessor functions for the LLRP XAxis field */
    inline void
    setXAxis (
      llrp_s32_t value)
    {
        m_XAxis = value;
    }


  protected:
    llrp_s32_t m_YAxis;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdYAxis;
//@}

    /** @brief Get accessor functions for the LLRP YAxis field */
    inline llrp_s32_t
    getYAxis (void)
    {
        return m_YAxis;
    }

    /** @brief Set accessor functions for the LLRP YAxis field */
    inline void
    setYAxis (
      llrp_s32_t value)
    {
        m_YAxis = value;
    }


  protected:
    llrp_s32_t m_ZAxis;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdZAxis;
//@}

    /** @brief Get accessor functions for the LLRP ZAxis field */
    inline llrp_s32_t
    getZAxis (void)
    {
        return m_ZAxis;
    }

    /** @brief Set accessor functions for the LLRP ZAxis field */
    inline void
    setZAxis (
      llrp_s32_t value)
    {
        m_ZAxis = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBeaconConfiguration for LLRP parameter ImpinjBeaconConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used for getting and setting the xArray beacon LED.</p> 
 
      <SMALL><i>Copyright 2010, 2014 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
    
    
    
  
 **/

class CImpinjBeaconConfiguration : public CParameter
{
  public:
    CImpinjBeaconConfiguration (void);
    ~CImpinjBeaconConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_BeaconState;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBeaconState;
//@}

    /** @brief Get accessor functions for the LLRP BeaconState field */
    inline llrp_u1_t
    getBeaconState (void)
    {
        return m_BeaconState;
    }

    /** @brief Set accessor functions for the LLRP BeaconState field */
    inline void
    setBeaconState (
      llrp_u1_t value)
    {
        m_BeaconState = value;
    }


  protected:
    llrp_u64_t m_BeaconDurationSeconds;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBeaconDurationSeconds;
//@}

    /** @brief Get accessor functions for the LLRP BeaconDurationSeconds field */
    inline llrp_u64_t
    getBeaconDurationSeconds (void)
    {
        return m_BeaconDurationSeconds;
    }

    /** @brief Set accessor functions for the LLRP BeaconDurationSeconds field */
    inline void
    setBeaconDurationSeconds (
      llrp_u64_t value)
    {
        m_BeaconDurationSeconds = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAntennaConfiguration for LLRP parameter ImpinjAntennaConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used for getting and setting xArray antenna configuration as well as for enabling/disabling Impinj-specific Antenna Notification(s).</p> 
 
      <SMALL><i>Copyright 2010,2016 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
    
    
  
 **/

class CImpinjAntennaConfiguration : public CParameter
{
  public:
    CImpinjAntennaConfiguration (void);
    ~CImpinjAntennaConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjAntennaEventHysteresis * m_pImpinjAntennaEventHysteresis;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjAntennaEventHysteresis sub-parameter */  
    inline CImpinjAntennaEventHysteresis *
    getImpinjAntennaEventHysteresis (void)
    {
        return m_pImpinjAntennaEventHysteresis;
    }

    /** @brief Set accessor functions for the LLRP ImpinjAntennaEventHysteresis sub-parameter */  
    EResultCode
    setImpinjAntennaEventHysteresis (
      CImpinjAntennaEventHysteresis * pValue);


  protected:
    CImpinjAntennaEventConfiguration * m_pImpinjAntennaEventConfiguration;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjAntennaEventConfiguration sub-parameter */  
    inline CImpinjAntennaEventConfiguration *
    getImpinjAntennaEventConfiguration (void)
    {
        return m_pImpinjAntennaEventConfiguration;
    }

    /** @brief Set accessor functions for the LLRP ImpinjAntennaEventConfiguration sub-parameter */  
    EResultCode
    setImpinjAntennaEventConfiguration (
      CImpinjAntennaEventConfiguration * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAntennaEventHysteresis for LLRP parameter ImpinjAntennaEventHysteresis
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to control the intervals for antenna disconnect/reconnect notifications.</p> 
 
        
    <p>The AntennaEventConnected field contains the number of milliseconds that an Antenna must be working after failure before an AntennaConnected notification is reported.</p> 
 
        
    <p>The AntennaEventDisconnected field contains the number of milliseconds that an Antenna must be in failure before an AntennaDisconnected notification is reported.</p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
  
 **/

class CImpinjAntennaEventHysteresis : public CParameter
{
  public:
    CImpinjAntennaEventHysteresis (void);
    ~CImpinjAntennaEventHysteresis (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u64_t m_AntennaEventConnected;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAntennaEventConnected;
//@}

    /** @brief Get accessor functions for the LLRP AntennaEventConnected field */
    inline llrp_u64_t
    getAntennaEventConnected (void)
    {
        return m_AntennaEventConnected;
    }

    /** @brief Set accessor functions for the LLRP AntennaEventConnected field */
    inline void
    setAntennaEventConnected (
      llrp_u64_t value)
    {
        m_AntennaEventConnected = value;
    }


  protected:
    llrp_u64_t m_AntennaEventDisconnected;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAntennaEventDisconnected;
//@}

    /** @brief Get accessor functions for the LLRP AntennaEventDisconnected field */
    inline llrp_u64_t
    getAntennaEventDisconnected (void)
    {
        return m_AntennaEventDisconnected;
    }

    /** @brief Set accessor functions for the LLRP AntennaEventDisconnected field */
    inline void
    setAntennaEventDisconnected (
      llrp_u64_t value)
    {
        m_AntennaEventDisconnected = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAntennaEventConfiguration for LLRP parameter ImpinjAntennaEventConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is used to enable Impinj-specific Antenna Notification(s).</p> 
 
      <SMALL><i>Copyright 2016 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
  
 **/

class CImpinjAntennaEventConfiguration : public CParameter
{
  public:
    CImpinjAntennaEventConfiguration (void);
    ~CImpinjAntennaEventConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_EnableAntennaAttemptNotification;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableAntennaAttemptNotification;
//@}

    /** @brief Get accessor functions for the LLRP EnableAntennaAttemptNotification field */
    inline llrp_u1_t
    getEnableAntennaAttemptNotification (void)
    {
        return m_EnableAntennaAttemptNotification;
    }

    /** @brief Set accessor functions for the LLRP EnableAntennaAttemptNotification field */
    inline void
    setEnableAntennaAttemptNotification (
      llrp_u1_t value)
    {
        m_EnableAntennaAttemptNotification = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAntennaAttemptEvent for LLRP parameter ImpinjAntennaAttemptEvent
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This event is sent before an attempt to singulate all tags in the field of view of an antenna.</p> 
 
      <SMALL><i>Copyright 2016 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjAntennaAttemptEvent : public CParameter
{
  public:
    CImpinjAntennaAttemptEvent (void);
    ~CImpinjAntennaAttemptEvent (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_AntennaID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAntennaID;
//@}

    /** @brief Get accessor functions for the LLRP AntennaID field */
    inline llrp_u16_t
    getAntennaID (void)
    {
        return m_AntennaID;
    }

    /** @brief Set accessor functions for the LLRP AntennaID field */
    inline void
    setAntennaID (
      llrp_u16_t value)
    {
        m_AntennaID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjHubConfiguration for LLRP parameter ImpinjHubConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter contains the Antenna Hub connection and fault state.</p> 
 
      <SMALL><i>Copyright 2012 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjHubConfiguration : public CParameter
{
  public:
    CImpinjHubConfiguration (void);
    ~CImpinjHubConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_HubID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdHubID;
//@}

    /** @brief Get accessor functions for the LLRP HubID field */
    inline llrp_u16_t
    getHubID (void)
    {
        return m_HubID;
    }

    /** @brief Set accessor functions for the LLRP HubID field */
    inline void
    setHubID (
      llrp_u16_t value)
    {
        m_HubID = value;
    }


  protected:
    EImpinjHubConnectedType m_eConnected;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdConnected;
//@}

    /** @brief Get accessor functions for the LLRP Connected field */
    inline EImpinjHubConnectedType
    getConnected (void)
    {
        return m_eConnected;
    }

    /** @brief Set accessor functions for the LLRP Connected field */
    inline void
    setConnected (
      EImpinjHubConnectedType value)
    {
        m_eConnected = value;
    }


  protected:
    EImpinjHubFaultType m_eFault;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFault;
//@}

    /** @brief Get accessor functions for the LLRP Fault field */
    inline EImpinjHubFaultType
    getFault (void)
    {
        return m_eFault;
    }

    /** @brief Set accessor functions for the LLRP Fault field */
    inline void
    setFault (
      EImpinjHubFaultType value)
    {
        m_eFault = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDiagnosticReport for LLRP parameter ImpinjDiagnosticReport
 **
 
    
      
<ul>
  
</ul>  

      
          
    <p>Used to send diagnostic data </p> 
 
      <SMALL><i>Copyright 2010 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjDiagnosticReport : public CParameter
{
  public:
    CImpinjDiagnosticReport (void);
    ~CImpinjDiagnosticReport (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32v_t m_Metric;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMetric;
//@}

    /** @brief Get accessor functions for the LLRP Metric field */
    inline llrp_u32v_t
    getMetric (void)
    {
        return m_Metric;
    }

    /** @brief Set accessor functions for the LLRP Metric field */
    inline void
    setMetric (
      llrp_u32v_t value)
    {
        m_Metric = value;
    }


  
};


/**
 ** @brief  Class Definition CImpinjPlacementConfiguration for LLRP parameter ImpinjPlacementConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>HeightCm is used to initialize the xArray mounting height above the floor. When not specified, the default value is 457 cm</p> 
 
        
    <p>FacilityXLocationCm is used to location this xArray in the facility. Its default is 0 and is not required with a single xArray</p> 
 
        
    <p>FacilityYLocationCm is used to location this xArray in the facility. Its default is 0 and is not required with a single xArray</p> 
 
        
    <p>OrientationDegrees specifies the orientation of the array in degrees (-180 - 180) with respect to the X orentation of the device.  Default is 0 and is not required with a single xArray deployment</p> 
 
      <SMALL><i>Copyright 2013 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
    
    
    
    
  
 **/

class CImpinjPlacementConfiguration : public CParameter
{
  public:
    CImpinjPlacementConfiguration (void);
    ~CImpinjPlacementConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_HeightCm;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdHeightCm;
//@}

    /** @brief Get accessor functions for the LLRP HeightCm field */
    inline llrp_u16_t
    getHeightCm (void)
    {
        return m_HeightCm;
    }

    /** @brief Set accessor functions for the LLRP HeightCm field */
    inline void
    setHeightCm (
      llrp_u16_t value)
    {
        m_HeightCm = value;
    }


  protected:
    llrp_s32_t m_FacilityXLocationCm;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFacilityXLocationCm;
//@}

    /** @brief Get accessor functions for the LLRP FacilityXLocationCm field */
    inline llrp_s32_t
    getFacilityXLocationCm (void)
    {
        return m_FacilityXLocationCm;
    }

    /** @brief Set accessor functions for the LLRP FacilityXLocationCm field */
    inline void
    setFacilityXLocationCm (
      llrp_s32_t value)
    {
        m_FacilityXLocationCm = value;
    }


  protected:
    llrp_s32_t m_FacilityYLocationCm;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFacilityYLocationCm;
//@}

    /** @brief Get accessor functions for the LLRP FacilityYLocationCm field */
    inline llrp_s32_t
    getFacilityYLocationCm (void)
    {
        return m_FacilityYLocationCm;
    }

    /** @brief Set accessor functions for the LLRP FacilityYLocationCm field */
    inline void
    setFacilityYLocationCm (
      llrp_s32_t value)
    {
        m_FacilityYLocationCm = value;
    }


  protected:
    llrp_s16_t m_OrientationDegrees;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOrientationDegrees;
//@}

    /** @brief Get accessor functions for the LLRP OrientationDegrees field */
    inline llrp_s16_t
    getOrientationDegrees (void)
    {
        return m_OrientationDegrees;
    }

    /** @brief Set accessor functions for the LLRP OrientationDegrees field */
    inline void
    setOrientationDegrees (
      llrp_s16_t value)
    {
        m_OrientationDegrees = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLISpec for LLRP parameter ImpinjLISpec
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is specified in an ROSpec and details a location Inventory</p> 
 
        
    <p>Only one ImpinjLISpec may be specified in an ROSpec. When specifed, no other spec parameters can be present in the ROSpec.</p> 
 
      <SMALL><i>Copyright 2013 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
    
    
  
 **/

class CImpinjLISpec : public CParameter
{
  public:
    CImpinjLISpec (void);
    ~CImpinjLISpec (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjLocationConfig * m_pImpinjLocationConfig;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjLocationConfig sub-parameter */  
    inline CImpinjLocationConfig *
    getImpinjLocationConfig (void)
    {
        return m_pImpinjLocationConfig;
    }

    /** @brief Set accessor functions for the LLRP ImpinjLocationConfig sub-parameter */  
    EResultCode
    setImpinjLocationConfig (
      CImpinjLocationConfig * pValue);


  protected:
    CImpinjC1G2LocationConfig * m_pImpinjC1G2LocationConfig;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjC1G2LocationConfig sub-parameter */  
    inline CImpinjC1G2LocationConfig *
    getImpinjC1G2LocationConfig (void)
    {
        return m_pImpinjC1G2LocationConfig;
    }

    /** @brief Set accessor functions for the LLRP ImpinjC1G2LocationConfig sub-parameter */  
    EResultCode
    setImpinjC1G2LocationConfig (
      CImpinjC1G2LocationConfig * pValue);


  protected:
    CImpinjLocationReporting * m_pImpinjLocationReporting;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjLocationReporting sub-parameter */  
    inline CImpinjLocationReporting *
    getImpinjLocationReporting (void)
    {
        return m_pImpinjLocationReporting;
    }

    /** @brief Set accessor functions for the LLRP ImpinjLocationReporting sub-parameter */  
    EResultCode
    setImpinjLocationReporting (
      CImpinjLocationReporting * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLocationConfig for LLRP parameter ImpinjLocationConfig
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter specifies the settings of the location algorithm</p> 
 
        
    <p>The ComputeWindowSeconds field specifies the size of the smoothing window for averaging the location estimates. Default is 10 seconds</p> 
 
        
    <p>The TagAgeIntervalSeconds field specifies how long a tag needs to go unseen before its removed from the location tracking. Default is 20 seconds</p> 
 
        
    <p>The UpdateIntervalSeconds field specifies how often tag location estimate is computed</p> 
 
        
    <p>The ImpinjDisabledAntennas parameter may optionally be included to specify antennas to exclude from computation of the location estimate</p> 
 
        
    <p>The ImpinjLocationAlgorithmControl parameter may optionally be included to specify Impinj internal algorithm tuning parameters</p> 
 
      <SMALL><i>Copyright 2016 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
    
    
    
    
    
  
 **/

class CImpinjLocationConfig : public CParameter
{
  public:
    CImpinjLocationConfig (void);
    ~CImpinjLocationConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_ComputeWindowSeconds;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdComputeWindowSeconds;
//@}

    /** @brief Get accessor functions for the LLRP ComputeWindowSeconds field */
    inline llrp_u16_t
    getComputeWindowSeconds (void)
    {
        return m_ComputeWindowSeconds;
    }

    /** @brief Set accessor functions for the LLRP ComputeWindowSeconds field */
    inline void
    setComputeWindowSeconds (
      llrp_u16_t value)
    {
        m_ComputeWindowSeconds = value;
    }


  protected:
    llrp_u16_t m_TagAgeIntervalSeconds;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTagAgeIntervalSeconds;
//@}

    /** @brief Get accessor functions for the LLRP TagAgeIntervalSeconds field */
    inline llrp_u16_t
    getTagAgeIntervalSeconds (void)
    {
        return m_TagAgeIntervalSeconds;
    }

    /** @brief Set accessor functions for the LLRP TagAgeIntervalSeconds field */
    inline void
    setTagAgeIntervalSeconds (
      llrp_u16_t value)
    {
        m_TagAgeIntervalSeconds = value;
    }


  protected:
    llrp_u16_t m_UpdateIntervalSeconds;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdUpdateIntervalSeconds;
//@}

    /** @brief Get accessor functions for the LLRP UpdateIntervalSeconds field */
    inline llrp_u16_t
    getUpdateIntervalSeconds (void)
    {
        return m_UpdateIntervalSeconds;
    }

    /** @brief Set accessor functions for the LLRP UpdateIntervalSeconds field */
    inline void
    setUpdateIntervalSeconds (
      llrp_u16_t value)
    {
        m_UpdateIntervalSeconds = value;
    }


  
  protected:
    CImpinjDisabledAntennas * m_pImpinjDisabledAntennas;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjDisabledAntennas sub-parameter */  
    inline CImpinjDisabledAntennas *
    getImpinjDisabledAntennas (void)
    {
        return m_pImpinjDisabledAntennas;
    }

    /** @brief Set accessor functions for the LLRP ImpinjDisabledAntennas sub-parameter */  
    EResultCode
    setImpinjDisabledAntennas (
      CImpinjDisabledAntennas * pValue);


  protected:
    CImpinjLocationAlgorithmControl * m_pImpinjLocationAlgorithmControl;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjLocationAlgorithmControl sub-parameter */  
    inline CImpinjLocationAlgorithmControl *
    getImpinjLocationAlgorithmControl (void)
    {
        return m_pImpinjLocationAlgorithmControl;
    }

    /** @brief Set accessor functions for the LLRP ImpinjLocationAlgorithmControl sub-parameter */  
    EResultCode
    setImpinjLocationAlgorithmControl (
      CImpinjLocationAlgorithmControl * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjC1G2LocationConfig for LLRP parameter ImpinjC1G2LocationConfig
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter specifies the C1G2 settings of the location algorithm</p> 
 
        
    <p>The ModeIndex field specifies the C1G2 mode to use for the operation.</p> 
 
        
    <p>The Session field specifies the C1G2 session to use for the operation</p> 
 
        
    <p>The C1G2Filter parameter specifies any Gen2 based tag filtering</p> 
 
        
    <p>The ImpinjTransmitPower parameter specifies the Transmit Power to use for the operation</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
    
    
    
    
    
  
 **/

class CImpinjC1G2LocationConfig : public CParameter
{
  public:
    CImpinjC1G2LocationConfig (void);
    ~CImpinjC1G2LocationConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_ModeIndex;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdModeIndex;
//@}

    /** @brief Get accessor functions for the LLRP ModeIndex field */
    inline llrp_u16_t
    getModeIndex (void)
    {
        return m_ModeIndex;
    }

    /** @brief Set accessor functions for the LLRP ModeIndex field */
    inline void
    setModeIndex (
      llrp_u16_t value)
    {
        m_ModeIndex = value;
    }


  protected:
    llrp_u2_t m_Session;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSession;
//@}

    /** @brief Get accessor functions for the LLRP Session field */
    inline llrp_u2_t
    getSession (void)
    {
        return m_Session;
    }

    /** @brief Set accessor functions for the LLRP Session field */
    inline void
    setSession (
      llrp_u2_t value)
    {
        m_Session = value;
    }


  
  protected:
    std::list<CC1G2Filter *> m_listC1G2Filter;

  public:
     /** @brief  Returns the first element of the C1G2Filter sub-parameter list*/  
    inline std::list<CC1G2Filter *>::iterator
    beginC1G2Filter (void)
    {
        return m_listC1G2Filter.begin();
    }

     /** @brief  Returns the last element of the C1G2Filter sub-parameter list*/  
    inline std::list<CC1G2Filter *>::iterator
    endC1G2Filter (void)
    {
        return m_listC1G2Filter.end();
    }

     /** @brief  Clears the LLRP C1G2Filter sub-parameter list*/  
    inline void
    clearC1G2Filter (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listC1G2Filter);
    }

     /** @brief  Count of the LLRP C1G2Filter sub-parameter list*/  
    inline int
    countC1G2Filter (void)
    {
        return (int) (m_listC1G2Filter.size());
    }

    EResultCode
     /** @brief  Add a C1G2Filter to the LLRP sub-parameter list*/  
    addC1G2Filter (
      CC1G2Filter * pValue);


  protected:
    CImpinjTransmitPower * m_pImpinjTransmitPower;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjTransmitPower sub-parameter */  
    inline CImpinjTransmitPower *
    getImpinjTransmitPower (void)
    {
        return m_pImpinjTransmitPower;
    }

    /** @brief Set accessor functions for the LLRP ImpinjTransmitPower sub-parameter */  
    EResultCode
    setImpinjTransmitPower (
      CImpinjTransmitPower * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLocationReporting for LLRP parameter ImpinjLocationReporting
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter specifies the reporting configuration for the location operation</p> 
 
        
    <p>EnableUpdateReport: Set to enable update reports every UpdateIntervalSeconds </p> 
 
        
    <p>EnableEntryReport: Set to enable a report when the tag first becomes visible </p> 
 
        
    <p>EnableExitReport: Set to enable a report when the tag is no longer seen </p> 
 
        
    <p>EnableDiagnosticReport Set to enable diagnostic data on Location </p> 
 
      <SMALL><i>Copyright 2013 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjLocationReporting : public CParameter
{
  public:
    CImpinjLocationReporting (void);
    ~CImpinjLocationReporting (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_EnableUpdateReport;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableUpdateReport;
//@}

    /** @brief Get accessor functions for the LLRP EnableUpdateReport field */
    inline llrp_u1_t
    getEnableUpdateReport (void)
    {
        return m_EnableUpdateReport;
    }

    /** @brief Set accessor functions for the LLRP EnableUpdateReport field */
    inline void
    setEnableUpdateReport (
      llrp_u1_t value)
    {
        m_EnableUpdateReport = value;
    }


  protected:
    llrp_u1_t m_EnableEntryReport;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableEntryReport;
//@}

    /** @brief Get accessor functions for the LLRP EnableEntryReport field */
    inline llrp_u1_t
    getEnableEntryReport (void)
    {
        return m_EnableEntryReport;
    }

    /** @brief Set accessor functions for the LLRP EnableEntryReport field */
    inline void
    setEnableEntryReport (
      llrp_u1_t value)
    {
        m_EnableEntryReport = value;
    }


  protected:
    llrp_u1_t m_EnableExitReport;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableExitReport;
//@}

    /** @brief Get accessor functions for the LLRP EnableExitReport field */
    inline llrp_u1_t
    getEnableExitReport (void)
    {
        return m_EnableExitReport;
    }

    /** @brief Set accessor functions for the LLRP EnableExitReport field */
    inline void
    setEnableExitReport (
      llrp_u1_t value)
    {
        m_EnableExitReport = value;
    }


  protected:
    llrp_u1_t m_EnableDiagnosticReport;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableDiagnosticReport;
//@}

    /** @brief Get accessor functions for the LLRP EnableDiagnosticReport field */
    inline llrp_u1_t
    getEnableDiagnosticReport (void)
    {
        return m_EnableDiagnosticReport;
    }

    /** @brief Set accessor functions for the LLRP EnableDiagnosticReport field */
    inline void
    setEnableDiagnosticReport (
      llrp_u1_t value)
    {
        m_EnableDiagnosticReport = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLocationConfidence for LLRP parameter ImpinjLocationConfidence
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter specifies the confidence factors for location</p> 
 
        
    <p>ReadCount: How many tag reads were used to determine this location </p> 
 
        
    <p>Data: An array of data to contain confidence information</p> 
 
      <SMALL><i>Copyright 2013 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjLocationConfidence : public CParameter
{
  public:
    CImpinjLocationConfidence (void);
    ~CImpinjLocationConfidence (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_ReadCount;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdReadCount;
//@}

    /** @brief Get accessor functions for the LLRP ReadCount field */
    inline llrp_u16_t
    getReadCount (void)
    {
        return m_ReadCount;
    }

    /** @brief Set accessor functions for the LLRP ReadCount field */
    inline void
    setReadCount (
      llrp_u16_t value)
    {
        m_ReadCount = value;
    }


  protected:
    llrp_u32v_t m_ConfidenceData;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdConfidenceData;
//@}

    /** @brief Get accessor functions for the LLRP ConfidenceData field */
    inline llrp_u32v_t
    getConfidenceData (void)
    {
        return m_ConfidenceData;
    }

    /** @brief Set accessor functions for the LLRP ConfidenceData field */
    inline void
    setConfidenceData (
      llrp_u32v_t value)
    {
        m_ConfidenceData = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLocationReportData for LLRP parameter ImpinjLocationReportData
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter represents a single Location Report</p> 
 
        
    <p>The TimeStampUTC field contains the time stamp of the  event.</p> 
 
        
    <p>LocXCentimeres and LocYCentimeres represent the location in cm</p> 
 
        
    <p>The Confidence field contains confidence that the event occured in the form of a percentage. 0 is not confident. 100 is perfectly confident</p> 
 
      <SMALL><i>Copyright 2013 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
    
    
    
  
 **/

class CImpinjLocationReportData : public CParameter
{
  public:
    CImpinjLocationReportData (void);
    ~CImpinjLocationReportData (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u64_t m_LastSeenTimestampUTC;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLastSeenTimestampUTC;
//@}

    /** @brief Get accessor functions for the LLRP LastSeenTimestampUTC field */
    inline llrp_u64_t
    getLastSeenTimestampUTC (void)
    {
        return m_LastSeenTimestampUTC;
    }

    /** @brief Set accessor functions for the LLRP LastSeenTimestampUTC field */
    inline void
    setLastSeenTimestampUTC (
      llrp_u64_t value)
    {
        m_LastSeenTimestampUTC = value;
    }


  protected:
    llrp_s32_t m_LocXCentimeters;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLocXCentimeters;
//@}

    /** @brief Get accessor functions for the LLRP LocXCentimeters field */
    inline llrp_s32_t
    getLocXCentimeters (void)
    {
        return m_LocXCentimeters;
    }

    /** @brief Set accessor functions for the LLRP LocXCentimeters field */
    inline void
    setLocXCentimeters (
      llrp_s32_t value)
    {
        m_LocXCentimeters = value;
    }


  protected:
    llrp_s32_t m_LocYCentimeters;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLocYCentimeters;
//@}

    /** @brief Get accessor functions for the LLRP LocYCentimeters field */
    inline llrp_s32_t
    getLocYCentimeters (void)
    {
        return m_LocYCentimeters;
    }

    /** @brief Set accessor functions for the LLRP LocYCentimeters field */
    inline void
    setLocYCentimeters (
      llrp_s32_t value)
    {
        m_LocYCentimeters = value;
    }


  protected:
    EImpinjLocationReportType m_eType;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdType;
//@}

    /** @brief Get accessor functions for the LLRP Type field */
    inline EImpinjLocationReportType
    getType (void)
    {
        return m_eType;
    }

    /** @brief Set accessor functions for the LLRP Type field */
    inline void
    setType (
      EImpinjLocationReportType value)
    {
        m_eType = value;
    }


  
  protected:
    CImpinjLocationConfidence * m_pImpinjLocationConfidence;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjLocationConfidence sub-parameter */  
    inline CImpinjLocationConfidence *
    getImpinjLocationConfidence (void)
    {
        return m_pImpinjLocationConfidence;
    }

    /** @brief Set accessor functions for the LLRP ImpinjLocationConfidence sub-parameter */  
    EResultCode
    setImpinjLocationConfidence (
      CImpinjLocationConfidence * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDISpec for LLRP parameter ImpinjDISpec
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter is specified in an ROSpec and details direction operation.</p> 
 
        
    <p>Only one ImpinjDISpec may be specified in an ROSpec. When specifed, no other spec parameters can be present in the ROSpec.</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
    
    
    

    
  
 **/

class CImpinjDISpec : public CParameter
{
  public:
    CImpinjDISpec (void);
    ~CImpinjDISpec (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    CImpinjDirectionSectors * m_pImpinjDirectionSectors;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjDirectionSectors sub-parameter */  
    inline CImpinjDirectionSectors *
    getImpinjDirectionSectors (void)
    {
        return m_pImpinjDirectionSectors;
    }

    /** @brief Set accessor functions for the LLRP ImpinjDirectionSectors sub-parameter */  
    EResultCode
    setImpinjDirectionSectors (
      CImpinjDirectionSectors * pValue);


  protected:
    CImpinjDirectionConfig * m_pImpinjDirectionConfig;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjDirectionConfig sub-parameter */  
    inline CImpinjDirectionConfig *
    getImpinjDirectionConfig (void)
    {
        return m_pImpinjDirectionConfig;
    }

    /** @brief Set accessor functions for the LLRP ImpinjDirectionConfig sub-parameter */  
    EResultCode
    setImpinjDirectionConfig (
      CImpinjDirectionConfig * pValue);


  protected:
    CImpinjC1G2DirectionConfig * m_pImpinjC1G2DirectionConfig;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjC1G2DirectionConfig sub-parameter */  
    inline CImpinjC1G2DirectionConfig *
    getImpinjC1G2DirectionConfig (void)
    {
        return m_pImpinjC1G2DirectionConfig;
    }

    /** @brief Set accessor functions for the LLRP ImpinjC1G2DirectionConfig sub-parameter */  
    EResultCode
    setImpinjC1G2DirectionConfig (
      CImpinjC1G2DirectionConfig * pValue);


  protected:
    CImpinjDirectionReporting * m_pImpinjDirectionReporting;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjDirectionReporting sub-parameter */  
    inline CImpinjDirectionReporting *
    getImpinjDirectionReporting (void)
    {
        return m_pImpinjDirectionReporting;
    }

    /** @brief Set accessor functions for the LLRP ImpinjDirectionReporting sub-parameter */  
    EResultCode
    setImpinjDirectionReporting (
      CImpinjDirectionReporting * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDirectionSectors for LLRP parameter ImpinjDirectionSectors
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter specifies the sectors used for direction operation</p> 
 
        
    <p>The EnabledSectorIDs is a list of non-adjacent sectors to be used, range 2..9</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
  
 **/

class CImpinjDirectionSectors : public CParameter
{
  public:
    CImpinjDirectionSectors (void);
    ~CImpinjDirectionSectors (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16v_t m_EnabledSectorIDs;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnabledSectorIDs;
//@}

    /** @brief Get accessor functions for the LLRP EnabledSectorIDs field */
    inline llrp_u16v_t
    getEnabledSectorIDs (void)
    {
        return m_EnabledSectorIDs;
    }

    /** @brief Set accessor functions for the LLRP EnabledSectorIDs field */
    inline void
    setEnabledSectorIDs (
      llrp_u16v_t value)
    {
        m_EnabledSectorIDs = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDirectionConfig for LLRP parameter ImpinjDirectionConfig
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter specifies the configuration for direction operation</p> 
 
        
    <p>The TagAgeIntervalSeconds specifies how long a tag needs to go unseen before considered to have exited the field of view. Default is 2 seconds.</p> 
 
        
    <p>The UpdateIntervalSeconds specifies how often Update reports are generated for each tag. Default is 2 seconds.</p> 
 
        
    <p>The FieldOfView specifies the beams (width) used to determine direction.</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    

    
    
  
 **/

class CImpinjDirectionConfig : public CParameter
{
  public:
    CImpinjDirectionConfig (void);
    ~CImpinjDirectionConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_TagAgeIntervalSeconds;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTagAgeIntervalSeconds;
//@}

    /** @brief Get accessor functions for the LLRP TagAgeIntervalSeconds field */
    inline llrp_u16_t
    getTagAgeIntervalSeconds (void)
    {
        return m_TagAgeIntervalSeconds;
    }

    /** @brief Set accessor functions for the LLRP TagAgeIntervalSeconds field */
    inline void
    setTagAgeIntervalSeconds (
      llrp_u16_t value)
    {
        m_TagAgeIntervalSeconds = value;
    }


  protected:
    llrp_u16_t m_UpdateIntervalSeconds;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdUpdateIntervalSeconds;
//@}

    /** @brief Get accessor functions for the LLRP UpdateIntervalSeconds field */
    inline llrp_u16_t
    getUpdateIntervalSeconds (void)
    {
        return m_UpdateIntervalSeconds;
    }

    /** @brief Set accessor functions for the LLRP UpdateIntervalSeconds field */
    inline void
    setUpdateIntervalSeconds (
      llrp_u16_t value)
    {
        m_UpdateIntervalSeconds = value;
    }


  protected:
    EImpinjDirectionFieldOfView m_eFieldOfView;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFieldOfView;
//@}

    /** @brief Get accessor functions for the LLRP FieldOfView field */
    inline EImpinjDirectionFieldOfView
    getFieldOfView (void)
    {
        return m_eFieldOfView;
    }

    /** @brief Set accessor functions for the LLRP FieldOfView field */
    inline void
    setFieldOfView (
      EImpinjDirectionFieldOfView value)
    {
        m_eFieldOfView = value;
    }


  
  protected:
    CImpinjDirectionUserTagPopulationLimit * m_pImpinjDirectionUserTagPopulationLimit;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjDirectionUserTagPopulationLimit sub-parameter */  
    inline CImpinjDirectionUserTagPopulationLimit *
    getImpinjDirectionUserTagPopulationLimit (void)
    {
        return m_pImpinjDirectionUserTagPopulationLimit;
    }

    /** @brief Set accessor functions for the LLRP ImpinjDirectionUserTagPopulationLimit sub-parameter */  
    EResultCode
    setImpinjDirectionUserTagPopulationLimit (
      CImpinjDirectionUserTagPopulationLimit * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDirectionUserTagPopulationLimit for LLRP parameter ImpinjDirectionUserTagPopulationLimit
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>The UserTagPopulationLimit specifies the number of tags in the field of view before the TagPopulationStatus is updated to indicate this limit has been exceeded. Default is 0 (disabled).</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
  
 **/

class CImpinjDirectionUserTagPopulationLimit : public CParameter
{
  public:
    CImpinjDirectionUserTagPopulationLimit (void);
    ~CImpinjDirectionUserTagPopulationLimit (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_UserTagPopulationLimit;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdUserTagPopulationLimit;
//@}

    /** @brief Get accessor functions for the LLRP UserTagPopulationLimit field */
    inline llrp_u16_t
    getUserTagPopulationLimit (void)
    {
        return m_UserTagPopulationLimit;
    }

    /** @brief Set accessor functions for the LLRP UserTagPopulationLimit field */
    inline void
    setUserTagPopulationLimit (
      llrp_u16_t value)
    {
        m_UserTagPopulationLimit = value;
    }


  
};


/**
 ** @brief  Class Definition CImpinjC1G2DirectionConfig for LLRP parameter ImpinjC1G2DirectionConfig
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter specifies the C1G2 settings of the location algorithm</p> 
 
        
    <p>The ImpinjTransmitPower parameter specifies the Transmit Power to use for the operation</p> 
 
        
    <p>The RFMode parameter specifies the RF mode used for the operation.</p> 
 
        
    <p>The C1G2Filter parameter specifies any Gen2 based tag filtering</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    

    
    
  
 **/

class CImpinjC1G2DirectionConfig : public CParameter
{
  public:
    CImpinjC1G2DirectionConfig (void);
    ~CImpinjC1G2DirectionConfig (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjDirectionRFMode m_eRFMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdRFMode;
//@}

    /** @brief Get accessor functions for the LLRP RFMode field */
    inline EImpinjDirectionRFMode
    getRFMode (void)
    {
        return m_eRFMode;
    }

    /** @brief Set accessor functions for the LLRP RFMode field */
    inline void
    setRFMode (
      EImpinjDirectionRFMode value)
    {
        m_eRFMode = value;
    }


  
  protected:
    CImpinjTransmitPower * m_pImpinjTransmitPower;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjTransmitPower sub-parameter */  
    inline CImpinjTransmitPower *
    getImpinjTransmitPower (void)
    {
        return m_pImpinjTransmitPower;
    }

    /** @brief Set accessor functions for the LLRP ImpinjTransmitPower sub-parameter */  
    EResultCode
    setImpinjTransmitPower (
      CImpinjTransmitPower * pValue);


  protected:
    std::list<CC1G2Filter *> m_listC1G2Filter;

  public:
     /** @brief  Returns the first element of the C1G2Filter sub-parameter list*/  
    inline std::list<CC1G2Filter *>::iterator
    beginC1G2Filter (void)
    {
        return m_listC1G2Filter.begin();
    }

     /** @brief  Returns the last element of the C1G2Filter sub-parameter list*/  
    inline std::list<CC1G2Filter *>::iterator
    endC1G2Filter (void)
    {
        return m_listC1G2Filter.end();
    }

     /** @brief  Clears the LLRP C1G2Filter sub-parameter list*/  
    inline void
    clearC1G2Filter (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listC1G2Filter);
    }

     /** @brief  Count of the LLRP C1G2Filter sub-parameter list*/  
    inline int
    countC1G2Filter (void)
    {
        return (int) (m_listC1G2Filter.size());
    }

    EResultCode
     /** @brief  Add a C1G2Filter to the LLRP sub-parameter list*/  
    addC1G2Filter (
      CC1G2Filter * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjExtendedTagInformation for LLRP parameter ImpinjExtendedTagInformation
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides additional information about one or more tags that cannot be conveyed using the standard LLRP TagReportData parameter. The EPC is provided so an application may correlate this information with the associated TagReportData information as these parameters may arrive asynchronously with respect to the standard immediate reporting mechanism. Following the EPC is a set of parameters providing additional information about the tag, such as the direction in which it traveled through a portal.</p> 
 
        
    <p>Note that no effort was made to optimize the EPC as was done in standard LLRP. All EPCs, regardless of length, are reported using the EPCData parameter.</p> 
 
        
    <p>EPCData -- contains one or more EPCs for which this tag information applies </p> 
 
      <SMALL><i>Copyright 2007, 2008 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjExtendedTagInformation : public CParameter
{
  public:
    CImpinjExtendedTagInformation (void);
    ~CImpinjExtendedTagInformation (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    std::list<CEPCData *> m_listEPCData;

  public:
     /** @brief  Returns the first element of the EPCData sub-parameter list*/  
    inline std::list<CEPCData *>::iterator
    beginEPCData (void)
    {
        return m_listEPCData.begin();
    }

     /** @brief  Returns the last element of the EPCData sub-parameter list*/  
    inline std::list<CEPCData *>::iterator
    endEPCData (void)
    {
        return m_listEPCData.end();
    }

     /** @brief  Clears the LLRP EPCData sub-parameter list*/  
    inline void
    clearEPCData (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listEPCData);
    }

     /** @brief  Count of the LLRP EPCData sub-parameter list*/  
    inline int
    countEPCData (void)
    {
        return (int) (m_listEPCData.size());
    }

    EResultCode
     /** @brief  Add a EPCData to the LLRP sub-parameter list*/  
    addEPCData (
      CEPCData * pValue);


  protected:
    CImpinjLocationReportData * m_pImpinjLocationReportData;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjLocationReportData sub-parameter */  
    inline CImpinjLocationReportData *
    getImpinjLocationReportData (void)
    {
        return m_pImpinjLocationReportData;
    }

    /** @brief Set accessor functions for the LLRP ImpinjLocationReportData sub-parameter */  
    EResultCode
    setImpinjLocationReportData (
      CImpinjLocationReportData * pValue);


  protected:
    CImpinjDirectionReportData * m_pImpinjDirectionReportData;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjDirectionReportData sub-parameter */  
    inline CImpinjDirectionReportData *
    getImpinjDirectionReportData (void)
    {
        return m_pImpinjDirectionReportData;
    }

    /** @brief Set accessor functions for the LLRP ImpinjDirectionReportData sub-parameter */  
    EResultCode
    setImpinjDirectionReportData (
      CImpinjDirectionReportData * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDirectionReporting for LLRP parameter ImpinjDirectionReporting
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter specifies the reporting configuration for direction operation.</p> 
 
        
    <p>Set EnableUpdateReport to enable update reports, at the period specified above. Disabled by default.</p> 
 
        
    <p>Set EnableEntryReport to enable a report when a tag first becomes visible. Disabled by default.</p> 
 
        
    <p>Set EnableExitReport to enable a report once a tag is no longer seen. Enabled by default.</p> 
 
        
    <p>Set EnableDiagnosticReport to enable diagnostic data reports. Disabled by default.</p> 
 
        
    <p>The DiagnosticReportLevel parameter specifies the diagnostic reporting level for direction operation. Default is 'Off'.</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    

    
    
  
 **/

class CImpinjDirectionReporting : public CParameter
{
  public:
    CImpinjDirectionReporting (void);
    ~CImpinjDirectionReporting (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_EnableUpdateReport;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableUpdateReport;
//@}

    /** @brief Get accessor functions for the LLRP EnableUpdateReport field */
    inline llrp_u1_t
    getEnableUpdateReport (void)
    {
        return m_EnableUpdateReport;
    }

    /** @brief Set accessor functions for the LLRP EnableUpdateReport field */
    inline void
    setEnableUpdateReport (
      llrp_u1_t value)
    {
        m_EnableUpdateReport = value;
    }


  protected:
    llrp_u1_t m_EnableEntryReport;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableEntryReport;
//@}

    /** @brief Get accessor functions for the LLRP EnableEntryReport field */
    inline llrp_u1_t
    getEnableEntryReport (void)
    {
        return m_EnableEntryReport;
    }

    /** @brief Set accessor functions for the LLRP EnableEntryReport field */
    inline void
    setEnableEntryReport (
      llrp_u1_t value)
    {
        m_EnableEntryReport = value;
    }


  protected:
    llrp_u1_t m_EnableExitReport;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableExitReport;
//@}

    /** @brief Get accessor functions for the LLRP EnableExitReport field */
    inline llrp_u1_t
    getEnableExitReport (void)
    {
        return m_EnableExitReport;
    }

    /** @brief Set accessor functions for the LLRP EnableExitReport field */
    inline void
    setEnableExitReport (
      llrp_u1_t value)
    {
        m_EnableExitReport = value;
    }


  protected:
    llrp_u1_t m_EnableDiagnosticReport;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableDiagnosticReport;
//@}

    /** @brief Get accessor functions for the LLRP EnableDiagnosticReport field */
    inline llrp_u1_t
    getEnableDiagnosticReport (void)
    {
        return m_EnableDiagnosticReport;
    }

    /** @brief Set accessor functions for the LLRP EnableDiagnosticReport field */
    inline void
    setEnableDiagnosticReport (
      llrp_u1_t value)
    {
        m_EnableDiagnosticReport = value;
    }


  protected:
    EImpinjDirectionDiagnosticReportLevel m_eDiagnosticReportLevel;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdDiagnosticReportLevel;
//@}

    /** @brief Get accessor functions for the LLRP DiagnosticReportLevel field */
    inline EImpinjDirectionDiagnosticReportLevel
    getDiagnosticReportLevel (void)
    {
        return m_eDiagnosticReportLevel;
    }

    /** @brief Set accessor functions for the LLRP DiagnosticReportLevel field */
    inline void
    setDiagnosticReportLevel (
      EImpinjDirectionDiagnosticReportLevel value)
    {
        m_eDiagnosticReportLevel = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDirectionReportData for LLRP parameter ImpinjDirectionReportData
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter represents a single direction report</p> 
 
        
    <p>The Type is the type of direction report.</p> 
 
        
    <p>The TagPopulationStatus is the tag population status.</p> 
 
        
    <p>The FirstSeenSectorID field contains the sector ID of the first read.</p> 
 
        
    <p>The FirstSeenTimestampUTC field contains the time stamp of the first read.</p> 
 
        
    <p>The LastSeenSectorID field contains the sector ID of the last read.</p> 
 
        
    <p>The LastSeenTimestampUTC field contains the time stamp of the last read.</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjDirectionReportData : public CParameter
{
  public:
    CImpinjDirectionReportData (void);
    ~CImpinjDirectionReportData (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjDirectionReportType m_eType;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdType;
//@}

    /** @brief Get accessor functions for the LLRP Type field */
    inline EImpinjDirectionReportType
    getType (void)
    {
        return m_eType;
    }

    /** @brief Set accessor functions for the LLRP Type field */
    inline void
    setType (
      EImpinjDirectionReportType value)
    {
        m_eType = value;
    }


  protected:
    EImpinjDirectionTagPopulationStatus m_eTagPopulationStatus;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTagPopulationStatus;
//@}

    /** @brief Get accessor functions for the LLRP TagPopulationStatus field */
    inline EImpinjDirectionTagPopulationStatus
    getTagPopulationStatus (void)
    {
        return m_eTagPopulationStatus;
    }

    /** @brief Set accessor functions for the LLRP TagPopulationStatus field */
    inline void
    setTagPopulationStatus (
      EImpinjDirectionTagPopulationStatus value)
    {
        m_eTagPopulationStatus = value;
    }


  protected:
    llrp_u8_t m_FirstSeenSectorID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFirstSeenSectorID;
//@}

    /** @brief Get accessor functions for the LLRP FirstSeenSectorID field */
    inline llrp_u8_t
    getFirstSeenSectorID (void)
    {
        return m_FirstSeenSectorID;
    }

    /** @brief Set accessor functions for the LLRP FirstSeenSectorID field */
    inline void
    setFirstSeenSectorID (
      llrp_u8_t value)
    {
        m_FirstSeenSectorID = value;
    }


  protected:
    llrp_u64_t m_FirstSeenTimestampUTC;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFirstSeenTimestampUTC;
//@}

    /** @brief Get accessor functions for the LLRP FirstSeenTimestampUTC field */
    inline llrp_u64_t
    getFirstSeenTimestampUTC (void)
    {
        return m_FirstSeenTimestampUTC;
    }

    /** @brief Set accessor functions for the LLRP FirstSeenTimestampUTC field */
    inline void
    setFirstSeenTimestampUTC (
      llrp_u64_t value)
    {
        m_FirstSeenTimestampUTC = value;
    }


  protected:
    llrp_u8_t m_LastSeenSectorID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLastSeenSectorID;
//@}

    /** @brief Get accessor functions for the LLRP LastSeenSectorID field */
    inline llrp_u8_t
    getLastSeenSectorID (void)
    {
        return m_LastSeenSectorID;
    }

    /** @brief Set accessor functions for the LLRP LastSeenSectorID field */
    inline void
    setLastSeenSectorID (
      llrp_u8_t value)
    {
        m_LastSeenSectorID = value;
    }


  protected:
    llrp_u64_t m_LastSeenTimestampUTC;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdLastSeenTimestampUTC;
//@}

    /** @brief Get accessor functions for the LLRP LastSeenTimestampUTC field */
    inline llrp_u64_t
    getLastSeenTimestampUTC (void)
    {
        return m_LastSeenTimestampUTC;
    }

    /** @brief Set accessor functions for the LLRP LastSeenTimestampUTC field */
    inline void
    setLastSeenTimestampUTC (
      llrp_u64_t value)
    {
        m_LastSeenTimestampUTC = value;
    }


  
  protected:
    CImpinjDirectionDiagnosticData * m_pImpinjDirectionDiagnosticData;

  public:
    /** @brief Get accessor functions for the LLRP ImpinjDirectionDiagnosticData sub-parameter */  
    inline CImpinjDirectionDiagnosticData *
    getImpinjDirectionDiagnosticData (void)
    {
        return m_pImpinjDirectionDiagnosticData;
    }

    /** @brief Set accessor functions for the LLRP ImpinjDirectionDiagnosticData sub-parameter */  
    EResultCode
    setImpinjDirectionDiagnosticData (
      CImpinjDirectionDiagnosticData * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDirectionDiagnosticData for LLRP parameter ImpinjDirectionDiagnosticData
 **
 
    
      
<ul>
  
</ul>  

      
          
    <p>Used to send diagnostic data</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
  
 **/

class CImpinjDirectionDiagnosticData : public CParameter
{
  public:
    CImpinjDirectionDiagnosticData (void);
    ~CImpinjDirectionDiagnosticData (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32v_t m_Metric;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMetric;
//@}

    /** @brief Get accessor functions for the LLRP Metric field */
    inline llrp_u32v_t
    getMetric (void)
    {
        return m_Metric;
    }

    /** @brief Set accessor functions for the LLRP Metric field */
    inline void
    setMetric (
      llrp_u32v_t value)
    {
        m_Metric = value;
    }


  
};


/**
 ** @brief  Class Definition CImpinjxArrayDirectionCapabilities for LLRP parameter ImpinjxArrayDirectionCapabilities
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides detailed capabilities of the reader's direction operation.</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjxArrayDirectionCapabilities : public CParameter
{
  public:
    CImpinjxArrayDirectionCapabilities (void);
    ~CImpinjxArrayDirectionCapabilities (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_SystemTagPopulationLimitHighSensitivity;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSystemTagPopulationLimitHighSensitivity;
//@}

    /** @brief Get accessor functions for the LLRP SystemTagPopulationLimitHighSensitivity field */
    inline llrp_u16_t
    getSystemTagPopulationLimitHighSensitivity (void)
    {
        return m_SystemTagPopulationLimitHighSensitivity;
    }

    /** @brief Set accessor functions for the LLRP SystemTagPopulationLimitHighSensitivity field */
    inline void
    setSystemTagPopulationLimitHighSensitivity (
      llrp_u16_t value)
    {
        m_SystemTagPopulationLimitHighSensitivity = value;
    }


  protected:
    llrp_u16_t m_SystemTagPopulationLimitHighPerformance;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSystemTagPopulationLimitHighPerformance;
//@}

    /** @brief Get accessor functions for the LLRP SystemTagPopulationLimitHighPerformance field */
    inline llrp_u16_t
    getSystemTagPopulationLimitHighPerformance (void)
    {
        return m_SystemTagPopulationLimitHighPerformance;
    }

    /** @brief Set accessor functions for the LLRP SystemTagPopulationLimitHighPerformance field */
    inline void
    setSystemTagPopulationLimitHighPerformance (
      llrp_u16_t value)
    {
        m_SystemTagPopulationLimitHighPerformance = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjIntelligentAntennaManagement for LLRP parameter ImpinjIntelligentAntennaManagement
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter allows the end user to enable/disable intelligent antenna management (enabled by default)</p> 
 
      <SMALL><i>Copyright 2014 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjIntelligentAntennaManagement : public CParameter
{
  public:
    CImpinjIntelligentAntennaManagement (void);
    ~CImpinjIntelligentAntennaManagement (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjIntelligentAntennaMode m_eManagementEnabled;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdManagementEnabled;
//@}

    /** @brief Get accessor functions for the LLRP ManagementEnabled field */
    inline EImpinjIntelligentAntennaMode
    getManagementEnabled (void)
    {
        return m_eManagementEnabled;
    }

    /** @brief Set accessor functions for the LLRP ManagementEnabled field */
    inline void
    setManagementEnabled (
      EImpinjIntelligentAntennaMode value)
    {
        m_eManagementEnabled = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTransmitPower for LLRP parameter ImpinjTransmitPower
 **
 
    
      
<ul>
  
</ul>  

      
          
    <p>This custom parameter specifies the Transmit Power (index) to use for the Impinj specific feature.</p> 
 
          
    <p>The TransmitPower parameter defines the transmit power to be used expressed as an index into the TransmitPowerTable.</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjTransmitPower : public CParameter
{
  public:
    CImpinjTransmitPower (void);
    ~CImpinjTransmitPower (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_TransmitPower;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTransmitPower;
//@}

    /** @brief Get accessor functions for the LLRP TransmitPower field */
    inline llrp_u16_t
    getTransmitPower (void)
    {
        return m_TransmitPower;
    }

    /** @brief Set accessor functions for the LLRP TransmitPower field */
    inline void
    setTransmitPower (
      llrp_u16_t value)
    {
        m_TransmitPower = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjPolarizationControl for LLRP parameter ImpinjPolarizationControl
 **
 
    
      
<ul>
  
</ul>  

       
          
    <p>Enable extended antenna ID numbering to allow controlling which antenna polarization states are used.</p> 
 
       <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjPolarizationControl : public CParameter
{
  public:
    CImpinjPolarizationControl (void);
    ~CImpinjPolarizationControl (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_PolarizationControlEnabled;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPolarizationControlEnabled;
//@}

    /** @brief Get accessor functions for the LLRP PolarizationControlEnabled field */
    inline llrp_u1_t
    getPolarizationControlEnabled (void)
    {
        return m_PolarizationControlEnabled;
    }

    /** @brief Set accessor functions for the LLRP PolarizationControlEnabled field */
    inline void
    setPolarizationControlEnabled (
      llrp_u1_t value)
    {
        m_PolarizationControlEnabled = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAntennaCapabilities for LLRP parameter ImpinjAntennaCapabilities
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides detailed capabilities of the reader's antennas.</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjAntennaCapabilities : public CParameter
{
  public:
    CImpinjAntennaCapabilities (void);
    ~CImpinjAntennaCapabilities (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  
  protected:
    std::list<CImpinjAntennaPolarizationCapability *> m_listImpinjAntennaPolarizationCapability;

  public:
     /** @brief  Returns the first element of the ImpinjAntennaPolarizationCapability sub-parameter list*/  
    inline std::list<CImpinjAntennaPolarizationCapability *>::iterator
    beginImpinjAntennaPolarizationCapability (void)
    {
        return m_listImpinjAntennaPolarizationCapability.begin();
    }

     /** @brief  Returns the last element of the ImpinjAntennaPolarizationCapability sub-parameter list*/  
    inline std::list<CImpinjAntennaPolarizationCapability *>::iterator
    endImpinjAntennaPolarizationCapability (void)
    {
        return m_listImpinjAntennaPolarizationCapability.end();
    }

     /** @brief  Clears the LLRP ImpinjAntennaPolarizationCapability sub-parameter list*/  
    inline void
    clearImpinjAntennaPolarizationCapability (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listImpinjAntennaPolarizationCapability);
    }

     /** @brief  Count of the LLRP ImpinjAntennaPolarizationCapability sub-parameter list*/  
    inline int
    countImpinjAntennaPolarizationCapability (void)
    {
        return (int) (m_listImpinjAntennaPolarizationCapability.size());
    }

    EResultCode
     /** @brief  Add a ImpinjAntennaPolarizationCapability to the LLRP sub-parameter list*/  
    addImpinjAntennaPolarizationCapability (
      CImpinjAntennaPolarizationCapability * pValue);


  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAntennaPolarizationCapability for LLRP parameter ImpinjAntennaPolarizationCapability
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides detailed information about the antenna's polarization.</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjAntennaPolarizationCapability : public CParameter
{
  public:
    CImpinjAntennaPolarizationCapability (void);
    ~CImpinjAntennaPolarizationCapability (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjAntennaPolarizationType m_eType;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdType;
//@}

    /** @brief Get accessor functions for the LLRP Type field */
    inline EImpinjAntennaPolarizationType
    getType (void)
    {
        return m_eType;
    }

    /** @brief Set accessor functions for the LLRP Type field */
    inline void
    setType (
      EImpinjAntennaPolarizationType value)
    {
        m_eType = value;
    }


  protected:
    llrp_u16_t m_AntennaIDOffset;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAntennaIDOffset;
//@}

    /** @brief Get accessor functions for the LLRP AntennaIDOffset field */
    inline llrp_u16_t
    getAntennaIDOffset (void)
    {
        return m_AntennaIDOffset;
    }

    /** @brief Set accessor functions for the LLRP AntennaIDOffset field */
    inline void
    setAntennaIDOffset (
      llrp_u16_t value)
    {
        m_AntennaIDOffset = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjDisabledAntennas for LLRP parameter ImpinjDisabledAntennas
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides a list of antennas to be excluded from operation.</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjDisabledAntennas : public CParameter
{
  public:
    CImpinjDisabledAntennas (void);
    ~CImpinjDisabledAntennas (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16v_t m_AntennaIDs;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAntennaIDs;
//@}

    /** @brief Get accessor functions for the LLRP AntennaIDs field */
    inline llrp_u16v_t
    getAntennaIDs (void)
    {
        return m_AntennaIDs;
    }

    /** @brief Set accessor functions for the LLRP AntennaIDs field */
    inline void
    setAntennaIDs (
      llrp_u16v_t value)
    {
        m_AntennaIDs = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTIDParity for LLRP parameter ImpinjTIDParity
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides the status of TID Parity Check for Monza 6 tags.</p> 
 
      <SMALL><i>Copyright 2015 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjTIDParity : public CParameter
{
  public:
    CImpinjTIDParity (void);
    ~CImpinjTIDParity (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_ParityError;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdParityError;
//@}

    /** @brief Get accessor functions for the LLRP ParityError field */
    inline llrp_u1_t
    getParityError (void)
    {
        return m_ParityError;
    }

    /** @brief Set accessor functions for the LLRP ParityError field */
    inline void
    setParityError (
      llrp_u1_t value)
    {
        m_ParityError = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjMarginRead for LLRP parameter ImpinjMarginRead
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that can confirm data integrity on Monza tag chips with Integra. This command allows a reader to explicitly verify that the non-volatile memory (NVM) in the tag chip is not weakly written, guaranteeing a minimum margin on NVM. It can be used for quality control to ensure data integrity and for failure analysis. The AccessPassword field is the password required to move the tag into the secured state if needed. Unlike most other Access commands, Margin Read can be performed at the individual bit level. The BitPointer and BitLength fields are for the starting bit address and number of bits to check, respectively.</p> 
 
      <SMALL><i>Copyright 2016 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjMarginRead : public CParameter
{
  public:
    CImpinjMarginRead (void);
    ~CImpinjMarginRead (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    llrp_u2_t m_MB;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMB;
//@}

    /** @brief Get accessor functions for the LLRP MB field */
    inline llrp_u2_t
    getMB (void)
    {
        return m_MB;
    }

    /** @brief Set accessor functions for the LLRP MB field */
    inline void
    setMB (
      llrp_u2_t value)
    {
        m_MB = value;
    }


  protected:
    llrp_u16_t m_BitPointer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBitPointer;
//@}

    /** @brief Get accessor functions for the LLRP BitPointer field */
    inline llrp_u16_t
    getBitPointer (void)
    {
        return m_BitPointer;
    }

    /** @brief Set accessor functions for the LLRP BitPointer field */
    inline void
    setBitPointer (
      llrp_u16_t value)
    {
        m_BitPointer = value;
    }


  protected:
    llrp_u8_t m_BitLength;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdBitLength;
//@}

    /** @brief Get accessor functions for the LLRP BitLength field */
    inline llrp_u8_t
    getBitLength (void)
    {
        return m_BitLength;
    }

    /** @brief Set accessor functions for the LLRP BitLength field */
    inline void
    setBitLength (
      llrp_u8_t value)
    {
        m_BitLength = value;
    }


  protected:
    llrp_u16v_t m_Mask;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMask;
//@}

    /** @brief Get accessor functions for the LLRP Mask field */
    inline llrp_u16v_t
    getMask (void)
    {
        return m_Mask;
    }

    /** @brief Set accessor functions for the LLRP Mask field */
    inline void
    setMask (
      llrp_u16v_t value)
    {
        m_Mask = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjMarginReadOpSpecResult for LLRP parameter ImpinjMarginReadOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjMarginRead OpSpec.</p> 
 
      <SMALL><i>Copyright 2016 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
  
 **/

class CImpinjMarginReadOpSpecResult : public CParameter
{
  public:
    CImpinjMarginReadOpSpecResult (void);
    ~CImpinjMarginReadOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjMarginReadResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjMarginReadResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjMarginReadResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjBLEVersion for LLRP parameter ImpinjBLEVersion
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This parameter contains BLE specific hardware and version information that is considered additional to ImpinjDetailedVersion information.</p> 
 
      <SMALL><i>Copyright 2010, 2014 Impinj Inc.</i></SMALL> 
  <HR>

    

    
    
  
 **/

class CImpinjBLEVersion : public CParameter
{
  public:
    CImpinjBLEVersion (void);
    ~CImpinjBLEVersion (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_utf8v_t m_FirmwareVersion;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdFirmwareVersion;
//@}

    /** @brief Get accessor functions for the LLRP FirmwareVersion field */
    inline llrp_utf8v_t
    getFirmwareVersion (void)
    {
        return m_FirmwareVersion;
    }

    /** @brief Set accessor functions for the LLRP FirmwareVersion field */
    inline void
    setFirmwareVersion (
      llrp_utf8v_t value)
    {
        m_FirmwareVersion = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjLocationAlgorithmControl for LLRP parameter ImpinjLocationAlgorithmControl
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter provides 'internal' parameters to control the Location algorithm.</p> 
 
      <SMALL><i>Copyright 2016 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
  
 **/

class CImpinjLocationAlgorithmControl : public CParameter
{
  public:
    CImpinjLocationAlgorithmControl (void);
    ~CImpinjLocationAlgorithmControl (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u32v_t m_ControlData;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdControlData;
//@}

    /** @brief Get accessor functions for the LLRP ControlData field */
    inline llrp_u32v_t
    getControlData (void)
    {
        return m_ControlData;
    }

    /** @brief Set accessor functions for the LLRP ControlData field */
    inline void
    setControlData (
      llrp_u32v_t value)
    {
        m_ControlData = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjRFPowerSweep for LLRP parameter ImpinjRFPowerSweep
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter controls the RF Power Sweep feature.</p> 
 
        
    <p> EnableRFPowerSweep: Set to enable RF Power Sweep, reset to disable. Reset by default.</p> 
 
        
    <p> MinimumPowerLevel: Transmit Power above which to start the RF Power Sweep, expressed as an index into the TransmitPowerTable. Ignored if disabling feature. </p> 
 
        
    <p> PowerLevelStepSize: Transmit Power step size by which to sweep power. Specified as power level index (0.25 dB increments).  Ignored if disabling feature. </p> 
 
      <SMALL><i>Copyright 2017 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
  
 **/

class CImpinjRFPowerSweep : public CParameter
{
  public:
    CImpinjRFPowerSweep (void);
    ~CImpinjRFPowerSweep (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_EnableRFPowerSweep;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEnableRFPowerSweep;
//@}

    /** @brief Get accessor functions for the LLRP EnableRFPowerSweep field */
    inline llrp_u1_t
    getEnableRFPowerSweep (void)
    {
        return m_EnableRFPowerSweep;
    }

    /** @brief Set accessor functions for the LLRP EnableRFPowerSweep field */
    inline void
    setEnableRFPowerSweep (
      llrp_u1_t value)
    {
        m_EnableRFPowerSweep = value;
    }


  protected:
    llrp_u16_t m_MinimumPowerLevel;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMinimumPowerLevel;
//@}

    /** @brief Get accessor functions for the LLRP MinimumPowerLevel field */
    inline llrp_u16_t
    getMinimumPowerLevel (void)
    {
        return m_MinimumPowerLevel;
    }

    /** @brief Set accessor functions for the LLRP MinimumPowerLevel field */
    inline void
    setMinimumPowerLevel (
      llrp_u16_t value)
    {
        m_MinimumPowerLevel = value;
    }


  protected:
    llrp_u16_t m_PowerLevelStepSize;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPowerLevelStepSize;
//@}

    /** @brief Get accessor functions for the LLRP PowerLevelStepSize field */
    inline llrp_u16_t
    getPowerLevelStepSize (void)
    {
        return m_PowerLevelStepSize;
    }

    /** @brief Set accessor functions for the LLRP PowerLevelStepSize field */
    inline void
    setPowerLevelStepSize (
      llrp_u16_t value)
    {
        m_PowerLevelStepSize = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTruncatedReplyConfiguration for LLRP parameter ImpinjTruncatedReplyConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
          
    <p>This custom parameter controls the truncated reply feature. The presence of an ImpinjTruncatedReplyConfiguration within the C1G2InventoryCommand will enable truncated reply.</p> 
 
          
    <p> Gen2v2TagsOnly: If only Gen2v2 tags are in the field of view then setting the Gen2v2TagsOnly flag will perform an additional CRC check to further validate the integrity of the tag response.  If this flag is enabled non-Gen2v2 tags will be ignored.</p> 
 
          
    <p> EPCLength: The EPC Length, in 16-bit words, of all tags in the field of view.  Only tags with EPCs of this length can reply, tags with EPCs that are not this length will be ignored.</p> 
 
          
    <p> Pointer: Select a starting bit location in the EPC memory bank that will be used for the truncating select command.</p> 
 
          
    <p> TagMask: Specifies the mask that must match the EPC memory bank starting at Pointer.  The end of the mask defines the start location of EPC reported by the tag.  If the RO Spec contains C1G2Filters then the length of TagMask must be 0. Filter validation is disabled when truncated reply is used.</p> 
 
      <SMALL><i>Copyright 2019 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
  
 **/

class CImpinjTruncatedReplyConfiguration : public CParameter
{
  public:
    CImpinjTruncatedReplyConfiguration (void);
    ~CImpinjTruncatedReplyConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u1_t m_Gen2v2TagsOnly;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdGen2v2TagsOnly;
//@}

    /** @brief Get accessor functions for the LLRP Gen2v2TagsOnly field */
    inline llrp_u1_t
    getGen2v2TagsOnly (void)
    {
        return m_Gen2v2TagsOnly;
    }

    /** @brief Set accessor functions for the LLRP Gen2v2TagsOnly field */
    inline void
    setGen2v2TagsOnly (
      llrp_u1_t value)
    {
        m_Gen2v2TagsOnly = value;
    }


  protected:
    llrp_u8_t m_EPCLength;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdEPCLength;
//@}

    /** @brief Get accessor functions for the LLRP EPCLength field */
    inline llrp_u8_t
    getEPCLength (void)
    {
        return m_EPCLength;
    }

    /** @brief Set accessor functions for the LLRP EPCLength field */
    inline void
    setEPCLength (
      llrp_u8_t value)
    {
        m_EPCLength = value;
    }


  protected:
    llrp_u16_t m_Pointer;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdPointer;
//@}

    /** @brief Get accessor functions for the LLRP Pointer field */
    inline llrp_u16_t
    getPointer (void)
    {
        return m_Pointer;
    }

    /** @brief Set accessor functions for the LLRP Pointer field */
    inline void
    setPointer (
      llrp_u16_t value)
    {
        m_Pointer = value;
    }


  protected:
    llrp_u1v_t m_TagMask;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTagMask;
//@}

    /** @brief Get accessor functions for the LLRP TagMask field */
    inline llrp_u1v_t
    getTagMask (void)
    {
        return m_TagMask;
    }

    /** @brief Set accessor functions for the LLRP TagMask field */
    inline void
    setTagMask (
      llrp_u1v_t value)
    {
        m_TagMask = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAuthenticate for LLRP parameter ImpinjAuthenticate
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is an OpSpec that performs a Gen2v2 Authenticate command.</p> 
 
        
    <p>AccessPassword: the password required to move the tag into the secured state if needed.</p> 
 
        
    <p>SendRep: must be set to 1 in the current implementation, for the tag to send the response in a reply.</p> 
 
        
    <p>IncRepLen: must be set to 0 in the current implementation, to omit length from the reply.</p> 
 
        
    <p>CSI: must be set to 01 in the current implementation, to set the crypto suite to use.</p> 
 
        
    <p>Message: to challenge the authentication engine. Must be 48-bits in the current implementation. The 6th bit determines the length of the expected response. If 0 the response is 64 bits, else the response is 128 bits.</p> 
 
      <SMALL><i>Copyright 2020 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
    
    
    
    
  
 **/

class CImpinjAuthenticate : public CParameter
{
  public:
    CImpinjAuthenticate (void);
    ~CImpinjAuthenticate (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u32_t m_AccessPassword;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdAccessPassword;
//@}

    /** @brief Get accessor functions for the LLRP AccessPassword field */
    inline llrp_u32_t
    getAccessPassword (void)
    {
        return m_AccessPassword;
    }

    /** @brief Set accessor functions for the LLRP AccessPassword field */
    inline void
    setAccessPassword (
      llrp_u32_t value)
    {
        m_AccessPassword = value;
    }


  protected:
    llrp_u1_t m_SendRep;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdSendRep;
//@}

    /** @brief Get accessor functions for the LLRP SendRep field */
    inline llrp_u1_t
    getSendRep (void)
    {
        return m_SendRep;
    }

    /** @brief Set accessor functions for the LLRP SendRep field */
    inline void
    setSendRep (
      llrp_u1_t value)
    {
        m_SendRep = value;
    }


  protected:
    llrp_u1_t m_IncRepLen;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdIncRepLen;
//@}

    /** @brief Get accessor functions for the LLRP IncRepLen field */
    inline llrp_u1_t
    getIncRepLen (void)
    {
        return m_IncRepLen;
    }

    /** @brief Set accessor functions for the LLRP IncRepLen field */
    inline void
    setIncRepLen (
      llrp_u1_t value)
    {
        m_IncRepLen = value;
    }


  protected:
    llrp_u8_t m_CSI;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdCSI;
//@}

    /** @brief Get accessor functions for the LLRP CSI field */
    inline llrp_u8_t
    getCSI (void)
    {
        return m_CSI;
    }

    /** @brief Set accessor functions for the LLRP CSI field */
    inline void
    setCSI (
      llrp_u8_t value)
    {
        m_CSI = value;
    }


  protected:
    llrp_u1v_t m_Message;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdMessage;
//@}

    /** @brief Get accessor functions for the LLRP Message field */
    inline llrp_u1v_t
    getMessage (void)
    {
        return m_Message;
    }

    /** @brief Set accessor functions for the LLRP Message field */
    inline void
    setMessage (
      llrp_u1v_t value)
    {
        m_Message = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjAuthenticateOpSpecResult for LLRP parameter ImpinjAuthenticateOpSpecResult
 **
 
    
      
<ul>
  
</ul>  

      
        
    <p>This custom parameter is the result of an ImpinjAuthenticate OpSpec.</p> 
 
        
    <p>Response: When Result is Success, this is the tag's response to the challenge issued to its authentication engine. The response is either 64 bits, or 128 bits if a short TID is included with it.</p> 
 
      <SMALL><i>Copyright 2020 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
    
    
  
 **/

class CImpinjAuthenticateOpSpecResult : public CParameter
{
  public:
    CImpinjAuthenticateOpSpecResult (void);
    ~CImpinjAuthenticateOpSpecResult (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjAuthenticateResultType m_eResult;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResult;
//@}

    /** @brief Get accessor functions for the LLRP Result field */
    inline EImpinjAuthenticateResultType
    getResult (void)
    {
        return m_eResult;
    }

    /** @brief Set accessor functions for the LLRP Result field */
    inline void
    setResult (
      EImpinjAuthenticateResultType value)
    {
        m_eResult = value;
    }


  protected:
    llrp_u16_t m_OpSpecID;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdOpSpecID;
//@}

    /** @brief Get accessor functions for the LLRP OpSpecID field */
    inline llrp_u16_t
    getOpSpecID (void)
    {
        return m_OpSpecID;
    }

    /** @brief Set accessor functions for the LLRP OpSpecID field */
    inline void
    setOpSpecID (
      llrp_u16_t value)
    {
        m_OpSpecID = value;
    }


  protected:
    llrp_u1v_t m_Response;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdResponse;
//@}

    /** @brief Get accessor functions for the LLRP Response field */
    inline llrp_u1v_t
    getResponse (void)
    {
        return m_Response;
    }

    /** @brief Set accessor functions for the LLRP Response field */
    inline void
    setResponse (
      llrp_u1v_t value)
    {
        m_Response = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/**
 ** @brief  Class Definition CImpinjTagFilterVerificationConfiguration for LLRP parameter ImpinjTagFilterVerificationConfiguration
 **
 
    
      
<ul>
  
</ul>  

      
          
    <p>This custom parameter controls behavior of the tag filter verification feature. Tag filter verification may be employed to perform on-reader verification of the inventory filter match criteria, rejecting any tags singulated that may have missed the Select filter mask and erroneously participated in the subsequent inventory session.</p> 
 
          
    <p>TagFilterVerificationMode: Set to Active to enable tag filter verification, including automatic halting for memory bank read operations when required to validate the filter mask defined by the inventory Select configuration. Set to Disabled to bypass tag filter verification and rely solely on Select-based filtering by the tag.</p> 
 
      <SMALL><i>Copyright 2021 Impinj Inc.</i></SMALL> 
  <HR>

    
    
    
    
  
 **/

class CImpinjTagFilterVerificationConfiguration : public CParameter
{
  public:
    CImpinjTagFilterVerificationConfiguration (void);
    ~CImpinjTagFilterVerificationConfiguration (void);

/** @name Internal Framework Functions */
//@{

    static const CFieldDescriptor * const
    s_apFieldDescriptorTable[];

    static const CTypeDescriptor
    s_typeDescriptor;

    void
    decodeFields (
      CDecoderStream *          pDecoderStream);

    void
    assimilateSubParameters (
      CErrorDetails *           pError);

    void
    encode (
      CEncoderStream *          pEncoderStream) const;

  
    llrp_bool_t
    isAllowedIn (
      const CTypeDescriptor *   pEnclosingElementType) const;
  

    static CElement *
    s_construct (void);

    static void
    s_decodeFields (
      CDecoderStream *          pDecoderStream,
      CElement *                pElement);
//@}

  
  protected:
    EImpinjTagFilterVerificationMode m_eTagFilterVerificationMode;

/** @name Internal Framework Functions */
//@{
  public:
    static const CFieldDescriptor
    s_fdTagFilterVerificationMode;
//@}

    /** @brief Get accessor functions for the LLRP TagFilterVerificationMode field */
    inline EImpinjTagFilterVerificationMode
    getTagFilterVerificationMode (void)
    {
        return m_eTagFilterVerificationMode;
    }

    /** @brief Set accessor functions for the LLRP TagFilterVerificationMode field */
    inline void
    setTagFilterVerificationMode (
      EImpinjTagFilterVerificationMode value)
    {
        m_eTagFilterVerificationMode = value;
    }


  
  protected:
    std::list<CParameter *> m_listCustom;

  public:
     /** @brief  Returns the first element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    beginCustom (void)
    {
        return m_listCustom.begin();
    }

     /** @brief  Returns the last element of the Custom sub-parameter list*/  
    inline std::list<CParameter *>::iterator
    endCustom (void)
    {
        return m_listCustom.end();
    }

     /** @brief  Clears the LLRP Custom sub-parameter list*/  
    inline void
    clearCustom (void)
    {
        clearSubParameterList ((tListOfParameters *) &m_listCustom);
    }

     /** @brief  Count of the LLRP Custom sub-parameter list*/  
    inline int
    countCustom (void)
    {
        return (int) (m_listCustom.size());
    }

    EResultCode
     /** @brief  Add a Custom to the LLRP sub-parameter list*/  
    addCustom (
      CParameter * pValue);


};


/*@}*/ 


/** @brief Enrolls the types for Impinj into the LTKCPP registry
 ** 
 ** LTKCPP needs an internal registry for storing all the type information.  This function
 ** is required to enroll the types for the Impinj into
 ** the operating registry.  
 ** 
 ** For example -- in order to decode and encode packets from the core LLRP specification
 ** The user must EnrollCoreTypesIntoRegistry.
 **
 ** @ingroup LTKCoreElement
 */
extern void
enrollImpinjTypesIntoRegistry (
  CTypeRegistry *               pTypeRegistry);
