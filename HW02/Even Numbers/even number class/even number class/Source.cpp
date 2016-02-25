/////
//Elizabeth Young
//CS172
//HW02
//Even Number class 9.11
/////

#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
	int num = 16;
	EvenNumber number(num);
	cout << "The even number we have selected is " << number.getValue() << "." << endl;
	cout << "The previous even number is " << number.getPrevious() << endl;
	cout << "The next even number is " << number.getNext() << endl;

	return 0;
}