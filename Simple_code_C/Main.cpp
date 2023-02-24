#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
using namespace std;


															/// ������������ ���� �++
								                         

class Point
{
public:
	Point();
	Point(int x, int y, int z);
	~Point();

private:

	int x;
	int y;
	int z;
};


Point::Point()
{
	 x = y = z = 0;
}

Point::Point(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Point::~Point()
{
}


template<typename T1, typename T2>
class MyClass
{
public:
	MyClass(T1 value1, T2 value2)
	{
		this->value1 = value1;
		this->value2 = value2;
	}


	void DataTypeSize()
	{
		cout << sizeof(value1) << endl;
		cout << sizeof(value2) << endl;
	}


private:
	T1 value1;
	T2 value2;

};

//MyClass::MyClass(T value)
//{
//	this->value = value;
//}

//MyClass::~MyClass()
//{
//}


int  main()

{
	setlocale(LC_ALL, "ru");

	int a = 2;

	Point p;

	MyClass<int, Point> c(a, p);
	c.DataTypeSize();

	return 0;
}