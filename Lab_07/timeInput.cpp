#include<iostream>
#include<string>
#include<sstream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

struct Time{
int hour;
int minutes;
int seconds;
} start,end;

//print
void printTime(Time time){
cout <<setfill('0')<<setw(2)<< time.hour << " : " << setw(2)<< time.minutes << " : " <<setw(2)<< time.seconds;
}

//any points in time invalid?
bool getTimeFromUser(Time time){
	if(time.hour<0 || time.hour>23 || time.minutes<0 || time.minutes>59 || time.minutes > 59 || time.seconds < 0 || time.seconds >59)
        	return 0;
	else
		return 1;
}

int main(){

string beggining;
cout << "Enter Start time for a the lecture: (24 hr format HH:MM:SS): ";
//input
getline (cin, beggining);
start.hour=atoi(beggining.substr(0,2).c_str());
start.minutes=atoi(beggining.substr(3,2).c_str());
start.seconds=atoi(beggining.substr(6,2).c_str());

//check
if(getTimeFromUser(start) == false){
	cout << "The Start time is invalid" << endl;
	return 0;
}
//input
string finished;
cout << "Enter an End time for the lecture: (HH:MM:SS) ";
getline (cin, finished);
end.hour=atoi(finished.substr(0,2).c_str());
end.minutes=atoi(finished.substr(3,2).c_str());
end.seconds=atoi(finished.substr(6,2).c_str());
//check
if(getTimeFromUser(end) == false){
	cout << "The end time is Invalid" <<endl;
	return 0;
	}

cout << "The lecture starts at ";
printTime(start);
cout << " and it ends at ";
printTime(end);

return 0;
}
