#include<iostream>							/// ввод-вывод
#include<ctime>								/// врем€
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// €зык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// дл€ изменени€ кодировки консоли
#include<memory>							/// умные указатели
#include<vector>
#include<list>								/// подключаем LIST
#include<forward_list>	
#include<array>								
using namespace std;


															/// Ѕиблиотека STL.  онтейнер дл€ статического массива array


template<class T>
void PrintList(const list<T>& lst)
{
	for (auto it = lst.cbegin(); it != lst.cend(); ++it)
		cout << *it << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");
	
	array<int, 4> arr{1,2,3,4};

	/*try
	{
		cout << arr.at(11) << endl;						/// при выходе за пределы массива гарантирует ошибку
	}
	catch (const exception&ex)
	{
		cout << ex.what() << endl;
	}*/



	for(auto i : arr)

		cout << i << endl;							/// при выходе за пределы массива может дать непон€тные данные, а может ошибку


	arr.fill(-1);

	for (auto i : arr)

		cout << i << endl;

	cout << endl << endl;


	cout<<arr.front()<<endl;
	return 0;


 }


