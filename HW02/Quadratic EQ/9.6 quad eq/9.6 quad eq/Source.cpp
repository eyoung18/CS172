/////
//Elizabeth Young
//CS172
//HW02
//9.6 Quadratic EQ
/////

#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	cout << "Please enter a value for a, b, then c: ";
	double a, b, c;
	cin >> a >> b >> c;
	QuadraticEquation EQ(a, b, c);
	if (EQ.getDiscriminant() > 0)
	{
		cout << "The solutions are " << EQ.getRoot1() << " and " << EQ.getRoot2() << endl;
	}
	else if (EQ.getDiscriminant() == 0)
	{
		cout << "The solution is " << EQ.getRoot1() << endl;
	}
	else if (EQ.getDiscriminant() < 0)
	{
		cout << "There are no real roots here." << endl;
	}

	return 0;
}