///////////
//Elizabeth Young
//CS172
//EXAM_2
//Not sure if we were to include this portion, but I, Elizabeth, swear that I didn't recieve any help apart from my own previous
//work and those resources allowed as per the rules.
//////////////////////


#include<iostream>
using namespace std;

int** fillArray(unsigned int, unsigned int);
void deleteArray(int**, int);

int main()
{
	int nR, nC; //Number of rows and columns
	cout << "How many rows? ";
	cin >> nR;
	cout << "How many cols? ";
	cin >> nC;

	//Create the array!
	int** myArray = fillArray(nR, nC);

	//Print the array to the screen!
	for (int i = 0; i < nR; i++) {
		for (int j = 0; j < nC; j++)
			cout << myArray[i][j] << " ";
		cout << endl;
	}

	//DESTROY!!!!
	deleteArray(myArray, nR);

	//The end! Ta da!
	return 0;
}


//This function takes a number of rows as a first parameter and
//a number of columns as its second parameter. It then returns
//a pointer to a pointer to an int that holds a two-dimensional
//array of integers.
int** fillArray(unsigned int  numRows, unsigned int  numCols)
{
	// This will hold the array! Don't change this line.

					 //Dynamically allocate an array of pointers to ints. Hint: You can dynamically
					 //allocate the array by saying you want a new int*[<size>], where
					 //<size> is the number of rows in this case.
					 //<=== PUT YOUR CODE HERE!
	int** My2DArray = new int*[numRows];

					 //Allocates an array of integers to each row. (This creates the columns!)
					 //You fill in the blanks.
	for (int i = 0; i < numRows; i++)
	{
		//Under this comment put a line of code to 1) allocate the array of ints
		//and 2) assign it to the current row of your array.
		//<=== PUT YOUR CODE HERE!
		My2DArray[i] = new int[numCols];

		//The code below reads a number into each location in the 2D array.
		for (int j = 0; j < numCols; j++)
		{
			cout << "Number at position " << i << "," << j << "? ";
			cin >> My2DArray[i][j];
		}
	}
	return My2DArray;
}


//This function takes a dynamically allocated 2D array and sends
//it to the bit bucket in the sky, er, I mean deletes it.
//The first parameter will be the two dimensional array, viewed
//as a pointer to a pointer to an int. The second parameter is
//the number of rows in that array.
void deleteArray(int** A, int size)
{
	//This function is all you! Hint: first delete every row,
	//then you can delete the whole.
	//YOUR CODE GOES HERE
	for (int i = 0; i < size; i++)
	{
		delete[]A[i];
	}

}