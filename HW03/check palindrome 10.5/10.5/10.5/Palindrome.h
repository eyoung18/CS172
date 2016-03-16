#ifndef PALINDROME_H_
#define PALINDROME_H_

#include <iostream>
#include <string>
using namespace std;

class stackOfCharacters
{
private:
	char elements[20];
	int size;
public:
	stackOfCharacters();
	bool isPalindrome(const string& s);
	void push(char letter);
	bool isEmpty() const;
};

#endif
