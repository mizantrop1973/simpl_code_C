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
using namespace std;


															///��������� ����������� STL. 


template<class T>
void PrintList(const list<T>& lst)
{
	for (auto it = lst.cbegin(); it != lst.cend(); ++it)
		cout << *it << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");
	
	
	array<int, 4> arr1{ 1,1,3,4 };
	array<int, 4> arr2{ 1,1,10,0 };

	bool result = (arr1 == arr2);

	cout << result << endl;

	result = (arr1 > arr2);
	cout << result << endl;


	return 0;


 }


