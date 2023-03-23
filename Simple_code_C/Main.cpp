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
						/// МНОГОПОТОЧНОЕ ПРОГРАММИРОВАНИЕ,  синхронизация потоков, lock_guard mutex






class Timer									/// сздаем класс измеряющий время работы программы
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

mutex mtx;                           /// создаем мьютекс (класс)

void Print(char ch)
{
	this_thread::sleep_for(chrono::milliseconds(2000));

	//mtx.lock();						 /// защищаем участок кода от одновременного использования разными потоками
	{									/// в случае с объектом lock guard  для определения зоны синхронизации можно использовать фигурные скобки
		lock_guard<mutex> duard(mtx);       /// автоматом следит за lock и unlock (смысл - создание объекта и захват мьютекса в конструкторе, 
		/// а после завершения работы функции - деструктор этот объект уничтожает

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
	}												/// если используем фигурные скобки, то объект lock guard  удаляется здесь

	this_thread::sleep_for(chrono::milliseconds(2000));


}										/// вот тут уничтожится объект lock guard


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