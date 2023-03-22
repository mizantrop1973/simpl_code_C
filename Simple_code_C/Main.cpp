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
										/// ������������� ����������������, ����� ������ � ������







class MyClass
{
public:
	MyClass();
	~MyClass();
	void DoWork()
	{
		this_thread::sleep_for(chrono::milliseconds(3000));
		cout << "ID stream =  " << this_thread::get_id() << "============================\tDoWork STARTED\t========================================" << endl;
		this_thread::sleep_for(chrono::milliseconds(5000));
		cout << "ID stream =  " << this_thread::get_id() << "============================\tDoWork STOPED\t=========================================" << endl;
	}


	void DoWork2(int a)
	{
		this_thread::sleep_for(chrono::milliseconds(3000));
		cout << "ID stream =  " << this_thread::get_id() << "=============================\tDoWork2 STARTED\t========================================" << endl;
		this_thread::sleep_for(chrono::milliseconds(5000));
		cout << "DoWork2 value of the parameter\t" << a << endl;
		cout << "ID stream =  " << this_thread::get_id() << "=============================\tDoWork2 STOPED\t=========================================" << endl;
	}


	int Sum(int a, int b)
	{

		this_thread::sleep_for(chrono::milliseconds(3000));
		cout << "ID stream =  " << this_thread::get_id() << "==============================\tSum STARTED\t========================================" << endl;
		this_thread::sleep_for(chrono::milliseconds(5000));
		this_thread::sleep_for(chrono::milliseconds(3000));
		cout << "ID stream =  " << this_thread::get_id() << "==============================\tSum STOPED\t=========================================" << endl;
		return a + b;

	}

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}


int  main()

{
	setlocale(LC_ALL, "ru");


	MyClass m;

	int result;

	thread t([&]()
		{
			result = m.Sum(2, 5);
		});

	thread t1(&MyClass::DoWork, m);						/// ��������� �������� ���� �� ����� ���������� ��������


	thread t2(&MyClass::DoWork2, m, 5);					/// ���� ����� ���������� ��������

	for (size_t i = 1; i <= 10; ++i)
	{
		cout << "ID stream =  " << this_thread::get_id() << "==============================\tmain works\t" << i << "========================================" << endl;
		this_thread::sleep_for(chrono::milliseconds(3000));
	}


	cout << "Result\t" << result << endl;

	/*thread t1([&]()									/// ������� ����� ������
		{
			m.DoWork();
		}); */




	t2.join();
	t1.join();
	t.join();

	return 0;
}