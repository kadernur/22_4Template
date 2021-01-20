
#include <iostream>
using namespace std;
template<typename T>

void printArray(const T* array, int count)
{
	for (int i = 0; i < count; i++)
		cout << array[i] << " ";
	cout << endl;

}

template<typename T>
int printArray(const T* array, int size, int lowSub, int highSub)
{
	if (size < 0 || lowSub < 0 || highSub >= size)
		return 0;

	int count = 0;
	for (int i = lowSub; i <= highSub; i++)
	{
		count++;
		cout << array[i] << " ";

	}
	cout << endl;
	return count;

}


int main()
{
	const int aCount = 5;
	const int bCount = 7;
	const int cCount = 6;

	int a[aCount] = { 1,2,3,4,5 };

	double b[bCount] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
	char c[cCount] = "HELLO";
	int element;

	cout << "Using printArray Function\n";
	printArray(a, aCount);

	cout << "Using new printArray Function\n";
	element = printArray(a, aCount, 0, aCount - 1);
	cout << element << "elements were output\n";

	cout << "Using new printArray-display range\n";
	element = printArray(a, aCount, 1,3);
	cout << element << "elements were output\n";


	cout << "Using printArray Function\n";
	printArray(b, bCount);

	cout << "Using new printArray Function\n";
	element = printArray(b, bCount, 0, bCount - 1);
	cout << element << "elements were output\n";

	cout << "Using new printArray-display range\n";
	element = printArray(b, bCount, 1, 3);
	cout << element << "elements were output\n";



	return 0;
}
