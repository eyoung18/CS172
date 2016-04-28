///////////
//Elizabeth Young
//CS172
//HW06
//12.2 Linear Search
///////////////

#include <iostream>
#include <string>
using namespace std;


template <typename T>
int linearSearch(const T Array[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
		if (key == Array[i])
			return i;
	return -1;
}

int main()
{
	int list1[] = { 1, 4, 4, 2, 5, .3, 6, 2 };
	int i = linearSearch(list1, 4, 8);
	cout << i << endl << endl;
	double list2[] = { 2.5, 1.46, 11.3, 6.8, 5.5, 4.9, 7.1, 9.9 };
	int j = linearSearch(list2, 6.8, 8);
	cout << j << endl << endl;
	string list3[] = { "holly", "andrew", "charles", "elizabeth", "suzanne", "john", "luke", "lee" };
	string ThisIsSilly = "john";															// Joseph: Linear Searches are always silly. Binary searches are way faster.
	int k = linearSearch(list3, ThisIsSilly, 8);
	cout << k << endl << endl;
}