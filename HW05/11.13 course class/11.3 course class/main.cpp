//////////
//Elizabeth Young
//CS172
//HW05
//11.3 Course Class
/////////////

#include <iostream>
#include "Course.h"
using namespace std;


int main()
{
	Course course1("Linear Algebra", 25);

	course1.addStudent("elizabeth");
	course1.addStudent("luke");
	course1.addStudent("sarah");

	course1.dropStudent("luke");

	cout << "The students in this course are:" << endl;
	cout << course1.getStudents()[0] << " and " << course1.getStudents()[1] << endl;

	return 0;
}