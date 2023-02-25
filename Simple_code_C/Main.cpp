#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// для изменения кодировки консоли
using namespace std;


															/// ПРОМТРАНСТВО ИМЕН С++
								                         

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


template<typename/*или class*/ T1, typename T2>
class MyClass
{
public:
	MyClass(T1 value1, T2 value2);
	~MyClass();


	void DataTypeSize()
	{
		cout << sizeof(value1) << endl;
		cout << sizeof(value2) << endl;
	}


protected:
	T1 value1;
	T2 value2;

	private:

};
template <typename T1, typename T2>
MyClass<T1, T2>::MyClass(T1 value1, T2 value2)
{
	this->value1 = value1;
	this->value2 = value2;
}
template <typename T1, typename T2>
MyClass<T1, T2>::~MyClass()
{
}


template <typename T1, typename T2>
class TypeInfo : public MyClass<T1, T2>
{
public:
	TypeInfo(T1 value1, T2 value2) ;
	~TypeInfo();

	void ShowTypeName()
	{
		cout << "Typename T1 is " << typeid(this->value1).name() << endl;
		cout << "Typename T2 is " << typeid(this->value2).name() << endl;
		
	}

private:

};

template <typename T1, typename T2>
TypeInfo<T1, T2>::TypeInfo(T1 value1, T2 value2):MyClass<T1, T2> (value1, value2)
{

}

template <typename T1, typename T2>
TypeInfo<T1, T2>::~TypeInfo()
{
}




int  main()

{
	setlocale(LC_ALL, "ru");

	double a = 2.2541;

	Point b;

	MyClass<double, Point> c(a, b);

	TypeInfo<double, Point> d(a,b);
	

	c.DataTypeSize();
	d.DataTypeSize();
	d.ShowTypeName();
	

	return 0;
}