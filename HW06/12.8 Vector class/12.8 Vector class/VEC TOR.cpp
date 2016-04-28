
#include <iostream>
#include "VECTOR.h"
using namespace std;

template<typename T> int VECTOR<T>::numElements = 0;
template<typename T> VECTOR<T>::Vector()
{
	sizeOfArray = 10;
	Array[sizeOfArray];
}

template<typename T> VECTOR<T>::Vector(T* LIST, int size)
{
	sizeOfArray = size;
	numElements = size;
	for (int i = 0; i < sizeOfArray; i++)
		Array[i] = LIST[i];
}

template<typename T> void VECTOR<T>::push_back(const T& element)
{
	if (numElements < sizeOfArray)
		Array[numElements] = element;
	else
	{
		T* NewArray = new T[2 * sizeOfArray];
		for (int i = 0; i < sizeOfArray << i++)
			NewArray[i] = Array[i];
		Array = NewArray;
		Array[numElements] = element;
	}
	numElements++;
}

template<typename T> void VECTOR<T>::pop_back()
{
	Array[numElements - 1] = NULL;
	numElements--;
}

template<typename T> int VECTOR<T>::getSize()
{
	return numElements;
}
template<typename T> T VECTOR<T>::At(int index)
{
	return Array[index];
}
template<typename T> bool VECTOR<T>::isEmpty()
{
	if (numElements = 0)
		return true;
	else
		return false;
}
template<typename T> void VECTOR<T>::clear()
{
	for (i = 0; i < sizeOfArray; i++)
		Array[i] = NULL;

	// Joseph: You may want to reset the size of the vector and the capacity since the vector is now empty
}
template<typename T> void VECTOR<T>::swap(T* vEctor)
{
	for (int i = 0; i < sizeOfArray; i++)
		T* temp = Array[i];
	for (int i = 0; i < sizeOfArray; i++)
		Array[i] = vEctor[i];
	for (int i = 0; i < sizeOfArray; i++)
		vEctor[i] = temp[i];
}