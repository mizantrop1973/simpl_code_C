#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
using namespace std;


															/// ������������� ��� enumcla
//enum PCState                                      /// ����� ��������, ����� � ����� ������
//{
//	OFF,
//	ON,
//	SLEEP
//};


class PC
{
public:
	PC();
	~PC();
	enum PCState
	{
		OFF,
		ON,
		SLEEP
	};
	PCState GetState() { return State; }
	
	void SetState(PCState State){this->State = State;}

	


private:
PCState State;

};

PC::PC()
{
}

PC::~PC()
{
}

enum Speed
{
	MIN=150,
	RECOMEND=600,
	MAX=800,
};


int  main()

{
	setlocale(LC_ALL, "ru");
	
	//PC pc;

	//pc.SetState(PC::PCState::SLEEP);

	///*if (pc.GetState() == PCState::ON)
	//{
	//	cout << "PC is working" << endl;

	//}*/

	//switch (pc.GetState())
	//{
	//case PC::PCState::OFF:
	//	cout << "PC is turned off" << endl;
	//	break;
	//case PC::PCState::ON:
	//	cout << "PC is working" << endl;
	//	break;
	//case PC::PCState::SLEEP:
	//	cout << "PC is sleeping"<< endl;
	//	break;
	//}
	

	Speed sp = Speed::MAX;
	cout << sp << endl;

	return 0;
}