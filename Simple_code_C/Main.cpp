#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<thread>							/// для потоков
#include<chrono>							/// для времени
using namespace std;


															/// ИНОГОПОТОЧНОЕ ПРОГРАММИРОВАНИЕ, ВОЗВРАТ РЕЗУЛЬТАТА ИЗ ПОТОКА ПО ССЫЛКЕ






void Sum(int a, int b, int &p)													
{
	
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout <<"ID stream =  "<< this_thread::get_id()<< "============================\tSum STARTED\t========================================" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
	p = a + b;
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout << "ID stream =  " << this_thread::get_id() << "============================\tSum STOPED\t=========================================" << endl;

	
}


int  main()

{
	setlocale(LC_ALL, "ru");

	int p = 0;

	///thread th (Sum,2,3, p);              /// передача параметров в поток - обязательно соблюдать количество и типа параметров

	thread th(Sum, 2, 3, std::ref(p));    ///вот как надо !!!!!!!!!!!!!!!!!!!!!

	for (size_t i = 0;i<10; i++)     /// постоянная работа
	{
		cout << "Stream's ID = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();
	cout << "a  +  b  =  " << p << endl;     /// будет ошибка, так как в случае с другим потоком параметр передается в функцию все равно по значению

	return 0;
 }


