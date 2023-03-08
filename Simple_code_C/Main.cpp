#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// для изменения кодировки консоли
#include<memory>							/// умные указатели

#include<set>								/// 
using namespace std;


															/// Ассоциативный контейнер SET, multiset
															/// Упорядочные элементы - БИНАРНОЕ ДЕРЕВО 
															/// Только уникальные элементы

int  main()

{
	setlocale(LC_ALL, "ru");
	
	set<int> mySet{2,6,9,7,1};       /// Бинарное деоево с уникальными значениями , в порядке возрастания

	mySet.insert(5);
	mySet.insert(1);
	mySet.insert(12);

	mySet.insert(4);
	mySet.insert(-1);

	mySet.insert(5);

	for (auto& item : mySet)
		cout << item << endl;

	cout << endl << endl;

	for (int i = 0; i < 20; ++i)
		mySet.insert(rand() % 10);

	for (auto& item : mySet)
		cout << item << endl;

	cout << endl << endl;

	/// поиск элементов , удаление и вставка - чтобы изхменить элемент в set

	set<int> mySet1{ 12,34,56,2,-1,99,37 };

	auto it = mySet1.find(10);      /// возвращает итератор на той позиции где это число, или на следующий после последнего "элемент" (где он мог бы быть)

	auto it1 = mySet1.find(2);

	int value = 56;

	if (mySet1.find(value) != mySet1.end())
		cout << "Number " << value << " was found";
	else
		cout << "Number " << value << " wasn't found";

	cout << endl << endl;

	mySet1.erase(199);
	mySet1.insert(77);                  /// возвращается 2 значения, 1 - итератор, 2 -bool (1 если добавили, 0, если такое число уже было)

	for (auto& item : mySet1)
		cout << item << endl;

	cout << endl << endl;

	multiset<int> ms{ 2,3,4,6,8,0,3,3,4,4,6 };     /// может содержать дубли

	for (auto& item : ms)
		cout << item << endl;

	cout << endl << endl;

	ms.find(3);
	ms.lower_bound(4);								/// возвращает первую найденную четверку (итератор, то есть указатель)
	 
	auto s = ms.upper_bound(4);								/// вернет нам следующий элемент после 4 по возрастанию.

	ms.erase(3);
	ms.insert(4);

	for (auto& item : ms)
		cout << item << endl;

	cout << endl << endl;

	cout << *s << endl;

	cout << endl << endl;

	auto d = ms.equal_range(4);


	//cout << *d << endl;
	return 0;


 }


