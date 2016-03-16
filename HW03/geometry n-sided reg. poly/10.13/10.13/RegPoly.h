#ifndef REGPOLY_H_
#define REGPOLY_H_
#include <iostream>
using namespace std;

class RegularPolygon {
private:
	int n;
	double side;
	double x;
	double y;
public:
	RegularPolygon();
	RegularPolygon(const int, const double);
	RegularPolygon(const int, const double, const double, const double);
	double getPerimeter() const;
	double getArea() const;
};


#endif