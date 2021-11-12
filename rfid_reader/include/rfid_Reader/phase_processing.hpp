#include <stdio.h>


double unwrappingPhase(double phasenow, double phaselast)
{   
    //Calculate the phase difference before and after
    double diff;
    if(phaselast>=0)
	{diff = phasenow - (phaselast-int(phaselast))-int(phaselast)%360;}
    if(phaselast<0)
    {diff = phasenow - (phaselast-int(phaselast))-(360+int(phaselast)%360);}
    //Other constants and variable definitions
	double pi = 180.0;
	double deviation = 90.0;
	double phasetemple = phaselast+diff;

	if(diff >= pi-deviation && diff <= pi+deviation){
		return (phasetemple-pi);
	}
	if(diff >= -pi-deviation && diff <= -pi+deviation){
		return (phasetemple+pi);
	}
    
	if(diff >= 2*pi-deviation && diff <= 2*pi+deviation){
		return (phasetemple-2*pi);
	}
	if(diff >= -2*pi-deviation && diff <= -2*pi+deviation){
		return (phasetemple+2*pi);
	}
    
	return phasetemple;
}

////////////////////////PID/////////////////

typedef struct pid_contral_str {
	float P_v, I_v, D_v;   //平动速度调整的比例、积分和微分参数
	float P_w, I_w, D_w;   //旋转速度调整的比例、积分和微分参数
}pid_contral_str;
typedef struct pid_data_str {
	float m;               //一个积分步骤中使用的相位测量数,本代码中暂时使用全部相位测量数来计算（m=t-1）
	float v_data;
	float v_data_later = 0;
	float a_data;
	float a_data_later = 0;
	float v;			   //当前平动速度
	float v_last=0;          //上一个平动速度
	float w;               //当前旋转速度
	float w_last=0;          //上一个旋转速度
	float G1_total;
	float G2_total;
	float time_now;         //当前进行到的时间
	float time_later = -1 ;		
}pid_data_str;

pid_contral_str pid_contral;
pid_data_str pid_data;

float pid_deal_v(float v_data , unsigned long long timestamp)
{
	//Define variables and assign values
	float arry[3];
	pid_data.v_data = v_data;
	pid_data.time_now = timestamp;
	//PID algorithm
	arry[0] = pid_data.v_data;
	pid_data.G1_total += arry[0] * (pid_data.time_now - pid_data.time_later) / 1000000;
	arry[1] = pid_data.G1_total;
	arry[2] = 1000000 * (pid_data.v_data - (pid_data.v_data_later)) / (pid_data.time_now - pid_data.time_later);
	pid_data.v = pid_contral.P_v * arry[0] + pid_contral.I_v * arry[1] + pid_contral.D_v * arry[2];
	//Ready for next time
	pid_data.v_data_later = v_data;	
	pid_data.v_last = pid_data.v;
	//pid_data.time_later = pid_data.time_now;
	
	return pid_data.v;
}

float pid_deal_w(float a_data , unsigned long long timestamp)
{

	float arry[3];
	pid_data.a_data = a_data;
	pid_data.time_now = timestamp;

	arry[0] = pid_data.a_data;
	pid_data.G2_total += arry[0] * (pid_data.time_now - pid_data.time_later) / 1000000;
	arry[1] = pid_data.G2_total;
	arry[2] = 1000000 * (pid_data.a_data - (pid_data.a_data_later)) / (pid_data.time_now - pid_data.time_later);
	pid_data.w= pid_contral.P_w * arry[0] + pid_contral.I_w * arry[1] + pid_contral.D_w * arry[2];

	pid_data.a_data_later = a_data;
	pid_data.w_last = pid_data.w;
	pid_data.time_later = pid_data.time_now;
	return pid_data.w;
}

void pid_pidzero()
{
	pid_contral.P_v = 0.08; pid_contral.I_v = 0.001; pid_contral.D_v = 0.0003;
	pid_contral.P_w = 0.6; pid_contral.I_w = 0.008; pid_contral.D_w = 0.006;
}
