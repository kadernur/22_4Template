#include<iostream>
using namespace std;
#define ARRAY_H


template<typename elementType , int numberOfElements>
class Array
{
public:
	 Array();
     ~Array();
	 int getsize() const;
	 bool operator==(const Array&) const;
	 bool operator!=(const Array&)const;
	 elementType& operator[](int);

	 void inputArray();
	 void outputArray() const;


private:
	elementType elements[numberOfElements];
	static int arrayCount;


};
template<typename elementType, int numberOfElements>
int Array<elementType, numberOfElements>::arrayCount = 0;

template<typename elementType, int numberOfElements>
Array<elementType, numberOfElements>::Array()
{
	arrayCount++;
	for (int i = 0; i < numberOfElements; i++)
		elements[i] = elementType();
}

template<typename elementType, int numberOfElements>
Array<elementType, numberOfElements>::~Array()
{
	arrayCount--;
}

template<typename elementType, int numberOfElements>
int Array<elementType, numberOfElements>::getsize()const
{
	return numberOfElements;
}

template<typename elementType, int numberOfElements>
bool Array<elementType, numberOfElements>::operator==(const Array& right) const
{
	for (int i = 0; i < numberOfElements; i++)
	{
		if (elements[i] != right.elements[i])
			return false;
	}
	return true;
}

template<typename elementType, int numberOfElements>
bool Array<elementType, numberOfElements>::operator!=(const Array& right) const
{
	for (int i = 0; i < numberOfElements; i++)
	{
		if (elements[i] != right.elements[i])
			return true;
	}
	return false;

}

template<typename elementType, int numberOfElements>
 elementType &Array<elementType, numberOfElements>::operator[](int subscript)
{
	 return elements[subscript];

}

 template<typename elementType, int numberOfElements>
 void Array<elementType, numberOfElements>::inputArray()
 {
	 for (int i = 0; i < numberOfElements; i++)
		 cin >> elements[i];
 }
 
 template<typename elementType, int numberOfElements>
 void Array<elementType, numberOfElements>::outputArray() const
 {
	 for (int i = 0; i < numberOfElements; i++)
		 cout << elements[i] << ' ';
 }
