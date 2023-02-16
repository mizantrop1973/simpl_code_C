#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;
								
											/// ����������� ������

class Weapon
{
public:
	
	virtual void Shoot() = 0;            /// ����� ����������� ������� , ���� ���� ���� ���� ����� ����������� �-���, �� ����� �����������
										/// ��� ��� �� ����� ���� ������������ ������, �� ����� ��� �����������
	void Foo()
	{
		cout << "Foo" << endl;
	}

private:

};




class Gun:public Weapon
{
public:
	Gun();
	~Gun();
	void Shoot() override               
	{									
		cout << "BANG!!" << endl;		
	}
private:

};

Gun::Gun()
{
}

Gun::~Gun()
{
}

class SubMachineGun :public Gun
{
public:
	SubMachineGun();
	~SubMachineGun();

	void Shoot() override                      ///override �� ����������, �� �� ������������ ������������ ��������� ������ Shoot
	{
		cout << "BANG!!  BANG!!  BANG!!" << endl;
	}

private:

};

SubMachineGun::SubMachineGun()
{
}

SubMachineGun::~SubMachineGun()
{
}

class Bazooka:public Weapon
{
public:
	Bazooka();
	~Bazooka();
	void Shoot() override                      ///override �� ����������, �� �� ������������ ������������ ��������� ������ Shoot
	{
		cout << "BARABOOOM!!!" << endl;
	}

private:

};

Bazooka::Bazooka()
{
}

Bazooka::~Bazooka()
{
}

class Knife: public Weapon
{
public:
	Knife();
	~Knife();
	void Shoot() override                      ///� ����������� ������������ ������ ����������� ����� (�����) ������ ���� ����������� ���������
	{
		cout << "Vjuuuhhh" << endl;
	}
private:

};

Knife::Knife()
{
}

Knife::~Knife()
{
}

class Player
{
public:
	Player();
	~Player();

	void Shoot(Weapon* weapon)
	{
		weapon->Shoot();
	}


private:

};

Player::Player()
{
}

Player::~Player()
{
}


int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	Gun gun;
	SubMachineGun machinegun;
	Bazooka bazooka;
	Knife knife;

	Player player;

	player.Shoot(&machinegun);
	player.Shoot(&gun);

	player.Shoot(&bazooka);
	player.Shoot(&knife);
	
	knife.Foo();
	return 0;


}