#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<thread>							/// для потоков
#include<vector>
#include<list>
#include<numeric>							/// для accumulate
//#include<chrono>							/// для времени (при включенной библиотеке потоков подключается автоматом)
using namespace std;


													/// АЛГОРИТМЫ STL. for///each  - перебрать элементы коллекции



void Foo(int a)
{
	cout << a << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");


	int arr[]{ 1,4,8,2,5,9,0 };

	for_each(begin(arr), end(arr), Foo);
	
	cout << endl << endl << endl;

	for (auto element : arr)
	{
		cout << element << endl;
	}

	cout << endl << endl << endl;

	for_each(begin(arr), end(arr), [](int a) 
		{
			cout << a << endl;
		});



	return 0;
}




