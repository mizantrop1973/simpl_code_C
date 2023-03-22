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
#include<numeric>
//#include<chrono>							/// для времени (при включенной библиотеке потоков подключается автоматом)
using namespace std;


/// АЛГОРИТМЫ STL. accumulated

class Person
{
public:
	Person(string name, int age, double score);
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

	auto result = accumulate(begin(v), end(v), 0);

	cout << result << endl;

	int arr[]{ 1,4,7,9,34,-77,45,42,11,29 };


	auto result1 = accumulate(begin(v), end(v), 0, [](int a, int b)
		{
			if (b % 2 == 0)
				return a + b;
			else
				return a;
		});
	cout << result1 << endl;

	auto result2 = accumulate(begin(v), end(v), 1, [](int a, int b)
		{
			if (b % 2 == 0)
				return a * b;
			else
				return a;
		});
	cout << result2 << endl;


		return 0;
}




