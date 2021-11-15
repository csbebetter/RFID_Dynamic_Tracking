#include "motion_pub.hpp"


int main(int argc, char **argv)
{
	ros::init(argc, argv, "motion_pub");
	SubscribeAndPublish SAPObject;
    ros::spin();
	return 0;
}
