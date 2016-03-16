#define _USE_MATH_DEFINES

#include <iostream>
#include "RegPoly.h"
#include <cmath>
using namespace std;

RegularPolygon::RegularPolygon()
{
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}
RegularPolygon::RegularPolygon(const int num, const double length)
{
	n = num;
	side = length;
	x = 0;
	y = 0;
}
RegularPolygon::RegularPolygon(const int num, const double length, const double xVal, const double yVal) 
{
	n = num;
	side = length;
	x = xVal;
	y = yVal;
}
double RegularPolygon::getPerimeter() const
{
	double perimeter = side*n;
	return perimeter;
}
double RegularPolygon::getArea() const
{
	double area = (n*pow(side, 2)) / (4 * tan(M_PI / n));
	return area;
}