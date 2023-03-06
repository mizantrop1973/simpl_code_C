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

using namespace std;


															/// Ѕиблиотека STL. forward_list - ќƒЌќ—¬я«Ќџ… —ѕ»—ќ !!!


template<class T>
void PrintList(const list<T>& lst)
{
	for (auto it = lst.cbegin(); it != lst.cend(); ++it)
		cout << *it << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");
	
	forward_list<int> fl {1,2,3,4,5};
	
	fl.push_front(55);
	fl.push_front(56);

	/*for (auto el : fl)
		cout << el << endl;*/

	forward_list<int>::iterator i = fl.begin();

	cout << *i << endl;

	cout << endl << endl;

	++i; 
	///--i;   ошибка, так как это односв€зный список

	fl.insert_after(i, 9999);									/// вставл€ет после элемента  -  из зи того что список односв€зный

	for (auto el : fl)
		cout << el << endl;

	cout << endl << endl;

	/// как вставить в начало
	forward_list<int>::iterator it = fl.before_begin();			/// указывает на "предпервую" позицию
	fl.insert_after(it, 9999);									/// соответственно вставка будет в первую позицию

	for (auto el : fl)
		cout << el << endl;

	return 0;


 }


