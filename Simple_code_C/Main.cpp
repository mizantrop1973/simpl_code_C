#include<iostream>
#include<ctime>
using namespace std;


template <class T> 
void swap1(T& a, T& b)
{
	T c = a;
	a = b;
	b = c;
}

void main()
{
	string a = "rtyugkvkv";
	string b = "bnmx";

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap1(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	
}