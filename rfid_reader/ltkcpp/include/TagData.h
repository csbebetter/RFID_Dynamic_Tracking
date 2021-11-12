/**************************************************************************
** ��ǩ��Ϣ�ṹ��
**
**************************************************************************/
#ifndef _TAG_DATA_H_
#define _TAG_DATA_H_

#include<string>
using std::string;
typedef struct TagDataStruct
{
	int                 antennaId;
	char				epc[128];					           //��ǩEPC
	double				phase;								   //��λ
	double              rssi;                              // �ź�ǿ��
	unsigned long long	timestamp;					//firstSeenTimestampUTC
	unsigned long long  timestamp_pc;			//��¼����ȡ����ǩ��Ϣ��ʱ���
	double				robotX;								//����������-X cm
	double				robotY;								//����������-Y cm
	double				robotTh;								//�����˳���ǣ����ȣ�-Th

	int                 channelIndex;               // frequecy point
}TagData;

#endif