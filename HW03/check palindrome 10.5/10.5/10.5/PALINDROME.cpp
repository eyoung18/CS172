

#include <iostream>
#include <string>
#include "Palindrome.h"
using namespace std;

stackOfCharacters::stackOfCharacters()
{
	size = 0;
}
bool stackOfCharacters::isPalindrome(const string &s)
{
	
}
void stackOfCharacters::push(char letter)
{
	elements[size++] = letter;
}
bool stackOfCharacters::isEmpty()const
{
	if (size == 0)
		return true;
	else
		return false;
}