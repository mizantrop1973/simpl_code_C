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


															/// ������������� ����������������, ������� ���������� �� ������ �� ������






void Sum(int a, int b, int &p)													
{
	
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout <<"ID stream =  "<< this_thread::get_id()<< "============================\tSum STARTED\t========================================" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
	p = a + b;
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout << "ID stream =  " << this_thread::get_id() << "============================\tSum STOPED\t=========================================" << endl;

	
}


int  main()

{
	setlocale(LC_ALL, "ru");

	int p = 0;

	///thread th (Sum,2,3, p);              /// �������� ���������� � ����� - ����������� ��������� ���������� � ���� ����������

	thread th(Sum, 2, 3, std::ref(p));    ///��� ��� ���� !!!!!!!!!!!!!!!!!!!!!

	for (size_t i = 0;i<10; i++)     /// ���������� ������
	{
		cout << "Stream's ID = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();
	cout << "a  +  b  =  " << p << endl;     /// ����� ������, ��� ��� � ������ � ������ ������� �������� ���������� � ������� ��� ����� �� ��������

	return 0;
 }


