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


															/// ������������ ������ ������� std::function - ��������� �� �������
//
//void Foo1()
//
//{
//	cout << "Foo()  " << endl;
//}

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


//void DoWork(vector<int>& v)
//{
//	for (auto el : v)
//		Foo(el);
//}
//
//void DoWork1(vector<int>& v)
//{
//	for (auto el : v)
//		Bar(el);
//}

void DoWork3(vector<int>& v, function<void(int)> f)
{
	for (auto el : v)
		f(el);
}

void DoWork4(vector<int>& v, vector<function<void(int)>> f)
{
	for (auto el : v)
	{
		for (auto &el1 : f)
			el1(el);
	}
}

void Bas(int a)
{
	cout << "BAS " <<  endl;
}

int  main()

{
	setlocale(LC_ALL, "ru");

	/*function<void()> f;										/// function  - ��������� ��� ����� �-���� � ���� ����������!!!
	f = Foo1;

	f();

	function<void(int)> f1;

	f1 = Bar;

	f1(50);

	DoWork(v);
	DoWork1(v);

	cout << endl << endl << endl;*/

	vector <int> v{ 1,2,3,54,89,62,14,74 };
	vector< function<void(int) >> f;
	f.emplace_back(Foo);
	f.emplace_back(Bar);
	f.emplace_back(Bas); 

	DoWork4(v, f);

	return 0;
}

