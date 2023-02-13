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
	void paintPoint(Point& point);       // � C++ ����������� �������� ���������� ������������� ������ ������� ������� ��� ������
	void ClearPoint(Point& point);
	
	
private:
	int age;  //���� ������
	string name;
	int weight;

	void Print()
	{
		cout <<"��� "<< name << " \n �������" << age << " \n ��� " << weight << endl << endl;
	}
};

class Point
{
public:

	Point()
	{
		x = 0;
		y = 0;
		cout << this << " constructor" << endl;
	}

	Point(int valueX, int valueY) // �����������
	{
		x = valueX;
		y = valueY;
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

	Point& operator ++()  // ���������� ���������
	{
		++this->x;
		++this->y;
		return *this;
	}

	Point& operator ++(int value)  // ����������� ���������
	{
		Point temp(*this);
		this->x++;
		this->y++;
		return temp;
	}

	friend void ChangeX(Point& value);    // ������������� �������
	friend void Human::paintPoint(Point& point);  // ������������� �������

private:
	int x;
	int y;
};







class CoffeeGrinder
{
private:
	bool CheckVoltage()
	{
		return true;
	}


public:
	void Start()
	{
		if (CheckVoltage())
			cout << " VjuHHHHH" << endl;
		else
			cout << " Beep Beep" << endl;
		

	}
};

class MyClass
{
public:	
	int* data;
	//int* data;
	     

	MyClass(int size)                                 
	{
		this->size = size;
		this->data = new int[size];
		for (int i = 0; i < size; ++i)
		{
			data[i] = i;
		}
		cout << this <<" �������� �����������" << endl;
	}



	MyClass(const MyClass &other)                   // ����������� �����������
	{
		


		this->size = other.size;
		this->data = new int[other.size];
		for (int i = 0; i < other.size; ++i)
		{
			this->data[i] = other.data[i];
		}
		cout << this << " �������� ����������� ����������� " << endl;
	}                //����������� �����������

	MyClass& operator = (const MyClass& other)              // ����������� ������������
	{
		this->size = other.size;
		if (this->data != nullptr)            //������ �� ���������, ��� ��� ������ ������ ���
			delete[] this->data;
		this->data = new int[other.size];
		for (int i = 0; i < other.size; ++i)
		{
			this->data[i] = other.data[i];
		}
		cout << this << " �������� ����������� ������������" << endl;

		return *this;
	}



	~MyClass()										// ���������� (������ ����)         
	{
		
		delete[] data;
		cout <<  this << " �������� ����������" << endl;
	}

private:
	int size;


};

void Foo ()
{
	cout << "Foo ������" << endl;
	MyClass a(1);
	cout << "Foo �����" << endl;

}

void Foo2(MyClass value)  //�� ��������
{
	cout << "��������� ������� Foo" << endl;
}

MyClass Foo3()  //�� ��������
{
	MyClass temp(2);
	cout << "��������� ������� Foo3" << endl;
	return temp;
}

class TestClass                     //���������� ��������� �������������� []
{
public:
	int& operator [](int index)
	{
		return arr[index];
	}
	

private:
	int arr[5]{5,44,55,77,99};
};

void ChangeX(Point& value)  // ������������� ������� ����� ��������� ��������� �� ������ �������, ��� ��� ��������������� ��� 
{							//  �������������
	value.x = -1;
}

class Cls                                  //����� ����������� ������� �� ������
{
public:
	Cls();
	~Cls();

	void PrintMessage();

private:

};

Cls::Cls()
{
}

Cls::~Cls()
{
}

void Cls::PrintMessage()
{
	cout << "Hello" << endl;
}

void Human::paintPoint(Point& point)
{
	cout << "X = " << point.x << "Y = " << point.y << endl;
}


int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	// �������� � Human

	/*Human firsthuman;
	firsthuman.age = 30;
	firsthuman.name = "Ivanov Ivan Ivanovich";
	firsthuman.weight = 80;

	firsthuman.Print();*/

	//�������� � Point

	/*Point a;
	a.SetX(5);
	a.SetY(11);
	a.Print();
	Point  d = ++a;
	d.Print();
	a.Print();
	d = a++;
	d.Print();
	a.Print();

	cout << a.GetX() << endl;
	a.SetY(5);
	a.Print();*/

	Point b(7, 66);

	Human a;
	a.paintPoint(b);
	/*b.Print();

	Point c = a + b;

	c.Print();

	ChangeX(a);     // ������������� �-���
	a.Print();*/

	// �������� � CoffeeGrinder
	
	/*CoffeeGrinder a;
	a.Start();*/

	// �������� � MyClass

	/*MyClass a(1);

	MyClass b(2);

	Foo();

	MyClass a(10);
	MyClass b(2);
	MyClass c(7);
	c = a = b;

	//Foo2(a);*/

	// �������� � Test
	/*int arr[]{ 5,6,7,8,9 };
	TestClass a;

	cout << a[1];
	return 0;*/

	/*Cls a;
	a.PrintMessage();*/
}