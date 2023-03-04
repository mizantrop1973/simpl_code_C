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
using namespace std;


															/// Итераторы


int  main()

{
	setlocale(LC_ALL, "ru");
	
	/*int arr[]{ 2,6,9 };
	cout << arr[1] << endl;
	cout << *(arr + 1) << endl;*/

	vector<int> myVector{ 1, 2, 3, 4, 5, 6 };
	cout << myVector[1] << endl;                         /// в большинстве контейнеров оператор[] не перегружен

	vector<int>::iterator it;							/// vector<int>::iterator - это тип данный, it  - переменная итератор
	
	it = myVector.begin();								/// дает доступ к первому элементу вектора

	cout << *it << endl;			

	*it = 1000;

	cout << *it << endl;

	++it;

	cout << *it << endl;

	--it;

	myVector.end();								///возврат итератора указывающего на следующий после последнего элемент

	for (it = myVector.begin(); it != myVector.end(); ++it)
		cout << *it << endl;

	/// КОНСТАНТНЫЕ ИТЕРАТОРЫ
	

	vector<int>::const_iterator it1 = myVector.begin();/// из за наследования константного итератора из обычного преобразование типа работает

	//*it1 = 7;									///  БУДЕТ ОШИБКА
	
	vector<int>::const_iterator it2 = myVector.cbegin();     /// а этот метод сразу возвращает константный итератор


	for (it2 = myVector.cbegin(); it != myVector.cend(); ++it)
		cout << *it << endl;


	for ( vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); ++i)
		cout << *i << endl;



	return 0;
 }


