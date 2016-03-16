//////////
//Elizabeth Young
//CS172
//HW03
//geometry: n-sided regular polygon
//////////////

#include <iostream>
#include <string>
#include <cmath>
#define _USE_MATH_DEFINES
#include "RegPoly.h"
using namespace std;

int main()
{
	RegularPolygon poly1;
	RegularPolygon poly2(6, 4);
	RegularPolygon poly3(10, 4, 5.6, 7.8);

	//for poly1
	cout << "The first polygon has a perimeter of " << poly1.getPerimeter() << " and an area of " << poly1.getArea() << endl;
	//for poly2
	cout << "The second polygon has a perimeter of " << poly2.getPerimeter() << " and an area of " << poly2.getArea() << endl;
	//for poly3
	cout << "The third polygon has a perimeter of " << poly3.getPerimeter() << " and an area of " << poly3.getArea() << endl;
}