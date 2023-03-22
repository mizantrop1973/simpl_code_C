#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<thread>							/// для потоков
#include<mutex>	

//#include<chrono>							/// для времени (при включенной библиотеке потоков подключается автоматом)
using namespace std;
/// МНОГОПОТОЧНОЕ ПРОГРАММИРОВАНИЕ, защита разделенных данных, синхронизация потоков, mutex






class Timer															/// сздаем класс измеряющий время работы программы
{
public:
	Timer();
	~Timer();


private:
	chrono::time_point<chrono::steady_clock> start, finish;
	chrono::duration<float> duration;
};

Timer::Timer()
{
	start = chrono::high_resolution_clock::now();
}

Timer::~Timer()
{
	finish = chrono::high_resolution_clock::now();
	chrono::duration<float> duration = finish - start;
	cout << duration.count() << " sec" << endl;
}

mutex mtx;                           /// создаем мьютекс

void Print(char ch)
{
	this_thread::sleep_for(chrono::milliseconds(2000));

	//mtx.lock();						 /// защищаем участок кода от одновременного использования разными потоками
	for (int i = 0; i < 5; ++i)
	{
		for (int i = 0; i < 10; ++i)
		{
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl;
	//mtx.unlock();					/// снимаем защиту

	this_thread::sleep_for(chrono::milliseconds(2000));
}


int  main()
{
	setlocale(LC_ALL, "ru");

	Timer timer;
	thread t1(Print, '*');           /// не сихронизированы
	thread t2(Print, '#');

	/*Print('*');
	Print('#');*/

	t1.join();
	t2.join();

	return 0;
}