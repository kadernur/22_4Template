#include <iostream>
using namespace std;
template<typename T>

bool isEqualTo (const T& arg1, const T& arg2)
{
	return arg1 == arg2; //class için == operatörünü overload etmem gerekiyor.


}

class Complex
{
private:
	int real;
	int imaginary;
	


public: 
	Complex(int realPart=0, int iPart=0)
		:real(realPart), imaginary(iPart)
	{

	}
	friend ostream& operator<<(ostream& out, Complex& c);
	friend istream& operator >> (istream& in, Complex& c);
	//== overload iþlemi
	bool operator==(const Complex& right) const 

	{
		return real == right.real && imaginary == right.imaginary;

	}


};
//cout ve cin overloading  iþlemi 
ostream& operator << (ostream& out, Complex& c)
{
	out << c.real;
	out << "+i" << c.imaginary << endl;
	return out;
}
istream& operator >> (istream& in, Complex& c)
{
	cout << "Enter Real Part ";
	in >> c.real;
	cout << "Enter Imagenory Part ";
	in >> c.imaginary;
	return in;
}



int main()
{
	int a, b;
	cout << "Enter Two integers: ";
	cin >> a >> b;
	cout << a << " and" << b << " are" << (isEqualTo(a, b)? " equal": " not equal")<< '\n';
    
	char c, d;

	cout << "Enter Two characters: ";
	cin >> c >> d;
	cout << c << " and" << d << " are" << (isEqualTo(c, d) ? " equal " : " not Equal") << '\n';

	Complex e;
	Complex f;

	cout << "Enter Two characters: ";
	cin >> e >> f;
	cout << e << " and" << f << " are" << (isEqualTo(e, f) ? " equal " : " not Equal") << '\n';




	return 0;
}

