#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;

								/// Агрегация и композиция

class Cap								/// ПРИМЕР АГРЕГАЦИИ 
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
		brain.Think();      /// ДЕЛЕГИРОВАНИЕ  !!!!!!!
	}

	void InspectTheCap()     
	{
		cout << "Моя кепка " << cap.GetColor() << " цвета." << endl;
	}

private:

	class Brain								/// ПРИМЕР КОМПОЗИЦИИ (жесткая привязка вложенного класса к внешнему, 
	{										/// без него этот класс не функционирует)
	public:
		void Think()						
		{
			cout << "Я думаю!" << endl;
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
		cout << "Кепка на манекене " << cap.GetColor() << " цвета." << endl;
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