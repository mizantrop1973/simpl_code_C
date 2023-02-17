#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;
													/// ���������� - ����������� �����, � ������� ��� ������ ����� �����������

class IBicycle
{
public:
	IBicycle();
	~IBicycle();
	void virtual TwistTheWeel() = 0;
	void virtual Ride() = 0;

private:

};

IBicycle::IBicycle()
{
}

IBicycle::~IBicycle()
{
}

class Human
{
public:
	Human();
	~Human();
	void RideOn(IBicycle& bicycle)
	{
		cout << "������ ����" << endl;
		bicycle.TwistTheWeel();
		cout << "�������" << endl;
		bicycle.Ride();
	}
private:

};

Human::Human()
{
}

Human::~Human()
{
}

class SimpleBicycle : public IBicycle           ///���������� ����������
{
public:
	SimpleBicycle();
	~SimpleBicycle();
	void  TwistTheWeel() override
	{
		cout << "����� TwistTheWeel() SimpleBicycle" << endl;
	}
	void virtual Ride() override
	{
		cout << "����� Ride() SimpleBicycle" << endl;
	}



private:

};

SimpleBicycle::SimpleBicycle()
{
}

SimpleBicycle::~SimpleBicycle()
{
}

class SportBicycle : public IBicycle
{
public:
	SportBicycle();
	~SportBicycle();
	void  TwistTheWeel() override
	{
		cout << "����� TwistTheWeel() SportBicycle" << endl;
	}
	void virtual Ride() override
	{
		cout << "����� Ride() SportBicycle" << endl;
	}


private:

};

SportBicycle::SportBicycle()
{
}

SportBicycle::~SportBicycle()
{
}

int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	SimpleBicycle sb;

	Human h;
	h.RideOn(sb);

	SportBicycle sportb;
	h.RideOn(sportb);

	return 0;


}