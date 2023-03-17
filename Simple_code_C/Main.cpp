#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;
								/// ������������ ������� ��� ������������///
class A
{
public:							/// ��� ������  ������������ ������� ������������ ���� ������ ������������ � ��������������� ������ 
	A();						/// � ����������� � ������������ ������������. 
	~A();										
	int a = 2;

private:						/// ��� ���� ������������� ������� ������������ ���� �����  private 

	int b = 3;

protected:						/// ���� ���� �������� protected , ���� (��� ������������ ������� private) ���������� private

	int c = 6;

};

A::A()
{
}

A::~A()
{
}


class B : protected A
{
public:
	B();
	~B();

	void Print()
	{
		cout << a << endl;
		///cout << b << endl;                ///private ���� ������������� ������ ���������� � ����������
		cout << c << endl;					///protected ���� ������������� ������ �������� � ����������
	} 

private:

};

B::B()
{
}

B::~B()
{
}


int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	B b;

	///cout << b.a<<endl;
	///cout << b.b<<endl;                          private � protected ���� ������������� ������ ���������� �����
	///cout << b.c<<endl;
	
	b.Print();										/// ����� ����� ���������� ����� �������� ������ � public � protected �����, �� �� � private

	
	return 0;


}