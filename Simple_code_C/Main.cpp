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


															/// ��������� STL. SORT


bool GreaterThanZero(int value)           /// ������� ��������
{
	return value > 0;
}

bool MyPred(int a, int b)					/// �������� �������� . ��� ��� ��� ������� ��� ����� �� �������������, ����� ������ ��� ������������ ��������� �-���
{
	return a > b;
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

	vector<int> v{ 12,-34,32,76,-45,98,-64 };

	for (auto element :v)
		cout << element << endl;

	cout << endl << endl << endl;

	sort(v.begin(), v.end());                              /// ������� ���������� �� ����������� �� ���� ���������� - ������ � ����� ���������

	for (auto element : v)
		cout << element << endl;

	cout << endl << endl << endl;

	//sort(v.begin(), v.end(), MyPred);								/// ������ �������������� �������� - �������� �������� (�������� �������� 2 ���������, ������� - ���� 
	sort(v.begin(), v.end(), [](int a , int b)						/// ����� ��������� ������� ���������� ��������� �-���
		{
			return a > b; /// ���� ���������� �����������
		});

	for (auto element : v)
		cout << element << endl;

	cout << endl << endl << endl;

	const int SIZE = 9;
	int arr[SIZE]{1,2,3,5,9,8,2,4,7};
	

	sort(arr, arr+SIZE, [](int a, int b) 
		{
			return a > b; /// ���� ���������� �����������
		});

	for (auto element : arr)
		cout << element << endl;


	cout << endl << endl << endl;

	/*cout << GreaterThanZero(1) << endl;*/



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

	for (auto element : people)
		cout << "Name: " << element.name << "\tScore: " << element.score << endl;

	cout << endl << endl << endl;
	
	sort(people.begin(), people.end(), [](const Person &p1, const Person &p2)
		{
			return p1.score < p2.score; 
		});

	for (auto element : people)
		cout << "Name: " << element.name << "\tScore: " << element.score << endl;
	
	return 0;
 }


