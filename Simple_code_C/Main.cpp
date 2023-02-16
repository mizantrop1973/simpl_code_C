#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;
								
											/// ЧИСТО ВИРТУАЛЬНЫЙ ДЕСТРУКТОР

class Weapon
{
public:
	Weapon();
	virtual ~Weapon() = 0;					/// чисто виртуальный деструктор 


	virtual void Shoot() = 0;            /// чисто виртуальная функция , если есть хоть одна чисто виртуальная ф-ция, то класс абстрактный
										/// тут так же могут быть определенные методы, но класс уже абстрактный
	void Foo()
	{
		cout << "Foo" << endl;
	}

private:

};

Weapon::Weapon() 
{
	
};					


Weapon::~Weapon() {};           /// в чисто виртуальном деструкторе обязательно выносить определение деструктора в данном синтаксисе


class Gun:public Weapon
{
public:
	Gun();
	~Gun() override;			/// переопределение виртуального деструктора
	void Shoot() override               
	{									
		cout << "BANG!!" << endl;		
	}
private:

};

Gun::Gun()
{
	cout << "выделена динамическая память Gun" << endl;
}


Gun::~Gun()
{
	cout << "освобождена динамическая память Gun" << endl;
}

//class SubMachineGun :public Gun
//{
//public:
//	SubMachineGun();
//	~SubMachineGun();
//
//	void Shoot() override                      ///override не обязателен, но он контролирует идентичность сигнатуры метода Shoot
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
//	cout << "выделена динамическая память SubMachineGun" << endl;
//}
//
//SubMachineGun::~SubMachineGun()
//{
//	cout << "освобождена динамическая память SubMachineGun" << endl;
//}
//
//class Bazooka:public Weapon
//{
//public:
//	Bazooka();
//	~Bazooka();
//	void Shoot() override                      ///override не обязателен, но он контролирует идентичность сигнатуры метода Shoot
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
//	cout << "выделена динамическая память Bazooka" << endl;
//}
//
//Bazooka::~Bazooka()
//{
//	cout << "освобождена динамическая память Bazooka" << endl;
//}
//
//class Knife: public Weapon
//{
//public:
//	Knife();
//	~Knife();
//	void Shoot() override                      ///в наследниках абстрактного класса виртуальный метод (чисто) должен быть обязательно определен
//	{
//		cout << "Vjuuuhhh" << endl;
//	}
//private:
//
//};
//
//Knife::Knife()
//{
//	cout << "выделена динамическая память Knife" << endl;
//}
//
//Knife::~Knife()
//{
//	cout << "освобождена динамическая память Knife" << endl;
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


	///Weapon weapon;   /// так как метод стрелять закомментирован, у нас только виртуальный деструктор
	return 0;		    /// он делает класс абстрактным

}