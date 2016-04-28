////////
//Elizabeth Young
//CS172
//HW06
//12.20 Shuffle Vector
/////////////

#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void shuffle(vector<T>& v)
{
	vector<T> tempV = v;
	v.at(0) = tempV.at(3);
	v.at(1) = tempV.at(6);
	v.at(2) = tempV.at(9);
	v.at(3) = tempV.at(7);
	v.at(4) = tempV.at(5);
	v.at(5) = tempV.at(1);
	v.at(6) = tempV.at(2);
	v.at(7) = tempV.at(4);
	v.at(8) = tempV.at(8);
	v.at(9) = tempV.at(0);
}

int main()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		cout << "enter an integer for index location " << i << ": ";
		int tempINT;
		cin >> tempINT;
		v1.push_back(tempINT);
		cout << endl;
	}
	cout << v1.at(0) << v1.at(1) << v1.at(2) << endl;
	shuffle(v1);
	cout << v1.at(0) << v1.at(1) << v1.at(2) << endl;
}