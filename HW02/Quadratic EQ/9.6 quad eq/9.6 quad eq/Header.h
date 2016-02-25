#ifndef QuadEQ_H_
#include <iostream>
#include <cmath>

using namespace std;


class QuadraticEquation
{
private:
	double a, b, c;
public:
	QuadraticEquation(double A, double B, double C)
	{
		a = A;
		b = B;
		c = C;
	}

	double geta() { return a; }
	double getb() { return b; }
	double getc() { return c; }
	double getDiscriminant() 
	{ 
		double discriminant = pow(b, 2) - (4 * a*c); 
		return discriminant;
	}
	double getRoot1() 
	{
		if (getDiscriminant() < 0)
		{
			return 0;
		}
		else if (getDiscriminant() >= 0)
		{
			double r1 = (-b + sqrt(getDiscriminant())) / (2 * a);
			return r1;
		}
	}
	double getRoot2()
	{
		if (getDiscriminant() < 0)
		{
			return 0;
		}
		else if (getDiscriminant() >= 0)
		{
			double r2 = (-b - sqrt(getDiscriminant())) / (2 * a);
			return r2;
		}
	}

};
#endif
