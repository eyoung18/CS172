#include <iostream>
#include <string>
#include "Venue.h"
using namespace std;

int Venue::numEvents = 0;
bool Venue::validTime(int time)
{
	int determinant = 0; //used to record the finding of a match in time slots
	for (int i = 0; i < numEvents+1; i++)
	{
		if (time == scheduledEvents[i].getTime())
			determinant = determinant + 1;
	}
	if (determinant == 0)
		return true;
	else
		return false;
}
void Venue::addEvent(int time, string name)
{
	if (Venue::validTime(time) == true)
	{

		scheduledEvents[numEvents] = Event(time, name);
		numEvents++;//number of events increases everytime an event is added
		cout << "Event scheduled!" << endl;
	}

	else
		cout << "Sorry, this time slot has already been filled." << endl;
}
Event Venue::findEvent(int time)
{
	int determinant = 0; //To cancel loop when a match for time has been found
	int i = 0;
	while (determinant==0 || i<numEvents)
	{
		if (time == scheduledEvents[i].getTime())
		{
			determinant = 1;
			break;
		}
		i++;
	}
	if (determinant == 1)
		return scheduledEvents[i];//returns the event that has matched the time slot
	else if (determinant==0)
		return Event();//this is where the problem is located for the end of the program***

}
Event Venue::findEvent(string name)
{

	int determinant = 0; //to cancel loop when a match for title has been found 
	int i = 0;
	while (determinant == 0 || i<numEvents)
	{
		if (name == scheduledEvents[i].getTitle())
		{
			determinant = 1;
			break;
		}
		i++;
	}
	if (determinant == 1)
		return scheduledEvents[i]; //returns the event that has matched the title
	else if (determinant==0)
		return Event();//this is where the problem is located for the end of the program***
}

//***I am not sure how to fix this problem.  It seems to be not returning the appropriate default Event, perhaps my syntax for calling it was off.