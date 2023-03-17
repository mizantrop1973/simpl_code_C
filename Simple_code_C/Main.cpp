#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<thread>							/// ��� �������
//#include<chrono>							/// ��� ������� (��� ���������� ���������� ������� ������������ ���������)
using namespace std;

class EvenFunctor
{
public:
	EvenFunctor();
	~EvenFunctor();

	void showevenSum()
	{
		cout << "Output sum of even numbers = " << evenSum << endl;
	}

	void showevenCount()
	{
		cout << "Output count of even numbers = " << evenCount << endl;
	}

	void operator()(int value)
	{
		if (value % 2 == 0)
		{
			++evenCount;
			evenSum += value;
		}

	}


private:
	int evenSum = 0;
	int evenCount = 0;

};

EvenFunctor::EvenFunctor()
{
}

EvenFunctor::~EvenFunctor()
{
}


class MyFunctor
{
public:
	MyFunctor();
	~MyFunctor();
	/*void operator()()
	{
		cout << "I am a functor " <<count<< endl;
		++count;
	}*/

	int operator()(int a, int b)
	{
		cout << "I am a functor" << endl;
		return a + b;
	}

private:

	//int count = 0;

};

MyFunctor::MyFunctor()
{
}

MyFunctor::~MyFunctor()
{
}

int  main()

{
	
	MyFunctor f;

	/*f();
	f();
	f();
	f();*/

	int result = f(2, 6);

	int  arr[]{ 1,2,3,4,5,6,7,8,9 };

	EvenFunctor ef;

	for (auto element : arr)
		ef(element);

	ef.showevenCount(); 
	cout << endl << endl;
	ef.showevenSum();

	
	return 0;
 }


