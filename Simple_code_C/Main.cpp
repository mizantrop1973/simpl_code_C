#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;
								
											/// ����� ����������� ����������

class Weapon
{
public:
	Weapon();
	virtual ~Weapon() = 0;					/// ����� ����������� ���������� 


	virtual void Shoot() = 0;            /// ����� ����������� ������� , ���� ���� ���� ���� ����� ����������� �-���, �� ����� �����������
										/// ��� ��� �� ����� ���� ������������ ������, �� ����� ��� �����������
	void Foo()
	{
		cout << "Foo" << endl;
	}

private:

};

Weapon::Weapon() 
{
	
};					


Weapon::~Weapon() {};           /// � ����� ����������� ����������� ����������� �������� ����������� ����������� � ������ ����������


class Gun:public Weapon
{
public:
	Gun();
	~Gun() override;			/// ��������������� ������������ �����������
	void Shoot() override               
	{									
		cout << "BANG!!" << endl;		
	}
private:

};

Gun::Gun()
{
	cout << "�������� ������������ ������ Gun" << endl;
}


Gun::~Gun()
{
	cout << "����������� ������������ ������ Gun" << endl;
}

//class SubMachineGun :public Gun
//{
//public:
//	SubMachineGun();
//	~SubMachineGun();
//
//	void Shoot() override                      ///override �� ����������, �� �� ������������ ������������ ��������� ������ Shoot
//	{
//		cout << "BANG!!  BANG!!  BANG!!" << endl;
//	}
//
//private:
//
//};
//
//SubMachineGun::SubMachineGun()
//{
//	cout << "�������� ������������ ������ SubMachineGun" << endl;
//}
//
//SubMachineGun::~SubMachineGun()
//{
//	cout << "����������� ������������ ������ SubMachineGun" << endl;
//}
//
//class Bazooka:public Weapon
//{
//public:
//	Bazooka();
//	~Bazooka();
//	void Shoot() override                      ///override �� ����������, �� �� ������������ ������������ ��������� ������ Shoot
//	{
//		cout << "BARABOOOM!!!" << endl;
//	}
//
//private:
//
//};
//
//Bazooka::Bazooka()
//{
//	cout << "�������� ������������ ������ Bazooka" << endl;
//}
//
//Bazooka::~Bazooka()
//{
//	cout << "����������� ������������ ������ Bazooka" << endl;
//}
//
//class Knife: public Weapon
//{
//public:
//	Knife();
//	~Knife();
//	void Shoot() override                      ///� ����������� ������������ ������ ����������� ����� (�����) ������ ���� ����������� ���������
//	{
//		cout << "Vjuuuhhh" << endl;
//	}
//private:
//
//};
//
//Knife::Knife()
//{
//	cout << "�������� ������������ ������ Knife" << endl;
//}
//
//Knife::~Knife()
//{
//	cout << "����������� ������������ ������ Knife" << endl;
//}

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

	/*Gun gun;
	SubMachineGun machinegun;
	Bazooka bazooka;
	Knife knife;

	Player player;

	player.Shoot(&machinegun);
	player.Shoot(&gun);
	player.Shoot(&bazooka);
	player.Shoot(&knife);
	
	knife.Foo();*/

	Weapon* gunptr = new Gun;
	delete gunptr;


	///Weapon weapon;   /// ��� ��� ����� �������� ���������������, � ��� ������ ����������� ����������
	return 0;		    /// �� ������ ����� �����������

}