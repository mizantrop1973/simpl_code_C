#include<iostream>							/// ����-�����
#include"Sum.h"
#include"myClass.h"
using namespace std;


															/// ������������� ������


int  main()

{
	setlocale(LC_ALL, "ru");

	cout<<Sum(2, 3)<<endl;

	myNamespace::myClass a;
	a.printMessage("hello world!");

	return 0;
 }


