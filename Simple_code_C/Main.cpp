#include<iostream>							/// ����-�����
#include"Sum.h"
#include"myClass.h"

using namespace std;


															/// ������������� ������


int  main()

{
	setlocale(LC_ALL, "ru");


	myNamespace::myClass a;
	a.printMessage("hello!");
	return 0;
 }


