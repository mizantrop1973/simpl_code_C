#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<thread>							/// ��� �������
#include<chrono>							/// ��� �������
using namespace std;


															/// ������ � ������������� ����������������, ������� ���������� ������






int Sum(int a, int b)													
{
	
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout <<"ID stream =  "<< this_thread::get_id()<< "============================\tSum STARTED\t========================================" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));

	this_thread::sleep_for(chrono::milliseconds(3000));
	cout << "ID stream =  " << this_thread::get_id() << "============================\tSum STOPED\t=========================================" << endl;
	return a + b;
	
}


int  main()

{
	setlocale(LC_ALL, "ru");

	

	int result;

	///thread th(Sum, 2, 5);									/// �� ������ ��������

	thread th([&result]() {result = Sum(2, 5); });


	

	for (size_t i = 0;i<10; i++)     
	{
		cout << "Stream's ID = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();
	cout << result << endl;

	return 0;
 }


