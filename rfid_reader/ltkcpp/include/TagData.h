/**************************************************************************
** 标签信息结构体
**
**************************************************************************/
#ifndef _TAG_DATA_H_
#define _TAG_DATA_H_

#include<string>
using std::string;
typedef struct TagDataStruct
{
	int                 antennaId;
	char				epc[128];					           //标签EPC
	double				phase;								   //相位
	double              rssi;                              // 信号强度
	unsigned long long	timestamp;					//firstSeenTimestampUTC
	unsigned long long  timestamp_pc;			//记录电脑取出标签信息的时间戳
	double				robotX;								//机器人坐标-X cm
	double				robotY;								//机器人坐标-Y cm
	double				robotTh;								//机器人朝向角（弧度）-Th

	int                 channelIndex;               // frequecy point
}TagData;

#endif