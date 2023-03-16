#include<iostream>							/// ввод-вывод
#include<ctime>								/// врем€
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// €зык
#include<fstream>							/// поток в файлы
#include<string>
#include<thread>							/// дл€ потоков
#include<chrono>							/// дл€ времени
using namespace std;


															/// ЋяћЅƒј. «ј’¬ј“  ќЌ“≈ —“ј








int  main()

{
	setlocale(LC_ALL, "ru");

	int a = 55;

	auto f = [a]()
	{
		cout << a << endl;
	};
	
	f();

	return 0;
 }


