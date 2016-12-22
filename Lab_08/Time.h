//#pragma once //work same as  other parts but does not comile with all
#ifndef Time_H
#define Time_H
class Time
{
private:
	int hour;
	int minutes;
	int seconds;
public:

	Time();
	Time (int,int,int);
	~Time();

	void set_Hour(int);
	void set_Minutes(int);
	void set_Seconds(int);

	int get_Hour();
	int get_Minutes();
	int get_Seconds();
};

#endif
