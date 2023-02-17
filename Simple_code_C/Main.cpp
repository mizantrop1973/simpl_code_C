#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;

class Car
{
public:
	Car();
	~Car();
	string str = "Поле класса машина";
	void Drive()
	{
		cout << "Я еду!" << endl;
	}

	void Use()
	{
		cout << "Я еду!" << endl;
	}

private:

};

Car::Car()
{
	cout << "Create Car" << endl;
}

Car::~Car()
{
	cout << "Delete Car" << endl;
}

class Airplain
{
public:
	Airplain();
	~Airplain();
	string str2 = "Поле класса самолет";
	void Fly()
	{
		cout << "Я лечу!" << endl;
	}

	void Use()
	{
		cout << "Я лечу!" << endl;
	}

private:

};

Airplain::Airplain()
{
	cout << "Create Airplane" << endl;
}

Airplain::~Airplain()
{
	cout << "Delete Airplain" << endl;
}

class FlyingCar : public Car , public Airplain   /// конструторы вызываются в порядке наследования!!!!
{
public:
	FlyingCar();
	~FlyingCar();

private:

};

FlyingCar::FlyingCar()
{
	cout << "Create FlyingCar" << endl;
}

FlyingCar::~FlyingCar()
{
	cout << "Delete FlyingCar" << endl;
}

int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	Car c;
	c.Drive();
	
	Airplain a;
	a.Fly();

	FlyingCar b;
	b.Drive();
	b.Fly();

	((Car)b).Use();
	
	((Airplain)b).Use();
	

	Car* ptrC = &b;

	Airplain* ptrA = &b;

	return 0;


}