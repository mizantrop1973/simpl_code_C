#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;
								
											/// ¬џ«ќ¬ ¬»–“”јЋ№Ќќ√ќ ћ≈“ќƒј ¬  Ћј——≈ Ќј—Ћ≈ƒЌ» ≈

     


class Gun
{
public:
	Gun(string sound);
	~Gun() ;			
	

	virtual string GetSound()
	{
		return this->sound;
	}
private:

	string sound;

};

Gun::Gun(string sound)
{
	this->sound = sound;
}

Gun::~Gun()
{
	
}

class SubMachineGun:public Gun
{
public:
	SubMachineGun(string sound);
	~SubMachineGun();

	string GetSound() override
	{
		return "BUH" + ::Gun::GetSound() + "BUH";   /// синтаксис ссылки на метод базового класса (иначе ссылка идет на наследник)
	}

private:

};

SubMachineGun::SubMachineGun(string sound) :Gun(sound)    /// конструктор делегирует конструктру базового класса, 
{															///  и это указываетс€ в определении, а не в объ€влении

}

SubMachineGun::~SubMachineGun()
{
}



class Player
{
public:
	Player();
	~Player();

	void Shoot(Gun*gun)
	{
		cout << gun->GetSound()<<endl;
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

	Gun a("BABAH");

	Player b;

	b.Shoot(&a);

	SubMachineGun c("BBBBB");

	b.Shoot(&c);




	
	return 0;		    

}