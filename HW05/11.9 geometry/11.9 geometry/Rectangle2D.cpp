#include <iostream>
#include "Rectangle2D.h"
using namespace std;

Rectangle2D::Rectangle2D()
{
	Cx = 0;
	Cy = 0;
	width = 1;
	height = 1;
}
Rectangle2D::Rectangle2D(double xVal, double yVal, double W, double H)
{
	Cx = xVal;
	Cy = yVal;
	width = W;
	height = H;
}
double Rectangle2D::getArea() const
{
	double AREA = width*height;
	return AREA;
}
double Rectangle2D::getPerimeter() const
{
	double Perimeter = 2 * width + 2 * height;
	return Perimeter;
}
double Rectangle2D::getCX() const
{
	return Cx;
}
double Rectangle2D::getCY() const
{
	return Cy;
}
double Rectangle2D::getWidth() const
{
	return width;
}
double Rectangle2D::getHeight() const
{
	return height;
}
bool Rectangle2D::contains(double x, double y) const
{
	int counter = 0;
	if (x <= (Cx + .5*width) && x >= (Cx - .5*width))
		counter++;
	if (y <= (Cy + .5*height) && y >= (Cy - .5*height))
		counter++;


	if (counter < 2)
		return false;
	else if (counter == 2)
		return true;
}
bool Rectangle2D::contains(const Rectangle2D &r) const
{
	//IR indicates the 'inter' rectangle being checked for containment.
	//This portion establishes the measurements of the 'inter' rectangle.
	double IRcx = r.getCX();
	double IRcy = r.getCY();
	double IRwidth = r.getWidth();
	double IRheight = r.getHeight();

	int counter = 0;
	if ((IRcx + .5*IRwidth) <= (Cx + .5*width) && (IRcx - .5*IRwidth) >= (Cx - .5*width))
		counter++;
	if ((IRcy + .5*IRheight) <= (Cy + .5*height) && (IRcy - .5*IRheight) >= (Cy - .5*height))
		counter++;

	if (counter < 2)
		return false;
	else if (counter == 2)
		return true;
}
bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
	//IR indicates the 'inter' rectangle being checked for overlapping.
	//This portion establishes the measurements of the 'inter' rectangle.
	double IRcx = r.getCX();
	double IRcy = r.getCY();
	double IRwidth = r.getWidth();
	double IRheight = r.getHeight();

	int counter = 0;
	if ((IRcx + .5*IRwidth) <= (Cx + .5*width) && (IRcx - .5*IRwidth) >= (Cx - .5*width))
		counter++;
	if ((IRcy + .5*IRheight) <= (Cy + .5*height) && (IRcy - .5*IRheight) >= (Cy - .5*height))
		counter++;

	if (counter < 1)
		return false;
	else if (counter >= 1)
		return true;
}