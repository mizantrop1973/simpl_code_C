#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// для изменения кодировки консоли
#include<memory>							/// умные указатели
#include<vector>
#include<list>								/// подключаем LIST
using namespace std;


															/// Библиотека STL. LIST (Двухсвязанный список)


template<class T>
void PrintList(const list<T>& lst)
{
	for (auto it = lst.cbegin(); it != lst.cend(); ++it)
		cout << *it << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");
	
	list<int> myList;

	myList.push_back(5);										/// так же есть pop.back(), pop.front(), size, 
	myList.push_front(10);
	myList.push_back(520);

	//myList[0]   - оператор не перегружен

	auto it = myList.begin();

	
	for(auto it = myList.begin();it != myList.end(); ++it)
		cout << *it << endl;

	list<int> myList1{ 1,2,3,4,5,6 };      /// можно и так инициализировать

	for (auto it = myList1.begin(); it != myList1.end(); ++it)
		cout << *it << endl;

	PrintList(myList);

	myList.sort();
	PrintList(myList);
	cout << endl << endl;

	list<int> myList2{ 1,2,3,5,2,1,4,8,1,1,1,2,9,6,3,3,2 };
	PrintList(myList2);

	cout << endl << endl;
	myList2.unique();								/// удаляет дубликаты которые идут подряд
	PrintList(myList2);

	cout << endl << endl;

	myList2.reverse();
	
	PrintList(myList2);							/// размещает лист в обратном порядке

	cout << endl << endl;
	myList1.clear();
	PrintList(myList1);

	cout << endl << endl;

	auto i = myList2.begin();					/// вставить новый элемент
	advance(i, 3);
	myList2.insert(i, 100);
	PrintList(myList2);

	cout << endl << endl;

	myList2.erase(i);                 /// так как это не индекс, а указатель, поэтому итераторы лучше для каждого метода делать свои
	myList2.push_back(100);
	PrintList(myList2);

	

	cout << endl << endl;

	myList2.remove(100);           /// удаляет ВЕЗДЕ конкретное число если найдет
	PrintList(myList2);

	cout << endl << endl;

	myList2.assign(5, 0);           ///  удаляет ВСЕ и заполняет лист - первый поараметр - количество элементов, второй - число, которым заполняется лист
	PrintList(myList2);

	cout << endl << endl;

	myList2.assign(myList.begin(), myList.end());           ///  переписывает один список в другой
	PrintList(myList2);
	
	
	
	
	return 0;


 }


