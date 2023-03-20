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
//#include<chrono>							/// для времени (при включенной библиотеке потоков подключается автоматом)
using namespace std;


															/// АЛГОРИТМЫ STL. max_element

class Person
{
public:
	Person(string name, int age,double score);
	~Person();

	bool operator()(const Person& p)
	{
		return p.score > 180;
	}

	string name;
	double score;
	int age;

private:

};

Person::Person(string name, int age, double score)
{
	this->name = name;
	this->age = age;
	this->score = score;

}

Person::~Person()
{
}



int  main()

{
	
	setlocale(LC_ALL, "ru");


	vector<int> v{ 1,4,9,4,-11,13,87,4,99 };
	list<int>   l{ 2,9,4,67,43,-2,45,20,1 };

	auto result = max_element(v.begin(), v.end());

	cout << *result << endl;

	auto result1 = max_element(l.begin(), l.end());

	cout << *result1 << endl;

	const int SIZE = 10;

	int arr[SIZE]{ 1,4,7,9,34,-77,45,42,11,29 };
	auto result2 = max_element(arr, arr+SIZE);
	cout << *result2 << endl;

	/*vector<Person> people									
	{														
		Person("Vasiliy", 18,234),
		Person("Andrey", 19,50),
		Person("Mariya", 25,300),
		Person("Ekaterina",31, 182),
		Person("Vitaliy", 42,142),
		
		Person ("Mariya", 22, 301),
		Person("Goga", 27,234),
		Person("Dmitriy", 34, 15),
		Person("Olga", 50,500)
	};*/





	return 0;
 }


