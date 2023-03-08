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


															/// ИНОГОПОТОЧНОЕ ПРОГРАММИРОВАНИЕ, thread

void DoWork()														/// номер потока будет тот же самый что и у main!!!!
{
	for (size_t i = 0; i < 10; ++i)
	{
		cout << "ID of the stream = " << this_thread::get_id() << "\tDoWork\t" <<i<< endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
}


int  main()

{
	setlocale(LC_ALL, "ru");



	/*cout << "START MAIN" << endl;

	/// приостановка работы текущего потока

	this_thread::sleep_for(chrono::milliseconds(3000));

	/// идентификатор текущего потока

	cout << this_thread::get_id() << endl;

	cout << "END MAIN" << endl << endl << endl;

	///------------------------------------------------------------------------------------------------------------------------------------

	DoWork();

	for (size_t i = 0; i < 10; ++i)
	{
		cout << "ID of the stream = " << this_thread::get_id() << "\tmain\t" <<i<< endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	cout << "END MAIN" << endl << endl << endl;

	///------------------------------------------------------------------------------------------------------------------------------------*/

	thread th(DoWork);						/// создание другого потока и передача ему функции по указателю (имя функции - указатель, как у массива!!!!)

	thread th1(DoWork);

	/// обязательно в комплексе в нижеуказанным определением

	///th.detach();								/// созданный поток выполняется независимо, но только пока работает основной поток, 
											    ///потом останавливается, не все итерации могут
	/// ИЛИ

	/// th.join();                            /// вызывается там, где нам нужно дождаться окончания второго потока перед окончанием основного

	for (size_t i = 0; i < 10; ++i)
	{
		cout << "ID of the stream = " << this_thread::get_id() << "\tmain\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();								  /// ждем созданный поток

	th1.join();
	cout << "END MAIN" << endl << endl << endl;

	///------------------------------------------------------------------------------------------------------------------------------------

	return 0;
 }


