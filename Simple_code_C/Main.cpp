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
#include<forward_list>	

using namespace std;


															/// ���������� STL. forward_list - ����������� ������!!!


template<class T>
void PrintList(const list<T>& lst)
{
	for (auto it = lst.cbegin(); it != lst.cend(); ++it)
		cout << *it << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");
	
	forward_list<int> fl {1,2,3,4,5};
	
	fl.push_front(55);
	fl.push_front(56);

	/*for (auto el : fl)
		cout << el << endl;*/

	forward_list<int>::iterator i = fl.begin();

	cout << *i << endl;

	cout << endl << endl;

	++i; 
	///--i;   ������, ��� ��� ��� ����������� ������

	fl.insert_after(i, 9999);									/// ��������� ����� ��������  -  �� �� ���� ��� ������ �����������

	for (auto el : fl)
		cout << el << endl;

	cout << endl << endl;

	/// ��� �������� � ������
	forward_list<int>::iterator it = fl.before_begin();			/// ��������� �� "����������" �������
	fl.insert_after(it, 9999);									/// �������������� ������� ����� � ������ �������

	for (auto el : fl)
		cout << el << endl;

	return 0;


 }


