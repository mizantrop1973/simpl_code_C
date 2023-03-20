#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<thread>							/// для потоков
#include<vector>
//#include<chrono>							/// для времени (при включенной библиотеке потоков подключается автоматом)
using namespace std;


															/// АЛГОРИТМЫ STL. std::find, std::find_if, std::find_if_not

class Person
{
public:
	Person(string name, double score);
	~Person();

	bool operator()(const Person& p)
	{
		return p.score > 180;
	}

	string name;
	double score;

private:

};

Person::Person(string name, double score)
{
	this->name = name;
	this->score = score;
}

Person::~Person()
{
}



int  main()

{
	
	setlocale(LC_ALL, "ru");


	vector<int> v{ 11,13,87,99 };

	auto result = find(v.begin(), v.end(), 2);

	if (result == v.end())
		cout << "Number is absent" << endl;
	else
		cout << "Mumber is found" << endl;

	auto result1 = find_if(v.begin(), v.end(), [](int a)   ///find_if
		{
			return a % 2 == 0;								/// любое условие по факту
		});

	if (result1 == v.end())
		cout << "-" << endl;
	else
		cout << "+" << endl;
															/// find_if_not - то же самое тольео инверсия
	

	vector<Person> people									/// find не можем использовать . Либо перегрузить операторы сравнения (но если класс чужой???!!!)
	{														/// ЛИБО только с предикатом  find_if
		Person("Vasiliy", 234),
		Person("Andrey", 50),
		Person("Mariya", 300),
		Person("Ekaterina", 182),
		Person("Vitaliy", 142),
		Person("Goga", 234),
		Person("Dmitriy", 15),
		Person("Olga", 500)
	};

	auto result2 = find_if(people.begin(), people.end(), [](const Person& p)
		{
			return p.name == "Vitaliy" || p.score ==501;
		});
	if (result2 == people.end())
		cout << "-" << endl;
	else
		cout << "+" << endl;

	return 0;
 }


