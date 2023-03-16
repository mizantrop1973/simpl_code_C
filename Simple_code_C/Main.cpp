#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<thread>							/// для потоков
#include<chrono>							/// для времени
using namespace std;

//
//															/// ЛЯМБДА ВЫРАЖЕНИЯ И ВОЗВРАТ РЕЗУЛЬТАТА ВЫПОЛНЕНИЯ ПОТОКА
//
//
//
//
//
//
//int  Sum(int a, int b)													
//{
//	
//	this_thread::sleep_for(chrono::milliseconds(3000));
//	cout <<"ID stream =  "<< this_thread::get_id()<< "============================\tSum STARTED\t========================================" << endl;
//	this_thread::sleep_for(chrono::milliseconds(5000));
//
//	this_thread::sleep_for(chrono::milliseconds(3000));
//	cout << "ID stream =  " << this_thread::get_id() << "============================\tSum STOPED\t=========================================" << endl;
//
//	return a + b;
//}
//
//
//int  main()
//
//{
//	setlocale(LC_ALL, "ru");
//
//	int result;
//	thread t (Sum, 2, 5);
//
//	//cout << "Sum result" << result << endl;
//
//	for (size_t i = 0;i<10; i++)     
//	{
//		cout << "Stream's ID = " << this_thread::get_id() << "\tmain works\t" << i << endl;
//		this_thread::sleep_for(chrono::milliseconds(500));
//	}
//
//	t.join();
//
//
//	return 0;
// }
//

//class Geometry
//{
//public:
//	Geometry();
//	~Geometry();
//	virtual void visit (GetArea &viss) = 0;
//
//private:
//
//};
//
//Geometry::Geometry()
//{
//}
//
//Geometry::~Geometry()
//{
//}
//
//
//class Triangle: public Geometry
//{
//public:
//	Triangle(int a, int b, int c);
//	~Triangle();
//	void visit(GetArea& viss)
//	{
//		cout << a + b + c << endl;
//	}
//private:
//	int a;
//	int b;
//	int c;
//};
//
//Triangle::Triangle(int a, int b, int c) : a(a), b(b), c(c)
//{
//
//}
//
//Triangle::~Triangle()
//{
//}
//
//class Square:public Geometry
//{
//public:
//	Square(int a, int b);
//	~Square();
//	void visit(GetArea& viss)
//	{
//		cout << a + b + a + b << endl;
//	}
//
//private:
//	int a;
//	int b;
//
//};
//
//Square::Square(int a, int b) : a(a), b(b)
//{
//}
//
//Square::~Square()
//{
//}
//
//class Circle:public Geometry
//{
//public:
//	Circle(int r);
//	~Circle();
//	void visit(GetArea& viss)
//	{
//		cout << 2*r*3<< endl;
//	}
//private:
//	int r;
//};
//
//Circle::Circle(int r) : r(r)
//{
//}
//
//Circle::~Circle()
//{
//}
//
//
//class GetArea 
//{
//public:
//	GetArea();
//	~GetArea();
//	int getLength(int a, int b, int c)
//	{
//		cout << a + b + c << endl;
//	}
//	int getLength(int a, int b)
//	{
//		cout << 2*(a + b) << endl;
//	}
//	int getLength(int r)
//	{
//		cout << 6*r << endl;
//	}
//
//
//private:
//
//};
//
//GetArea::GetArea()
//{
//}
//
//GetArea::~GetArea()
//{
//}
//
//int main()
//{
//	Geometry* geo;
//	Triangle* tri = new Triangle(1, 1, 1);
//	Square* sq = new Square(2, 2);
//	Circle* cq = new Circle(3);
//	geo = tri;
//	GetArea viss;
//	geo->visit(&viss);
//	geo = sq;
//	geo->visit(&viss);
//	geo = cq;
//	geo->visit(&viss);
//	
//	
//	
//	
//	return 0;
//}

class IProduction
{
public:
	IProduction();
	~IProduction();
	virtual void release() = 0;

private:

};

IProduction::IProduction()
{
}

IProduction::~IProduction()
{
}

class Car : public IProduction
{
public:
	Car();
	~Car();
	void release() override
	{
		cout << "A new auto have been constructed" << endl;
	}

private:

};

Car::Car()
{
}

Car::~Car()
{
}

class Truck : public IProduction
{
public:
	Truck();
	~Truck();
	void release() override
	{
		cout << "A new truck have been constructed" << endl;
	}
private:

};

Truck::Truck()
{
}

Truck::~Truck()
{
}

class IworkShop

{
public:
	IworkShop();
	~IworkShop();
	virtual IProduction* create() = 0;

private:

};

IworkShop::IworkShop()
{
}

IworkShop::~IworkShop()
{
}

class CarWorkShop:public IworkShop
{
public:
	CarWorkShop();
	~CarWorkShop();
	IProduction* create() override
	{
		return new Car();
	}

private:

};

CarWorkShop::CarWorkShop()
{
}

CarWorkShop::~CarWorkShop()
{
}

class TruckWorkShop:public IworkShop
{
public:
	TruckWorkShop();
	~TruckWorkShop();
	IProduction* create() override
	{
		return new Truck();
	}

private:

};

TruckWorkShop::TruckWorkShop()
{
}

TruckWorkShop::~TruckWorkShop()
{
}
int main()
{

	IworkShop* creator = new CarWorkShop();
	IProduction* car = creator->create();

	creator = new TruckWorkShop();
	IProduction* truck = creator->create();

	car->release();
	truck->release();
	return 0;
}