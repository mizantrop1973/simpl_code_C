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
#include<array>			
#include<deque>								/// ������������� �������
using namespace std;


															///��������� deque ������������� ������� - ������ ����� �������� � ������������� �������
															/// �� ���� ������������� ������ ��������


template<class T>
void PrintList(const list<T>& lst)
{
	for (auto it = lst.cbegin(); it != lst.cend(); ++it)
		cout << *it << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");
	
	deque<int> dq{ 1,2,3,4,5 };

	dq.begin();
	


	return 0;


 }


