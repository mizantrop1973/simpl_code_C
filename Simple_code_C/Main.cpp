#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
#include<memory>							/// ����� ���������

#include<set>								/// 
using namespace std;


															/// ������������� ��������� SET, multiset
															/// ����������� �������� - �������� ������ 
															/// ������ ���������� ��������

int  main()

{
	setlocale(LC_ALL, "ru");
	
	set<int> mySet{2,6,9,7,1};       /// �������� ������ � ����������� ���������� , � ������� �����������

	mySet.insert(5);
	mySet.insert(1);
	mySet.insert(12);

	mySet.insert(4);
	mySet.insert(-1);

	mySet.insert(5);

	for (auto& item : mySet)
		cout << item << endl;

	cout << endl << endl;

	for (int i = 0; i < 20; ++i)
		mySet.insert(rand() % 10);

	for (auto& item : mySet)
		cout << item << endl;

	cout << endl << endl;

	/// ����� ��������� , �������� � ������� - ����� ��������� ������� � set

	set<int> mySet1{ 12,34,56,2,-1,99,37 };

	auto it = mySet1.find(10);      /// ���������� �������� �� ��� ������� ��� ��� �����, ��� �� ��������� ����� ���������� "�������" (��� �� ��� �� ����)

	auto it1 = mySet1.find(2);

	int value = 56;

	if (mySet1.find(value) != mySet1.end())
		cout << "Number " << value << " was found";
	else
		cout << "Number " << value << " wasn't found";

	cout << endl << endl;

	mySet1.erase(199);
	mySet1.insert(77);                  /// ������������ 2 ��������, 1 - ��������, 2 -bool (1 ���� ��������, 0, ���� ����� ����� ��� ����)

	for (auto& item : mySet1)
		cout << item << endl;

	cout << endl << endl;

	multiset<int> ms{ 2,3,4,6,8,0,3,3,4,4,6 };     /// ����� ��������� �����

	for (auto& item : ms)
		cout << item << endl;

	cout << endl << endl;

	ms.find(3);
	ms.lower_bound(4);								/// ���������� ������ ��������� �������� (��������, �� ���� ���������)
	 
	auto s = ms.upper_bound(4);								/// ������ ��� ��������� ������� ����� 4 �� �����������.

	ms.erase(3);
	ms.insert(4);

	for (auto& item : ms)
		cout << item << endl;

	cout << endl << endl;

	cout << *s << endl;

	cout << endl << endl;

	auto d = ms.equal_range(4);


	//cout << *d << endl;
	return 0;


 }


