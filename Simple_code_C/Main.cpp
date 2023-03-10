#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// для изменения кодировки консоли
#include<memory>							/// умные указатели
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

