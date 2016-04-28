#ifndef _VECTOR_H_
#define _VECTOR_H_
#include <iostream>
using namespace std;

template<typename T>
class VECTOR
{
private:
	int sizeOfArray;
	T* Array[sizeOfArray];
	int numElements;
public:
	Vector();
	Vector(T* LIST, int size);
	void push_back(const T& element);
	void pop_back();
	int getSize();
	T At(int index);
	bool isEmpty();
	void clear();
	void swap(T* vEctor);
};

#endif
