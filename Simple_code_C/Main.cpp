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


															/// ������. ������ ���������








int  main()

{
	setlocale(LC_ALL, "ru");

	int a = 55;

	auto f = [a]()
	{
		cout << a << endl;
	};
	
	f();

	return 0;
 }


