#include <iostream>
#include <string>
#include "Event.h"
using namespace std;

Event::Event() //default event (aka unscheduled event time or title)
{
	Title = "free";
	Time = -1;	
}
Event::Event(int time, string name)
{
	Time = time;
	Title = name;
}
int Event::getTime()
{
	return Time;
}
string Event::getTitle()
{
	return Title;
}
void Event::setTime(int t)
{
	Time = t;
}
void Event::setTitle(string name)
{
	Title = name;
}