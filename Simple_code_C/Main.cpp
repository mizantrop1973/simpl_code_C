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


															/// ������������� ����������������, �������� ���������� � �����






void DoWork(int a, int b, string msg)														
{
	cout << msg << endl;
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout << "============================\tDoWorked STARTED\t========================================" << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
	cout << "a  +  b  =  " << a + b << endl;
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout << "============================\tDoWorked STOPED\t=========================================" << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");

	thread th(DoWork, 2,3, "Sum");              /// �������� ���������� � ����� - ����������� ��������� ���������� � ���� ����������

	for (size_t i = 0;true; i++)     /// ���������� ������
	{
		cout << "Stream's ID = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();

	return 0;
 }


