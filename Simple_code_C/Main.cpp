#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;

								/// ��������� � ����������

class Cap								/// ������ ��������� 
{
public:
	string GetColor()
	{
		return color;
	}



private:
	string color = "red";
};


class Human
{
public:
	void Think()
	{
		brain.Think();      /// �������������  !!!!!!!
	}

	void InspectTheCap()     
	{
		cout << "��� ����� " << cap.GetColor() << " �����." << endl;
	}

private:

	class Brain								/// ������ ���������� (������� �������� ���������� ������ � ��������, 
	{										/// ��� ���� ���� ����� �� �������������)
	public:
		void Think()						
		{
			cout << "� �����!" << endl;
		}

	private:

	};

	Brain brain;
	Cap cap;
};

class Model
{
public:
	void InspectTheCap()
	{
		cout << "����� �� �������� " << cap.GetColor() << " �����." << endl;
	}

private:

	Cap cap;
};

int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	Human human;

	human.Think();
	human.InspectTheCap();
	Model model;
	model.InspectTheCap();
	

	return 0;
}