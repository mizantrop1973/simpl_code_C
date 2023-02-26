#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// для изменения кодировки консоли
#include<memory>							/// умные указатели
using namespace std;


															/// Умные_указатели_Smart_pointers
															/// auto_ptr, unique_ptr, shared_ptr
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

	/*int* ptr = new int(5);
	cout << *ptr << endl;
	delete ptr;*/

	SmartPointer<int> pointer = new int(10);
	*pointer = 154857;
	cout << *pointer << endl;

	//SmartPointer<int> sp = pointer;                 /// ПРОБЛЕММА

	auto_ptr<int>ap1(new int(10));
	auto_ptr<int> ap2(ap1);							/// Первый указатель затирается

	
	
	
	unique_ptr<int>up1(new int(10));
	//unique_ptr<int> up2(up1);						/// запрет 
	unique_ptr<int> up2 = move(up1);				/// перенос

	/// ИЛИ

	up2.swap(up1);									/// обмен

	int* p = up1.get();								/// возврат сырого указателя

	up1.release();									/// затирает указатель, но данные оставляет
	
	up1.reset();									/// затирает указатель и  данные


	shared_ptr<int>sp1(new int(10));				/// общие указатели, данные уничтожаются только тогда когда уничтожается последнгий указатель
	shared_ptr<int> sp2(sp1);						/// реализуется при помощи переменной static

	
													
													/// МАССИВЫ

	int SIZE ;
	cin >> SIZE;
	shared_ptr<int[]>ptr(new int[SIZE] {1, 23, 4, 56, 7});

	for (int i = 0; i < SIZE; ++i)
	{
		ptr[i] = rand() % 100;
		cout << ptr[i] << endl;
	}
	
	return 0;
 }