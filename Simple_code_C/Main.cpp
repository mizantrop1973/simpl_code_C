#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;
											/// ���������� ������������ (�����������)

//class Component
//{
//public:
//	Component(string companyName);     /// � ����� ���������� �������� �� ������� ��� (���� ���������� ��� ������ ��������). 
//	~Component();						/// �� ���� ���� ����, ������� ������������� � �� ���������� ������ ���, �� ��� �������� �������������
//	string companyName;
//private:
//
//};
//
//Component::Component(string companyName)
//{
//	cout << "constructor Component " << endl;
//	this->companyName = companyName;
//}
//
//Component::~Component()
//{
//}
//
//class GPU : public Component
//{
//public:
//	GPU(string companyName);
//	~GPU();
//
//private:
//
//};
//
//GPU::GPU (string companyName) : Component(companyName)
//{
//	cout << "constructor GPU " << endl;
//}
//
//GPU::~GPU ()
//{
//}
//
//class Memory :public Component
//{
//public:
//	Memory(string companyName);
//	~Memory();
//
//private:
//
//};
//
//Memory::Memory(string companyName) : Component(companyName)
//{
//	cout << "constructor Memory " << endl;
//}
//Memory::~Memory()
//{
//}
//
//class GraphicCard : public GPU, public Memory
//
//{
//public:
//	GraphicCard(string GPUCompanyName, string MemoryCompanyName);
//	~GraphicCard();
//
//
//private:
//
//};
//
//GraphicCard::GraphicCard(string GPUCompanyName, string MemoryCompanyName):GPU(GPUCompanyName), Memory(MemoryCompanyName)
//{
//	cout << "constructor GraphicCard " << endl;
//}
//
//GraphicCard
//::~GraphicCard()
//{
//}
//
//int main(int argc, char* argv[])
//
//{
//	setlocale(LC_ALL, "ru");
//
//	GraphicCard gc("AMD", "Sumsung");
//
//	return 0;
//
//
//}

class Character
{
public:
	Character();
	~Character();

	int HP;										/// ��� ��� ���� ����� ������������� � ������ ����������
												/// ����� - ����� ���������� ���� �� �� ������, � �� ������� ������
private:										/// ��� ����� ������������ ����������� ������������

};

Character::Character()
{
	cout << "constructor Character" << endl;
}

Character::~Character()
{
}


class Orc:public virtual Character						/// ��� ��� ��� ���������
{
public:
	Orc();
	~Orc();

private:

};

Orc::Orc()
{
	cout << "constructor Orc" << endl;
}

Orc::~Orc()
{
}


class Warrior: virtual public Character
{
public:
	Warrior();
	~Warrior();

private:

};

Warrior::Warrior()
{
	cout << "constructor Warrior" << endl;
}

Warrior::~Warrior()
{
}

class OrcWarrior:public Orc, public Warrior
{
public:
	OrcWarrior();
	~OrcWarrior();

private:

};

OrcWarrior::OrcWarrior()
{
	cout << "constructor OrcWarrior" << endl;
}

OrcWarrior::~OrcWarrior()
{
}

int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	OrcWarrior ow;
	

	return 0;


}