//////////////
//Elizabeth Young
//CS172
//Exam_1 Venue&Event
//I affirm that all code given below was written solely by me, Elizabeth Young, and that any help
//I received adhered to the rules stated for this exam.
///////////////////

#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"
using namespace std;

int main()
{
	Venue rightHere;
	rightHere.addEvent(12, "go get lunch");
	rightHere.addEvent(7, "finish your exam");
	rightHere.addEvent(7, "go have fun");
	

	cout << rightHere.findEvent(12).getTitle() << endl;
	cout << rightHere.findEvent("finish your exam").getTime() << endl;
	cout << rightHere.findEvent("go have fun").getTime() << endl;


	return 0;
}