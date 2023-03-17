#include<iostream>							/// ввод-вывод
#include<ctime>								/// врем€
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// €зык
#include<fstream>							/// поток в файлы
#include<string>
#include<thread>							/// дл€ потоков
#include<vector>
//#include<chrono>							/// дл€ времени (при включенной библиотеке потоков подключаетс€ автоматом)
using namespace std;


															/// ѕредикаты - функторы возвращающие логические выражени€ (булевые значени€)


bool GreaterThanZero(int value)
{
	return value > 0;
}

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

	/*vector<int> v{ 12,-34,32,76,-45,98,-64 };

	int result = count_if(v.begin(), v.end(), GreaterThanZero);       /// возвращает 	ptrdiff_t - а это обычный int

	cout << result << endl;

	cout << GreaterThanZero(1) << endl;*/


	vector<Person> people
	{
		Person("Vasiliy", 234),
		Person("Andrey", 50),
		Person("Mariya", 300),
		Person("Ekaterina", 182),
		Person("Vitaliy", 142),
		Person("Goga", 234),
		Person("Dmitriy", 15),
		Person("Olga", 500)
	};

	/*int result=0;*/

	int result = count_if(people.begin(), people.end(), people.front());


	/*for (auto element : people)
	{
		if (element(element))
			++result;
	}*/

	cout << result << endl;
	
	return 0;
 }


