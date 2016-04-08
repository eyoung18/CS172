#ifndef COURSE_H_
#define COURSE_H_

#include <iostream>
#include <string>
using namespace std;


class Course
{
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;

public:
	Course(const string& courseName, int capacity);
	Course(const Course& course);
	~Course();
	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	void clear();
	string* getStudents() const;
	int getNumberOfStudents() const;
	string* doubleCapacity(const string* students, int size);
};

#endif