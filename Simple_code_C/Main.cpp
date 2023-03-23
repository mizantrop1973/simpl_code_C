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


													/// ��������� STL. for///each  - ��������� �������� ���������



void Foo(int a)
{
	cout << a << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");


	int arr[]{ 1,4,8,2,5,9,0 };

	for_each(begin(arr), end(arr), Foo);
	
	cout << endl << endl << endl;

	for (auto element : arr)
	{
		cout << element << endl;
	}

	cout << endl << endl << endl;

	for_each(begin(arr), end(arr), [](int a) 
		{
			cout << a << endl;
		});



	return 0;
}




