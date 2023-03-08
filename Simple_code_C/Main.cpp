#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
#include<memory>							/// ����� ���������

#include<map>								
using namespace std;

/// ���������� map, multymap (������� ��� � set - � ����������� ��������� �����)
/// ������ �������� � ����

int  main()

{
	setlocale(LC_ALL, "ru");


	pair<int, string> p(1, "telephone");
	cout << p.first << endl;  // int
	cout << p.second << endl; // string

	map< int, string > myMap;

	myMap.insert(make_pair(3, "telephone"));			/// ��� myMap.insert(pair<int, string> p( 1, "telephone");
	myMap.insert(pair<int, string>(2, "laptop"));

	myMap.emplace(1, "monitor");						/// ������ ������ !!!!!!!!!

	auto it = myMap.find(1);							/// (���� ���� �� ������ - ������ ������ ����, ��� ������ �� �������,  ������� ����� ������ ��������)
	if (it != myMap.end())
		cout << it->second << endl << endl;

	for (auto el : myMap)
		cout << el.first << "  " << el.second << endl;

	cout << myMap[2] << endl;                       /// ���������� [] , � ������� - ����


	cout << endl << endl;


	map< string, int > myMap1;

	myMap1.emplace("Peter", 20009);
	myMap1.emplace("Anna", 2659);
	myMap1.emplace("John", 130);
	myMap1.emplace("Paul", 200453);

	cout << myMap1["Peter"] << endl;

	myMap1["John"] = 1000000;

	myMap1["Lisa"] = 51044;                   /// ���� ��� � ������ - �������

	myMap1.at("Paul") = 3;                   /// �� ��������� ����� ������� ���� ��� ��� � ������, � �������� ����������

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

	///mm[] = �� ���������� ��� ��� ����� �����������

	/// ��� ������ at()



	return 0;


}