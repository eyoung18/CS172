////////////
//Elizabeth Young
//CS172
//HW05
//11.3 increase array size
////////////////

#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size)
{
	int* doubledArray = new int[2 * size];

	for (int i = 0; i < 2 * size; i++)
		doubledArray[i] = NULL;

	for (int i = 0; i < size; i++)
		doubledArray[i] = list[i];
	return doubledArray;
}


int main()
{
	const int nums = 5; //the size of the array list
	int list[nums];
	int* newList = doubleCapacity(list, nums);

	delete[]newList;
}