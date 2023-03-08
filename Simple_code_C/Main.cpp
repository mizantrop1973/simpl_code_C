#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// для изменения кодировки консоли
#include<memory>							/// умные указатели

#include<map>								
using namespace std;

/// КОНТЕЙНЕРЫ map, multymap (разница как у set - в дублирующих значениях КЛЮЧА)
/// хранит значение и ключ

int  main()

{
	setlocale(LC_ALL, "ru");


	pair<int, string> p(1, "telephone");
	cout << p.first << endl;  // int
	cout << p.second << endl; // string

	map< int, string > myMap;

	myMap.insert(make_pair(3, "telephone"));			/// или myMap.insert(pair<int, string> p( 1, "telephone");
	myMap.insert(pair<int, string>(2, "laptop"));

	myMap.emplace(1, "monitor");						/// третий способ !!!!!!!!!

	auto it = myMap.find(1);							/// (если ключ не найден - выдаст ошибку НИЖЕ, при печати на консоль,  поэтому лучше делать проверку)
	if (it != myMap.end())
		cout << it->second << endl << endl;

	for (auto el : myMap)
		cout << el.first << "  " << el.second << endl;

	cout << myMap[2] << endl;                       /// перегружен [] , в скобках - КЛЮЧ


	cout << endl << endl;


	map< string, int > myMap1;

	myMap1.emplace("Peter", 20009);
	myMap1.emplace("Anna", 2659);
	myMap1.emplace("John", 130);
	myMap1.emplace("Paul", 200453);

	cout << myMap1["Peter"] << endl;

	myMap1["John"] = 1000000;

	myMap1["Lisa"] = 51044;                   /// если нет в списке - добавит

	myMap1.at("Paul") = 3;                   /// не добавляет новый элемент если его нет в списке, а вызывает исключение

	try
	{
		myMap1.at("Sabrina") = 1002;
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
		cout << "The key is not found" << endl;
	}

	cout << endl << endl << endl;

	myMap1.erase("Peter");

	for (auto el : myMap1)
		cout << el.first << "  " << el.second << endl;

	cout << endl << endl;

	multimap<string, int> mm;

	mm.emplace("Peter", 20009);
	mm.emplace("Anna", 2659);
	mm.emplace("John", 130);
	mm.emplace("Paul", 200453);

	mm.emplace("Anna", 1324);

	for (auto el : mm)
		cout << el.first << "  " << el.second << endl;

	///mm[] = не перегружен так как ключи дублируются

	/// нет метожа at()



	return 0;


}