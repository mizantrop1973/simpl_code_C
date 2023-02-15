#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;
								
class A
{
public:							
	A();
	A(string b);
	~A();										
	void Print_b()
	{
		cout << b << endl;
	}

private:						

	string b;

};

A::A()
{
	cout << "Вызван конструктор А по умолчанию" << endl;
}

A::A(string b)
{
	cout << "Вызван конструктор А с параметром" << endl;
	this->b = b;
}


A::~A()
{
	cout << "Вызван деструктор А" << endl;
}


class B : public A
{
public:
	B();
	~B();

	void Print()
	{         
						
	} 

private:

};

B::B():A("new")
{
	cout << "Вызван конструктор B" << endl;
}

B::~B()
{
	cout << "Вызван деструктор B" << endl;
}


int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	A a("Hello");
	a.Print_b();

	B b;
	b.Print_b();

	
	return 0;


}