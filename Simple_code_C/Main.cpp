#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
#include<memory>							/// ����� ���������
#include<functional>
#include<vector>
using namespace std;


															/// ������ ������� / ��������� (���������)

void Bar(int a)
{
	if (a%2 ==0)
		cout<< "FOO "<< a << endl;
}


void Foo(int a)

{
	if (a> 10 && a <40)
		cout <<"BAR " << a << endl;

}

//void DoWork4(vector<int>& v, vector<function<void(int)>> f)
//{
//	for (auto el : v)
//	{
//		for (auto &el1 : f)
//			el1(el);
//	}
//}

void DoWork5(vector<int>& v, function<void(int)> f)
{
	for (auto el : v)
		f(el);
}



void Bas(int a)
{
	cout << "BAS " <<  endl;
}

int  main()

{
	setlocale(LC_ALL, "ru");

	//int p = 0;

	//auto f = [&p](int a)												/// ���������� ������ ��� �������� �������� ���������
	//{
	//	p = 5;
	//	///return (��� ����� ���������� �-���), ���� ����� ����� ��� -  ������ �� ����� ����������
	//};

	//f();														/// � 14- �� ��������� ��������� ��������� �� ������ �������� ������ auto!!!!

	//auto q = (f)

		auto f1 = [](int a, int b)												/// ���������� ������ ��� �������� �������� ���������
	{
		return a + b;
	};

														/// � 14- �� ��������� ��������� ��������� �� ������ �������� ������ auto!!!!

	auto q = f1(1, 4);




	vector<int> v{ 1,2,3,4,5,6,7,8,9 };

	//function <void(int)> f1;                       ///���� ��������� �� �����



	//f1 = [](int a)										/// ��� � ���� ��������� �-��� (���������)
	//{
	//	cout << "anonym function\t" << a << endl;
	//};									

	//DoWork5(v, f1);

	/*DoWork5(v, [](int a)										/// �������� ��� ���������� ����� � ����� �������
		{
			if (a % 2 == 0)
				cout << "������ " << a << endl;
		});*/

	return 0;
}

