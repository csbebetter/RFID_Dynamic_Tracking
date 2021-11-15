#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

int main(int argc, char **argv)
{
	ros::init(argc, argv, "robot_stop");
	ros::NodeHandle n;
	ros::Publisher motion_stop_pub = n.advertise<geometry_msgs::Twist>("/cmd_vel", 30);
	ros::Rate loop_rate(10);

	while (ros::ok())
	{
		geometry_msgs::Twist vel_msg;
		vel_msg.linear.x = 0;
		vel_msg.angular.z = 0;
		motion_stop_pub.publish(vel_msg);
	    loop_rate.sleep();
	}

	return 0;
}