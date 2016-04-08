#include <iostream>
#include"Course.h"
using namespace std;
#include <string>

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}
Course::~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	if (numberOfStudents < capacity)
	{
		students[numberOfStudents] = name;
		numberOfStudents++;
	}
	else if (numberOfStudents == capacity)
	{
		string* students = doubleCapacity(students, capacity);
		students[numberOfStudents] = name;
		numberOfStudents++;
	}
}

string* Course::doubleCapacity(const string* students, int size)
{
	string* doubledArray = new string[2 * size];
	for (int i = 0; i < 2 * size; i++)
		doubledArray[i] = "";
	for (int i = 0; i < size; i++)
		doubledArray[i] = students[i];
	return doubledArray;
}
void Course::dropStudent(const string& name)
{
	int noMatch = 0; //counter type integer to indicate there was no match made
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (students[i] == name)
		{
			students[i] = "";
			for (int j = i; j < numberOfStudents; j++)
				students[j] = students[j + 1];
			numberOfStudents--;
			noMatch = 0;
		}
		else
			noMatch++;
	}
	if (noMatch != 0)
		cout << "Sorry, no student matches that name in the course!" << endl;
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

void Course::clear()
{
	for (int i = 0; i < numberOfStudents; i++)
	{
		students[i] = "";
	}
}

Course::Course(const Course& course)
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity];
}