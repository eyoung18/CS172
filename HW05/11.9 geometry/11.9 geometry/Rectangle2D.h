#ifndef _RECTANGLE2D_H_
#define _RECTANGLE2D_H_
#include <iostream>
using namespace std;

class Rectangle2D
{
private:
	double Cx, Cy; //C indicates it is the center value for the shape, not just a random x or y value.
	double width;
	double height;
public:
	Rectangle2D();
	Rectangle2D(double xVal, double yVal, double W, double H);
	double getArea() const;
	double getPerimeter() const;
	double getCX() const;
	double getCY() const;
	double getWidth() const;
	double getHeight() const;
	bool contains(double x, double y) const;
	bool contains(const Rectangle2D &r) const;
	bool overlaps(const Rectangle2D &r) const;

};



#endif
