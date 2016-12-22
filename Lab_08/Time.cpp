#include"Time.h"

Time::Time(){
	hour=0;
	minutes=0;
	seconds=0;

}

Time::Time(int hr, int min, int sec){

	hour = hr;
	minutes=min;
	seconds=sec;

}

Time::~Time(){ };

void Time::set_Hour(int h){
	hour = h;
}

void Time::set_Minutes(int min){
	minutes = min;
}

void Time::set_Seconds(int sec){
	seconds=sec;
}

int Time::get_Hour(){
	return hour;
}
int Time::get_Minutes(){
	return minutes;
}

int Time::get_Seconds(){
	return seconds;
}
