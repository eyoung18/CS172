///////////
//Elizabeth Young
//CS172
//HW05
//11.1 analyze input
///////////////

#include <iostream>
using namespace std;

void prompt_count(int* size)
{
	cout << "how many numbers will you enter? ";
	cin >> *size;
}

int* the_array(int size)
{
	int* pArray = new int[size];

	for (int i = 0; i < size; i++)
		pArray[i] = NULL;

	return pArray;
}

void populate_numbers(int* numbers, int size)
{
	for (int* current = numbers; current < numbers + size; current++)
	{
		cout << "Enter number: ";
		cin >> *current;
	}
}

double calculate_average(int* numbers, int size)
{
	int total = 0;
	for (int* current = numbers; current < numbers + size; current++)
	{
		total = total + *current;
	}
	double average = total / size;
	return average;
}

int calculate_above_avg(int* numbers, int size)
{
	int count = 0;
	for (int* current = numbers; current < numbers + size; current++)
	{
		if (*current > calculate_average(numbers, size))
			count++;
	}
	return count;
}


int main()
{
	int nums;

	prompt_count(&nums);

	int* numbers = the_array(nums);
	populate_numbers(numbers, nums);
	cout << "the average of this set is " << calculate_average(numbers, nums) << endl;
	cout << "there were " << calculate_above_avg(numbers, nums) << " values above average.\n";

	delete[]numbers;

}