////////////
//Elizabeth Young
//CS172
//HW05
//11.5 smallest element
////////////////

#include <iostream>
using namespace std;


int* create_array()
{
	int* ArraY = new int[8];
	ArraY[0] = 1;
	ArraY[1] = 2;
	ArraY[2] = 4;
	ArraY[3] = 5;
	ArraY[4] = 10;
	ArraY[5] = 100;
	ArraY[6] = 2;
	ArraY[7] = -22;

	return ArraY;
}
int find_smallest(int* numbers)
{
	int smallestINT = numbers[0];
	for (int* curr = numbers; curr < numbers + 8; curr++)
	{
		if (*curr < smallestINT)
			smallestINT = *curr;
	}

	return smallestINT;
}

int main()
{
	int* numbers = create_array();
	cout << "the smallest integer of the array is " << find_smallest(numbers) << endl;

	return 0;
}