#ifndef _EVENT_H_
#define _EVENT_H_
#include <iostream>
#include <string>
using namespace std;

class Event
{
private:
	int Time;
	string Title;
public:
	Event();
	Event(int, string);
	int getTime();
	string getTitle();
	void setTime(int);
	void setTitle(string);
};


#endif
