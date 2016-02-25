/////
//Elizabeth Young
//CS172
//HW02
//The Fan Class
/////

#include <iostream>
#include "Fan.h"
using namespace std;

int main()
{
	Fan fan1(3, 10.0, true), fan2(2, 5.0, false);
	cout << "For fan 1, the speed is " << fan1.getspeed() << "," << endl;
	cout << "the radius is " << fan1.getradius() << ", and it's 'on' status is " << fan1.getON() << endl << endl;
	cout << "For fan 2, the speed is " << fan2.getspeed() << "," << endl;
	cout << "the radius is " << fan2.getradius() << ", and it's 'on' status is " << fan2.getON() << endl << endl;
	
	return 0;

}