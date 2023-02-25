#include<iostream>							/// ввод-вывод
#include<ctime>								/// врем€
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// €зык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// дл€ изменени€ кодировки консоли
using namespace std;


															/// —ѕ≈÷»јЋ»«ј÷»я ЎјЅЋќЌќ¬  Ћј——ј
															
								                         

//class Point
//{
//public:
//	Point();
//	Point(int x, int y, int z);
//	~Point();
//
//private:
//
//	int x;
//	int y;
//	int z;
//};
//
//
//Point::Point()
//{
//	 x = y = z = 0;
//}
//
//Point::Point(int x, int y, int z)
//{
//	this->x = x;
//	this->y = y;
//	this->z = z;
//}
//
//Point::~Point()
//{
//}
//
//
//template<typename/*или class*/ T1, typename T2>
//class MyClass
//{
//public:
//	MyClass(T1 value1, T2 value2);
//	~MyClass();
//
//
//	void DataTypeSize()
//	{
//		cout << sizeof(value1) << endl;
//		cout << sizeof(value2) << endl;
//	}
//
//
//protected:
//	T1 value1;
//	T2 value2;
//
//	private:
//
//};
//template <typename T1, typename T2>
//MyClass<T1, T2>::MyClass(T1 value1, T2 value2)
//{
//	this->value1 = value1;
//	this->value2 = value2;
//}
//template <typename T1, typename T2>
//MyClass<T1, T2>::~MyClass()
//{
//}
//
//
//template <typename T1, typename T2>
//class TypeInfo : public MyClass<T1, T2>
//{
//public:
//	TypeInfo(T1 value1, T2 value2) ;
//	~TypeInfo();
//
//	void ShowTypeName()
//	{
//		cout << "Typename T1 is " << typeid(this->value1).name() << endl;
//		cout << "Typename T2 is " << typeid(this->value2).name() << endl;
//		
//	}
//
//private:
//
//};
//
//template <typename T1, typename T2>
//TypeInfo<T1, T2>::TypeInfo(T1 value1, T2 value2):MyClass<T1, T2>(value1, value2)
//{
//
//}
//
//template <typename T1, typename T2>
//TypeInfo<T1, T2>::~TypeInfo()
//{
//}
template <typename T>
class Printer
{
public:
	Printer();
	~Printer();
	void Print(T value)
	{
		cout << value << endl;
	}

private:

};
template <typename T>
Printer<T>::Printer()
{
}
template <typename T>
Printer<T>::~Printer()
{
}

template<>
class Printer<string>								/// Ёто и есть специализаци€.  сли никакой реализации нет, то это запрет на string
{
public:
	void Print(string value)
	{
		cout << "___"<<value << "___"<<endl;
	}

};

int  main()

{
	setlocale(LC_ALL, "ru");

	Printer<string> p;
	p.Print("Hello, World!");


	return 0;
}