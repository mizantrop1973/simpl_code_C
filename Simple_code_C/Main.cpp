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
	cout << "������ ����������� � �� ���������" << endl;
}

A::A(string b)
{
	cout << "������ ����������� � � ����������" << endl;
	this->b = b;
}


A::~A()
{
	cout << "������ ���������� �" << endl;
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
	cout << "������ ����������� B" << endl;
}

B::~B()
{
	cout << "������ ���������� B" << endl;
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