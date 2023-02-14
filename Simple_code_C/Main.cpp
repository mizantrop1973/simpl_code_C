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
		cout << "ID " << this->id << "\t" << "¬озраст: " << this->age << "\t" 
			<< "»м€: " << this->name << "\t" << "¬ес: " << this->weight << endl << endl;
	}

	static int GetCount()						/// —татический метод - в нем можно обращатьс€ только к статическим переменным класса
	{
		return Count;
	}
	
	static void ChangeWeight(Human& human, int weight) /// ѕример как в статическом методе мен€ть нестатические пол€
	{
		human.weight = weight;
	}
private:
	int age;  //пол€ класса
	string name;
	int weight;
	int id;
	static int Count;						/// переносим статическую переменную в private и делаем геттер rfr STATIC метод;
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

	friend void ChangeX(Point& value);    // дружественна€ функци€
	

private:
	int x;
	int y;
};
class Pixel;

int Point::Count = 0;                           /// инициализаци€ статичной переменной должна быть вне класса!!!!

class Image
{
public:
	void GetImageInfo()
	{
		for (int i = 0; i < LENGTH; ++i)
		{
			cout << "#"<<i<<" "<<pixels[i].GetInfo() << endl;
		}
	}
	Pixel pix (3,4,5);
	


///private:                                            если разместить вложенный класс в public секции, то мы сможем работать с ним из main напр€мую
	class Pixel
	{
	public:
		Pixel(int r, int g, int b)
		{
			this->r = r;
			this->g = g;
			this->b = b;

		}

		string GetInfo()
		{
			return "Pixel: \tr = "+to_string(r)+"\t\tg = "+to_string(g)+"\t\tb = "+to_string(b);
		}

	private:
		int r;
		int g;
		int b;


	};

	static const int LENGTH = 5;

	Pixel pixels[LENGTH]
	{
		Pixel(0,4,64),
		Pixel(4,14,10),
		Pixel(111,4,24),
		Pixel(244,244,14),
		Pixel(111,179,64)

	};
private:


};


int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	Image img;
	img.GetImageInfo();

	Image::Pixel pixel(3, 56, 124);                   /// работа с вложенным классом напр€мую когда он в секции public
	
	cout << pixel.GetInfo() << endl;


	//Point b(7, 66);
	//Point a;
	//Point c(2, 3);
	//
	///// Point::Count = 3;                 неинициализированна€ переменна€ static дает ошибку

	//cout << b.Count << endl;  

	////или

	//cout << Point::Count << endl;

	//a.Print();
	//b.Print();
	//c.Print();

	//Human d(25, "hbh", 78);
	//Human e(44, "okepw", 90);
	//Human f(34, "jvioerv", 65);

	//d.Print();
	//e.Print();
	//f.Print();
	//cout<< f.GetCount()<<endl;

	//cout << Human::GetCount() << endl;

	//d.ChangeWeight(d, 100);

	//d.Print();

	//Human::ChangeWeight(e, 200);
	//e.Print();
	//	

	//
	return 0;
}