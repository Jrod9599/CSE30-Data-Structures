#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
using namespace std;

//Time Structure
struct Time{
int hour;
int minutes;
int seconds;
}start, end;

//Time Course
struct Course{
string name;
int credits;
bool majorRequirement;
double avgGrade;
string days;
}class1,class2,class3;

//print out statement while filling out the gaps
void printTime(Time time){
	if(time.hour > 12)
		time.hour=time.hour-12;
	cout << setfill('0') << setw(2)<< time.hour << " : " << setw(2) << time.minutes << " : " << setw(2) << time.seconds;
	if(time.hour > 11)
		cout << " p.m.";
	else
		cout << " a.m.";
}

//change based on if coures is required or not
void courseRequirement(int needed){
	if(needed == 0)
		cout << " this course is not a major requirment!"<< endl; 
	else
		cout << " this course is a major requirment!"<<endl;
}

int main(){

ifstream  file;
file.open("in2.txt"); //remember to change that to  just in.txt

string courses;
getline(file,courses);
int courseNum= atoi(courses.c_str());

cout << "-----------------------" << endl;
cout << "SCHEDULE OF STUDENT" << endl;
cout << "-----------------------"<<endl;

int j=0;
int i= (courseNum-1);
while(!file.eof()){
	//grab name from  file
	getline(file,class1.name);
	//grab credit # from file
	string scredits;
	getline(file, scredits);
	class1.credits = atoi(scredits.c_str());
	//grab string convert to int to use for bool
	string major;
	getline(file, major);
	class1.majorRequirement = atoi(major.c_str());
	//turn string to int for avgGrade
	string grade;
	getline(file, grade);
	class1.avgGrade = atoi(grade.c_str());
	//just pull line out
	getline(file,class1.days);
	//get start time
	string beggining;
	getline (file, beggining);
	start.hour=atoi(beggining.substr(0,2).c_str());
	start.minutes=atoi(beggining.substr(3,2).c_str());
	start.seconds=atoi(beggining.substr(6,2).c_str());
	//get end time
	string finished;
	getline(file,finished);
	end.hour=atoi(finished.substr(0,2).c_str());
	end.minutes=atoi(finished.substr(3,2).c_str());
	end.seconds=atoi(finished.substr(6,2).c_str());

	//print out file info
	cout << "Course " << (courseNum-i) << ": " << class1.name << endl;
	i--;
	cout << "Note: ";
	courseRequirement(class1.majorRequirement);
	cout << "Number of credits: " << class1.credits << endl;
	cout << "Days of lecture " << class1.days << endl;
	cout << "Lecture time: ";
	printTime(start);
	cout << " - ";
	printTime(end);
	cout << endl;
	cout << "Stat: on average students get " << class1.avgGrade << "% in this course";
	cout << endl;
	cout << endl;
	//prevent out of  range error
	j++;
	if(j == courseNum)
		return true;
}
file.close();

return 0;
}
