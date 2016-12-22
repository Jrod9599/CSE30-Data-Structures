#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
#include<sstream>
#include "Time.h"
#include "Time.cpp"

using namespace std;

bool checkTime(Time time){
	if(time.get_Hour() <0 || time.get_Hour() > 23 || time.get_Minutes() < 0 || time.get_Minutes() > 59 || time.get_Seconds() < 0 || time.get_Seconds() > 59)
		return 0;
	else
		return 1;
}

void printTime(Time time){
	cout <<setfill('0') << setw(2) << time.get_Hour() << " : " << setw(2) << time.get_Minutes() << " : "  << time.get_Seconds();
}

int main(){

	string beginning;
	string finished;

	cout<< "Enter the start time for the lecture (HH:MM:SS) : " <<endl;
	getline(cin,beginning);

	int b_hour = atoi(beginning.substr(0,2).c_str());
	int b_minutes = atoi(beginning.substr(3,2).c_str());
	int b_seconds = atoi(beginning.substr(6,2).c_str());

	Time startTime(b_hour, b_minutes, b_seconds);

	if(checkTime(startTime) == false){
		cout << "The start time is invalid" << endl;
		return 0;
	}

	cout << "Enter the end time for the  lecuture (HH:MM:SS) : " <<endl;
	getline(cin,finished);

	int f_hour = atoi(finished.substr(0,2).c_str());
	int f_minutes = atoi(finished.substr(3,2).c_str());
	int f_seconds = atoi(finished.substr(6,2).c_str());

	Time endTime(f_hour, f_minutes, f_seconds);

	if(checkTime(endTime) == false){
		cout << "The end Time is invalid"  << endl;
		return 0;
	}

	cout << "The lecture starts at ";
	printTime(startTime);
	cout << " and it ends at ";
	printTime(endTime);

	return 0;
}
