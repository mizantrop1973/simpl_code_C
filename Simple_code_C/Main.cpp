#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;
								
											/// �����������
class Gun
{
public:
	Gun();
	~Gun();
	virtual void Shoot()                 /// ��� ����� ������������ ������ �� ������� ����� � �� ��������� � ��������� 
	{									///  ������ ����� �������� ����� �������� ������, � � ��� - � ����������� �� ���� �� �����
		cout << "BANG!!" << endl;		///  ����� ������ (��. main)
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

class Bazooka:public Gun
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

class Player
{
public:
	Player();
	~Player();

	void Shoot(Gun* gun)
	{
		gun->Shoot();
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
	gun.Shoot();

	Gun* weapon = &gun;

	Gun* a = &machinegun;

	

	a->Shoot();
	weapon->Shoot();

	Player player;

	player.Shoot(&machinegun);
	player.Shoot(&gun);

	player.Shoot(&bazooka);
	
	return 0;


}