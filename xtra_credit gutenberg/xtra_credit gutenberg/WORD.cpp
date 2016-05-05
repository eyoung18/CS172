
#include "WORD.h"
using namespace std;

Word::Word()
{
	Type = "";
	Frequency = 0;
}
Word::Word(const string type)
{
	Type = type;
	Frequency = 1;
}

string Word::getType()
{
	return Type;
}

int Word::getFrequency()
{
	return Frequency;
}
void Word::setFrequency(int frequency)
{
	Frequency = frequency;
}
