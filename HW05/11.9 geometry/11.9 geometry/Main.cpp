//////////
//Elizabeth Young
//CS172
//HW05
//11.9 Geometry: Rec2D class
//////////////

#include <iostream>
#include "Rectangle2D.h"
using namespace std;


int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	//r1's area and perimeter
	cout << "First rectangle has an area of " << r1.getArea() << "and a perimeter of " << r1.getPerimeter() << endl;
	
	cout << r1.contains(3, 3) << endl;
	cout << r1.contains(r2) << endl;
	cout << r1.overlaps(r3) << endl;

	return 0;
}