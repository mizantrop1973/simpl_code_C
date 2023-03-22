#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<thread>							/// ��� �������
#include<vector>
#include<list>
#include<numeric>							/// ��� accumulate
//#include<chrono>							/// ��� ������� (��� ���������� ���������� ������� ������������ ���������)
using namespace std;


														/// ��������� STL. equal and mismatch

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


	

	int arr1[]{ 1,4,7,9,34,-77,45,42,11,29,10, 12};
	int arr2[]{ 1,4,7,9,34,-77,45,42,11,29 ,10,11};      

	bool result = equal(begin(arr1), end(arr1), begin(arr2));    /// ����� ����������� �������� ���� ������ ��������� ����� ��������
																/// �� � �������� ������ ������ ��������� ������ ����� ���������

	bool result1 = equal(begin(arr1), end(arr1), begin(arr2), end(arr2));  /// �� ���� ����� ������ ������� ������ � ������ ��������!!!!!!!!

	cout << result << endl;
	cout << result1 << endl;

	vector<int> v1{ 1,4,7,9,34,-77,45,42,11,29,1 };    /// ����� ���������� ������ � ������ �����

	bool result2 = equal(begin(arr1), end(arr1), begin(v1), end(v1));  


	cout << result2 << endl;                      /// ��� ��������� equal ����� �������. ���� ���� �������� � ������� - ���� �����������

	vector<int> v2{ 1,4,7,9,34,-77,45,42,11,1,29 }; /// ���������� �� ������� �������� ��������� ������ ��������

	sort(begin(v1), end(v1));     /// ����� ���������� ����� �����

	sort(begin(v2), end(v2));

	for (auto element : v2)
		cout << element << endl;

	bool result3 = equal(begin(v1), end(v1), begin(v2), end(v2));
	cout << result3 << endl;

	auto result4 = mismatch(begin(arr1), end(arr1), begin(arr2), end(arr2));   /// ���������� ��������� �� ������������� ��������

	
	if (result4.first == end(arr1) && result4.second == end(arr2))
		cout << "Collections are equal" << endl;
	else
		cout << "Collections are not equal" << endl;
	
	
	
	cout << *result4.first << "\t" << *result4.second << endl;



		return 0;
}




