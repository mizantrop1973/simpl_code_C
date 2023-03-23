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


													/// АЛГОРИТМЫ STL. unique - Удалить повторяющиеся элементы




int  main()

{
	setlocale(LC_ALL, "ru");

	/*int arr[]{ 1,2,3,3,3,5,9,7,4,1,1,5};

	auto result = unique(begin(arr), end(arr));

	for_each(begin(arr), result, [](int a)
		{
			cout << a << endl;

		});

	cout << endl << endl;*/



	vector<int> v{ 2,3,4,4,4,6,7,7,7,86,55,55,44,3,3,0 };

	/*auto result1 = unique(begin(v), end(v));

	v.erase(result1, end(v));

	for_each(begin(v), end(v), [](int a)
		{
			cout << a << endl;

		});*/


	vector<int> v1;

	unique_copy(begin(v), end(v), back_inserter(v1));
	return 0;
}




