#include <stdio.h>
#include <ros/ros.h>
#include "RFIDHandler.h"
#include "rfid_reader/DataDev.h"
#include <geometry_msgs/Twist.h>

class SubscribeAndPublish
{	
public:
	SubscribeAndPublish()
	{

	person_info_sub = n.subscribe("/DataDev_info", 30,&SubscribeAndPublish::DataInfoCallback, this);
	
	ros::Publisher motion_publish = n.advertise<geometry_msgs::Twist>("/cmd_vel", 30);

	}

	void DataInfoCallback(const rfid_reader::DataDev::ConstPtr& msg)
	{
		ROS_INFO("recieve:[%ld , %ld ]", msg->a_data, msg->v_data );
		pid_pidzero();

		geometry_msgs::Twist vel_msg;
		vel_msg.linear.x = pid_deal_v(msg->v_data , msg->time_data);
		vel_msg.angular.z = pid_deal_w(msg->a_data , msg->time_data);

	/*
		//Tempolimits einhalten
		if(vel_msg.linear.x >= 2.0){
			vel_msg.linear.x = 2.0;
		}

		if(vel_msg.angular.z >= 20.0){
			vel_msg.angular.z = 20.0;
		}

			if(vel_msg.linear.x <= -2.0){
			vel_msg.linear.x = -2.0;
		}

		if(vel_msg.angular.z <= -20.0){
			vel_msg.angular.z = -20.0;
		}*/
		ROS_INFO("[%0.2f m/s, %0.2f rad/s]", vel_msg.linear.x, vel_msg.angular.z);
		motion_publish.publish(vel_msg);
	}

private:
	ros::NodeHandle n;
	ros::Publisher motion_publish;
	ros::Subscriber person_info_sub;
};
