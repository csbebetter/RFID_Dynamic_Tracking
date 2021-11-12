#include "utils.h"
#include "ros/ros.h"

using namespace  std::chrono;

typedef std::chrono::microseconds time_type;

unsigned long long getTimeStamp() {
	time_point<system_clock, time_type> now = time_point_cast<time_type>(system_clock::now());
	return now.time_since_epoch().count();
}

unsigned long long	getSteadyClock() {
	time_point<system_clock, time_type> now = time_point_cast<time_type>(system_clock::now());
	return now.time_since_epoch().count();
}

unsigned long long getPreciseTimeStamp(){
	
	struct timeval timenow;
	gettimeofday(&timenow,NULL);
	return timenow.tv_usec;//us
}

void PrintTimeStampToTime(unsigned long long time){
    time_t timep;
    int micro= (int)(time%1000000);
    timep=(time_t)(time/1000000);
    struct tm *p;
    p = localtime(&timep);//ÓÃlocaltime½«ÃëÊý×ª»¯Îªstruct tm½á¹¹Ìå
    printf("%d/%d/%d %02d:%02d:%02d .%d\n",
           1900 + p->tm_year,
           1+ p->tm_mon,
           p->tm_mday,
           p->tm_hour,
           p->tm_min,
           p->tm_sec,
           micro);
}

