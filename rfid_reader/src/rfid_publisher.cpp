#include <ros/ros.h>
#include "RFIDHandler.h"



int main(int argc, char **argv)
{

    ros::init(argc, argv, "rfid_publisher");

    ros::NodeHandle n;

    char *                      pReaderHostName;    
    int                             rc; 
    pReaderHostName = "115.156.142.223";  
    CMyApplication              myApp;
    
    myApp.m_Verbose = 1;    
    myApp.m_channelIndex = 1;   
    rc = myApp.run(pReaderHostName); 

    return 0;
}
