#include<iostream>							/// ââîä-âûâîä
#include"Sum.h"
#include"myClass.h"

using namespace std;


															/// ÈÍÎÃÎÔÀÉËÎÂÛÉ ÏĞÎÅÊÒ


int  main()

{
	setlocale(LC_ALL, "ru");


	myNamespace::myClass a;
	a.printMessage("hello!");
	return 0;
 }


