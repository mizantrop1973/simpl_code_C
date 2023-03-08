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


															/// ИНОГОПОТОЧНОЕ ПРОГРАММИРОВАНИЕ, ПЕРЕДАЧА ПАРАМЕТРОВ В ПОТОК






void DoWork(int a, int b, string msg)														
{
	cout << msg << endl;
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout << "============================\tDoWorked STARTED\t========================================" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
	cout << "a  +  b  =  " << a + b << endl;
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout << "============================\tDoWorked STOPED\t=========================================" << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");

	thread th(DoWork, 2,3, "Sum");              /// передача параметров в поток - обязательно соблюдать количество и типа параметров

	for (size_t i = 0;true; i++)     /// постоянная работа
	{
		cout << "Stream's ID = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();

	return 0;
 }


