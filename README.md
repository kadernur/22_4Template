# 22_4Template
22.4 (Print Array Range) Overload function template printArray so that it takes
two additional integer arguments, namely int lowSubscript and int highSubscript. A call to this
function will print only the designated portion of the array. Validate lowSubscript and highSubscript; if either is out of range or if highSubscript is less than or equal to 
lowSubscript, the overloaded printArray function should return 0; otherwise, printArray should return the number of
elements printed. Then modify main to exercise both versions of printArray on arrays a, b and c
Be sure to test all capabilities of both versions of printArray.


22.6 (Operator Overloading in Templates) Write a simple function template for predicate function isEqualTo that compares its two arguments of the same type with the equality 
operator (==) and returns true if they are equal and false otherwise. Use this function template in a program that calls isEqualTo only with a variety of fundamental types. 
Now write a separate version of the program that calls isEqualTo with a user-defined class type, but does not overload the equality operator. 


22.7 (Array Class Template) Use an int template nontype parameter numberOfElements and a
type parameter elementType to help create a template for the Array class. This template will enable Array objects to be instantiated with a specified
number of elements of a specified element type at compile time.
Write a program with class template Array. The template can instantiate an Array of any element type. Override the template with a specific definition for an Array of float elements (classArray<float>). The driver should demonstrate the instantiation of an Array of int through the template and should show that an attempt to instantiate an Array of float uses the definition provided in class Array<float>.
