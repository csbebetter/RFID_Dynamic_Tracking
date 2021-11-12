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


    
/*
    char *myepc = "E200-001A-0411-0257-1070-E424";
    FILE *file_left, *file_right;
    
    std::string left_prefix = "/home/tom/l_data";
    file_left = fopen(left_prefix.c_str(), "w");
    //file_right = fopen(pathright.str().c_str(), "w");
    char *pattern = "%u\t%-30s\t%u\t%.3f\t%.2f\t%.2f\n"; // id epc channel frequecy phase rssi

    if (file_left != NULL) {
        int cnt = 0;
        for (auto it = myApp.leftDataVec.begin(); it != myApp.leftDataVec.end(); it++)
        {
            if (strcmp((*it).epc, myepc) == 0)
            {
                fprintf(file_left, pattern, ++cnt, (*it).epc, (*it).channelIndex, ((*it).channelIndex - 1)*0.25 + 920.625, (*it).phase, (*it).rssi);
            }
        }
    }
    else {
        exit(1);
    }    

    //Write data to file when ant == 2
    std::string right_prefix = "/home/tom/r_data";
    file_right = fopen(right_prefix.c_str(), "w");
    //file_right = fopen(pathright.str().c_str(), "w");
    //char *pattern = "%u\t%-30s\t%u\t%.3f\t%.2f\t%.2f\n"; // id epc channel frequecy phase rssi

    if (file_right != NULL) {
        int cnt = 0;
        for (auto it = myApp.rightDataVec.begin(); it != myApp.rightDataVec.end(); it++)
        {
            if (strcmp((*it).epc, myepc) == 0)
            {
                fprintf(file_right, pattern, ++cnt, (*it).epc, (*it).channelIndex, ((*it).channelIndex - 1)*0.25 + 920.625, (*it).phase, (*it).rssi);
            }
            
        }
    }
    else {
        exit(1);
    } 
*/

    return 0;
}
