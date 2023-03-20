#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<thread>							/// ��� �������
#include<vector>
//#include<chrono>							/// ��� ������� (��� ���������� ���������� ������� ������������ ���������)
using namespace std;


															/// ��������� STL. std::copy, std::copy_if

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

	
	vector<Person> people									
	{														
		Person("Vasiliy", 234),
		Person("Andrey", 50),
		Person("Mariya", 300),
		Person("Ekaterina", 182),
		Person("Vitaliy", 142),
		
		Person ("Mariya", 301),
		Person("Goga", 234),
		Person("Dmitriy", 15),
		Person("Olga", 500)
	};

	vector <Person> result;

	//copy(people.begin(), people.end(), back_inserter(result));
	
	copy_if(people.begin(), people.end(), back_inserter(result), [](const Person &p)
		{
			return p.score > 200;
		});

	cout << "The quantity of elements is\t" << result.size() << endl;

	for (auto element : result)
		cout << "Name\t" << element.name << "\tScore\t" << element.score << endl;

	


	return 0;
 }


