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


															/// ���������� STL. ��������� ��� ������������ ������� array


template<class T>
void PrintList(const list<T>& lst)
{
	for (auto it = lst.cbegin(); it != lst.cend(); ++it)
		cout << *it << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");
	
	array<int, 4> arr{1,2,3,4};

	/*try
	{
		cout << arr.at(11) << endl;						/// ��� ������ �� ������� ������� ����������� ������
	}
	catch (const exception&ex)
	{
		cout << ex.what() << endl;
	}*/



	for(auto i : arr)

		cout << i << endl;							/// ��� ������ �� ������� ������� ����� ���� ���������� ������, � ����� ������


	arr.fill(-1);

	for (auto i : arr)

		cout << i << endl;

	cout << endl << endl;


	cout<<arr.front()<<endl;
	return 0;


 }


