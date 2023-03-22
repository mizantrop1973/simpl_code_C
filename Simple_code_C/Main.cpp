#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<thread>							/// для потоков
//#include<chrono>							/// для времени (при включенной библиотеке потоков подключается автоматом)
using namespace std;
										/// ИНОГОПОТОЧНОЕ ПРОГРАММИРОВАНИЕ, МЕТОД КЛАССА В ПОТОКЕ







class MyClass
{
public:
	MyClass();
	~MyClass();
	void DoWork()
	{
		this_thread::sleep_for(chrono::milliseconds(3000));
		cout << "ID stream =  " << this_thread::get_id() << "============================\tDoWork STARTED\t========================================" << endl;
		this_thread::sleep_for(chrono::milliseconds(5000));
		cout << "ID stream =  " << this_thread::get_id() << "============================\tDoWork STOPED\t=========================================" << endl;
	}


	void DoWork2(int a)
	{
		this_thread::sleep_for(chrono::milliseconds(3000));
		cout << "ID stream =  " << this_thread::get_id() << "=============================\tDoWork2 STARTED\t========================================" << endl;
		this_thread::sleep_for(chrono::milliseconds(5000));
		cout << "DoWork2 value of the parameter\t" << a << endl;
		cout << "ID stream =  " << this_thread::get_id() << "=============================\tDoWork2 STOPED\t=========================================" << endl;
	}


	int Sum(int a, int b)
	{

		this_thread::sleep_for(chrono::milliseconds(3000));
		cout << "ID stream =  " << this_thread::get_id() << "==============================\tSum STARTED\t========================================" << endl;
		this_thread::sleep_for(chrono::milliseconds(5000));
		this_thread::sleep_for(chrono::milliseconds(3000));
		cout << "ID stream =  " << this_thread::get_id() << "==============================\tSum STOPED\t=========================================" << endl;
		return a + b;

	}

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}


int  main()

{
	setlocale(LC_ALL, "ru");


	MyClass m;

	int result;

	thread t([&]()
		{
			result = m.Sum(2, 5);
		});

	thread t1(&MyClass::DoWork, m);						/// синтаксис подходит если не нужно возвращать значение


	thread t2(&MyClass::DoWork2, m, 5);					/// если нужно передавать значение

	for (size_t i = 1; i <= 10; ++i)
	{
		cout << "ID stream =  " << this_thread::get_id() << "==============================\tmain works\t" << i << "========================================" << endl;
		this_thread::sleep_for(chrono::milliseconds(3000));
	}


	cout << "Result\t" << result << endl;

	/*thread t1([&]()									/// вариант через лямбду
		{
			m.DoWork();
		}); */




	t2.join();
	t1.join();
	t.join();

	return 0;
}