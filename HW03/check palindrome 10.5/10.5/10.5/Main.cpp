/////////
//Elizabeth Young
//CS172
//HW03
//check palindrome 10.5
///////////////

#include <iostream>
#include <string>
#include <stack>
#include "Palindrome.h"
using namespace std;


bool isPalindrome(const string& s);
int main()
{
	
	cout << "Please enter a string to check: ";
	string s;
	cin >> s;
	
	if (isPalindrome(s))
		cout << s << " is a palindrome." << endl;
	else if (!isPalindrome(s))
		cout << s << " is not a palindrome." << endl;

	return 0;
}

bool isPalindrome(const string& s)
{
	stack<char> myStack;

	string p = "";
	int length = s.size();
	for (int i = 0; i < length; i++)
	{
		myStack.push(tolower(s[i]));
	}
	int i = 0;
	while (!myStack.empty())
	{
		p = p + myStack.top();
		myStack.pop();
	}
	string q = "";
	for (int i = 0; i < length; i++)
	{
		q += tolower(s[i]);
	}
	if (q == p)
		return true;
	else
		return false;
}