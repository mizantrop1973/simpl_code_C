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
#include<deque>								/// двухсторонн€€ очередь
using namespace std;


															/// онтейнер deque двухсторонн€€ очередь - гибрид между вектором и двухсторонним списком
															/// по сути двухсв€занный список векторов


template<class T>
void PrintList(const list<T>& lst)
{
	for (auto it = lst.cbegin(); it != lst.cend(); ++it)
		cout << *it << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");
	
	deque<int> dq{ 1,2,3,4,5 };

	dq.begin();
	


	return 0;


 }


