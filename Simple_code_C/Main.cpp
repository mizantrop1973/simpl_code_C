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


															/// АЛГОРИТМЫ STL. std::remove, std::remove_if

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


	vector<int> v{ 1,4,9,4,11,13,87,4,99 };
	auto result = remove(v.begin(), v.end(), 4);						/// не удаляет, а записывает в конец вектора (на самом деле не так??????? - 
																		/// в конце в отладчике дублируются последние цифры, а не 4-ки
	for (auto element : v)
		cout << element << endl;
																		/// result возвращает "закладочку" между "нужными" и "ненужными" элементами 
	v.erase(result, v.end());											/// это фактическое удаление
	for (auto element : v)
		cout << element << endl;
	

	



	
	vector<Person> people									
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
	};

	cout << "Total quantity of Abiturients:\t" << people.size() << endl;

	for (auto element : people)
		cout << "\tName " << element.name<< "\t"<< "\tAge " << element.age << "\t\tScore " << element.score << endl;

	cout << endl << endl << endl;

	/*auto result1 =  remove_if(people.begin(), people.end(), [](const Person& p)   
		{
			return p.age > 30 || p.score<200;
		});*/

	

	people.erase(remove_if(people.begin(), people.end(), [](const Person& p)   /// можно не создавать переменную result б а сразу передать remove_if  в  erase
		{
			return p.age > 30 || p.score < 200;
		}), people.end());

	sort(people.begin(), people.end(), [](const Person& p1, const Person& p2)
		{
			return p1.score > p2.score;
		});

	for (auto element : people)
		cout << "\tName " << element.name << "\t" << "\tAge " << element.age << "\t\tScore " << element.score << endl;


	string str = "Text with   several spaces ";      /// варинат с remove  удаление пробелов
	cout << str << endl;
	 
	str.erase(remove(str.begin(), str.end(), ' '), str.end());

	cout << str << endl;

	string str1 = "Text amd many    many, spaces   ";
	cout << str1 << endl;

	str1.erase(remove_if(str1.begin(), str1.end(), [&str](const char& ch)
		{
			return ch == ' ';
		}), str1.end());

	cout << str1 << endl;



	return 0;
 }


