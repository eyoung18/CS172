#ifndef _VENUE_H_
#define _VENUE_H_
#include <iostream>
#include <string>
using namespace std;
#include "Event.h"

class Venue
{
private:
	Event scheduledEvents[12];
	static int numEvents;
public:
	bool validTime(int);
	void addEvent(int, string);
	Event findEvent(int);
	Event findEvent(string);
	static int getNumEvents() { return numEvents; }

};

#endif