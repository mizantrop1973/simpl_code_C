#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
#include<memory>							/// ����� ���������
#include<vector>
#include<list>								/// ���������� LIST
using namespace std;


															/// ���������� STL. LIST (������������� ������)


template<class T>
void PrintList(const list<T>& lst)
{
	for (auto it = lst.cbegin(); it != lst.cend(); ++it)
		cout << *it << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");
	
	list<int> myList;

	myList.push_back(5);										/// ��� �� ���� pop.back(), pop.front(), size, 
	myList.push_front(10);
	myList.push_back(520);

	//myList[0]   - �������� �� ����������

	auto it = myList.begin();

	
	for(auto it = myList.begin();it != myList.end(); ++it)
		cout << *it << endl;

	list<int> myList1{ 1,2,3,4,5,6 };      /// ����� � ��� ����������������

	for (auto it = myList1.begin(); it != myList1.end(); ++it)
		cout << *it << endl;

	PrintList(myList);

	myList.sort();
	PrintList(myList);
	cout << endl << endl;

	list<int> myList2{ 1,2,3,5,2,1,4,8,1,1,1,2,9,6,3,3,2 };
	PrintList(myList2);

	cout << endl << endl;
	myList2.unique();								/// ������� ��������� ������� ���� ������
	PrintList(myList2);

	cout << endl << endl;

	myList2.reverse();
	
	PrintList(myList2);							/// ��������� ���� � �������� �������

	cout << endl << endl;
	myList1.clear();
	PrintList(myList1);

	cout << endl << endl;

	auto i = myList2.begin();					/// �������� ����� �������
	advance(i, 3);
	myList2.insert(i, 100);
	PrintList(myList2);

	cout << endl << endl;

	myList2.erase(i);                 /// ��� ��� ��� �� ������, � ���������, ������� ��������� ����� ��� ������� ������ ������ ����
	myList2.push_back(100);
	PrintList(myList2);

	

	cout << endl << endl;

	myList2.remove(100);           /// ������� ����� ���������� ����� ���� ������
	PrintList(myList2);

	cout << endl << endl;

	myList2.assign(5, 0);           ///  ������� ��� � ��������� ���� - ������ ��������� - ���������� ���������, ������ - �����, ������� ����������� ����
	PrintList(myList2);

	cout << endl << endl;

	myList2.assign(myList.begin(), myList.end());           ///  ������������ ���� ������ � ������
	PrintList(myList2);
	
	
	
	
	return 0;


 }


