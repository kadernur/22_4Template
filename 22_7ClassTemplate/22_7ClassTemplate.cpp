#include<string.h>
#include <iostream>
#include"Array.h"
using namespace std;

int main()
{
    Array<int, 5>intArray;//int tipinde bir nesne oluþturmuþ olduk.
    cout << "Enter " << intArray.getsize() << "integer values:\n";
    intArray.inputArray();

    cout << "\n The Values in intArray: \n";
    intArray.outputArray();

    Array<string, 3> stringArray;
    cout << "Enter " << stringArray.getsize() << " string values:\n";
    stringArray.inputArray();

    cout << "\n The Values in stringArray: \n";
    stringArray.outputArray();

    Array<string, 3> stringArray2;
    cout << "Enter " << stringArray2.getsize() << "  string values:\n";
    stringArray2.inputArray();

    cout << "\n The Values in stringArray2: \n";
    stringArray2.outputArray();


    cout << "\nStringArray1 is " << ((stringArray == stringArray2) ? "equal " :" not equal") << "to StringArray2";


        ;
    return 0;
}

