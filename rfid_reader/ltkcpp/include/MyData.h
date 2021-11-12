//#ifndef _MY_DATA_H_
//#define _MY_DATA_H_

class MyData {
public:
	int                     antennaId;
	char		        epc[128];			     //标签EPC
	double		        phase;				     //相位
	double                  rssi;                                // 信号强度
	unsigned long long	timestamp;		             //firstSeenTimestampUTC
	unsigned long long      timestamp_pc;			     //记录电脑取出标签信息的时间戳
	double			robotX;			             //机器人坐标-X cm
	double			robotY;			             //机器人坐标-Y cm
	double		        robotTh;			     //机器人朝向角（弧度）-Th
	int                     channelIndex;                        // frequecy point
};
//#endif
