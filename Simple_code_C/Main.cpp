#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
#include<memory>							/// ����� ���������
using namespace std;


															/// UNION
union MyUnion
{
	short int a;
	int b;
	float c;


};



int  main()

{
	setlocale(LC_ALL, "ru");


	MyUnion u;
	u.a = 5;
	u.b = 40000;
	u.c = 43.54;
	
	return 0;
}

