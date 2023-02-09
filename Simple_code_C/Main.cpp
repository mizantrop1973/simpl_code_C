#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;

class Human
{

public:
	int age;  //поля класса
	string name;
	int weight;

	void Print()
	{
		cout <<"Имя "<< name << " \n Возраст" << age << " \n Вес " << weight;
	}
};

class Point
{
public:
	int x;
	int y;
};





int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	Human firsthuman;
	firsthuman.age = 30;
	firsthuman.name = "Ivanov Ivan Ivanovich";
	firsthuman.weight = 80;

	firsthuman.Print();
	
	return 0;

}