//////////
//Elizabeth Young
//CS172
//HW06
//12.4 Is Sorted
///////////////

#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	int count = 0;
	for (int i = 0; i < (size - 1); i++)
		if (list[i] < list[i + 1])
			count++;
	if (count == size - 1)
		return true;
	else
		return false;
}

int main()
{
	int array_1[4] = { 1, 2, 5, 4 };
	cout << isSorted(array_1, 4) << endl;

	double array_2[4] = { 0.1, 2.4, 7.7, 8.9 };
	cout << isSorted(array_2, 4) << endl;

	string array_3[4] = { "tree", "flower", "grass", "mountain" };
	cout << isSorted(array_3, 4) << endl;
}