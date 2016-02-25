#ifndef _FAN_H_
#define _FAN_H_
#include <iostream>
using namespace std;

class Fan
{
private:
	int speed;
	double radius;
	bool ON;
public:
	Fan()
	{
		speed = 1;
		radius = 5.0;
		ON = false;
	}
	
	Fan(int s, double r, bool on)
	{
		speed = s;
		radius = r;
		ON = on;
	}

	int getspeed() { return speed; }
	double getradius() { return radius; }
	bool getON() { return ON; }
	
};

/*
class DefaultFan :public Fan {
public:
	DefaultFan() :
		Fan(1, 5.0, false) {}

};


class FanOne :public Fan {
public:
	FanOne() :
		Fan(3, 10.0, true) {}

};

class FanTwo :public Fan {
public:
	FanTwo() :
		Fan(2, 5.0, false) {}
};
*/
#endif;
