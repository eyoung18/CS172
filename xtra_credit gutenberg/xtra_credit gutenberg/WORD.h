#ifndef WORD_H_
#define WORD_H_

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Word
{
private:
	string Type;
	int Frequency;
public:
	Word();
	Word(const string type);
	string getType();
	int getFrequency();
	void setFrequency(int frequency);
};


#endif
