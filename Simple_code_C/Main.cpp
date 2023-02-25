#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// для изменения кодировки консоли
using namespace std;


															/// Умные_указатели_Smart_pointers
template<class T>															
class SmartPointer
{
public:
	SmartPointer(T* ptr);
	~SmartPointer();

	T& operator *()
	{
		return *ptr;
	}


private:
	T* ptr;
};

template<class T>
SmartPointer<T>::SmartPointer(T*ptr)
{
	this->ptr = ptr;
	cout << "Constructor" << endl;
}
template<class T>
SmartPointer<T>::~SmartPointer()
{
	delete ptr;
	cout << "Destructor" << endl;
}



int  main()

{
	setlocale(LC_ALL, "ru");

	int* ptr = new int(5);
	cout << *ptr << endl;
	delete ptr;

	SmartPointer<int> pointer = new int(10);
	*pointer = 154857;
	cout << *pointer << endl;

	return 0;
}