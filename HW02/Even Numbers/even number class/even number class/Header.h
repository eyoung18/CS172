#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
using namespace std;

class EvenNumber
{
private:
	int even;
public:
	EvenNumber()
	{
		even = 0;
	}
	EvenNumber(int value)
	{
		even = value;
	}
	int getValue() { return even; }
	int getNext() { return even + 2; }
	int getPrevious() { return even - 2; }
};

#endif
