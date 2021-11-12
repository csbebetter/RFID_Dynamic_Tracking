/**
*******************************************************************
** @brief �����˹�����ʹ�õ���ȫ���Գ��������Է����������ò���
**
** @author hongc 2017.07.05
*******************************************************************/
#ifndef _STATIC_PROPERTIES_H_
#define _STATIC_PROPERTIES_H_

#define	RFID_READER_IP_ADDRESS	"115.156.142.222"					//RFID��д����IP��ַ

#define	LEFT_READER_ID			1									//���д��ID
#define	RIGHT_READER_ID			2									//�Ҷ�д��ID

#define	TARGET_TAG_EPC			"3008-33B2-DDD9-0140-0512-0020"		//Ŀ���ǩEPC	
#define ARRAY_SIZE				1000000								//��������Ĵ�С

#define PI						3.1415926
#define	antenna_H_left				24.1
#define	antenna_alpha_left			67.2/180*PI
#define	antenna_H_right				25.2
#define	antenna_alpha_right			67.0/180*PI

#define	control_period			0.1									//�������ڣ���λ�� 
#define	sample_total_len		60									//cm

#define	tag_target_relative_x	10.0								//cm
#define tag_target_relative_y	0.0									//cm

#define tag_distance_threshold  30.0				//cm
#define tag_beta_threshold	45.0 / 180.0 * PI		//rad

#define	robot_translational_vel0	5.0								//cm/s
#define robot_rotational_vel0		0.0								

#define true 1
#define false 0

#endif