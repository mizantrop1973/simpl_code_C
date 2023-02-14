#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;

class Point;


class Human
{
	static int Count;
public:
	Human(int age, string name, int weight)
	{
		this->age = age;
		this->name = name;
		this->weight = weight;
		++Count;
		id = Count;		 
	}

	void Print()
	{
		cout << "ID " << this->id << "\t" << "Возраст: " << this->age << "\t" << "Имя: " << this->name << "\t" << "Вес: " << this->weight << endl << endl;
	}
	
private:
	int age;  //поля класса
	string name;
	int weight;
	int id;
};

int Human::Count = 1000000;

class Point
{
public:
	static int Count;

	Point()
	{
		x = 0;
		y = 0;
		cout << this << " constructor" << endl;
		++Count;
	}

	Point(int valueX, int valueY) // конструктор
	{
		x = valueX;
		y = valueY;
		++Count;
		cout << this << " constructor" << endl;
	}

	Point operator + (const Point& other)
	{
		Point temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;
	}

	int GetX()
	{
		return x;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}

	int GetY()
	{
		return y;
	}

	void SetY(int y)
	{
		this->y = y;
	}

	void Print()
	{
		cout << "X = " << x << "\t Y = " << y << endl << endl;
	}

	Point& operator ++()  // префиксный инкремент
	{
		++this->x;
		++this->y;
		return *this;
	}

	Point& operator ++(int value)  // постфиксный инкремент
	{
		Point temp(*this);
		this->x++;
		this->y++;
		return temp;
	}

	friend void ChangeX(Point& value);    // дружественная функция
	

private:
	int x;
	int y;
};

int Point::Count = 0;                           /// инициализация статичной переменной должна быть вне класса!!!!


int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	Point b(7, 66);
	Point a;
	Point c(2, 3);
	
	/// Point::Count = 3;                 неинициализированная переменная static дает ошибку

	cout << b.Count << endl;  

	//или

	cout << Point::Count << endl;

	a.Print();
	b.Print();
	c.Print();

	Human d(25, "hbh", 78);
	Human e(44, "okepw", 90);
	Human f(34, "jvioerv", 65);

	d.Print();
	e.Print();
	f.Print();
		

	
	
}