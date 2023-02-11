#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
//#include<string>
using namespace std;

class String
{
public:
	String()
	{
		size = 0;
		char* str = new char[size+1];
		str[0] = '\0';
	}
	~String()
	{
		delete[] str;
	}

	String(const String& other)                   // Конструктор копирования
	{
		this->size = other.size;
		this->str = new char [other.size +1];
		for (int i = 0; i < other.size; ++i)
		{
			this->str[i] = other.str[i];
		}
		str[other.size] = '\0';
	}                

	String& operator = (const String& other)              // Конструктор присваивания
	{
		this->size = other.size;
		if (this->str != nullptr)            //обычно не требуется, так как объект создан уже
			delete[] this->str;
		this->str = new char[other.size+1];
		for (int i = 0; i < other.size; ++i)
		{
			this->str[i] = other.str[i];
		}
		str[other.size] = '\0';

		return *this;
	}

	void operator << (const String& other)              // Конструктор присваивания
	{
		for (int i = 0; i < other.size; ++i)
			cout << other.str[i];
	}

	char* GetStr()
	{
		return str;
	}

	int GetSize()
	{
		return size;
	}

	String& operator = (const char* other)              // Конструктор присваивания
	{
		for (int i = 0; other[i] != '\0'; ++i)
			size = i + 1;
		this->size = size;
		if (this->str != nullptr)            //обычно не требуется, так как объект создан уже
			delete[] this->str;
		this->str = new char[size + 1];
		for (int i = 0; i < size; ++i)
		{
			this->str[i] = other[i];
		}
		str[size] = '\0';

		return *this;
	}

	void Print()
	{
		for (int i = 0; i < size; ++i)
			cout << str[i];
		cout << endl << endl;
	}
private:
	char* str;
	int size;
};




class Human
{

public:
	int age;  //поля класса
	string name;
	int weight;

	void Print()
	{
		cout <<"Имя "<< name << " \n Возраст" << age << " \n Вес " << weight << endl << endl;
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

	Point(int valueX, int valueY) // конструктор
	{
		x = valueX;
		y = valueY;
		cout << this << " constructor" << endl;
	}

	bool operator ==(const Point& other)                               // перегрузка оператора сравнения (равенства)
	{
		return this->x == other.x && this->y == other.y;
	}

	bool operator !=(const Point& other)                               // перегрузка оператора сравнения (неравенства)
	{
		return !(this->x == other.x && this->y == other.y);
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
		cout << this <<" Вызвался конструктор" << endl;
	}



	MyClass(const MyClass &other)                   // Конструктор копирования
	{
		


		this->size = other.size;
		this->data = new int[other.size];
		for (int i = 0; i < other.size; ++i)
		{
			this->data[i] = other.data[i];
		}
		cout << this << " вызвался конструктор копирования " << endl;
	}                //конструктор копирования

	MyClass& operator = (const MyClass& other)              // Конструктор присваивания
	{
		this->size = other.size;
		if (this->data != nullptr)            //обычно не требуется, так как объект создан уже
			delete[] this->data;
		this->data = new int[other.size];
		for (int i = 0; i < other.size; ++i)
		{
			this->data[i] = other.data[i];
		}
		cout << this << " вызвался конструктор присваивания" << endl;

		return *this;
	}



	~MyClass()										// деструктор (только один)         
	{
		
		delete[] data;
		cout <<  this << " Вызвался деструткор" << endl;
	}

private:
	int size;


};

void Foo ()
{
	cout << "Foo начало" << endl;
	MyClass a(1);
	cout << "Foo конец" << endl;

}

void Foo2(MyClass value)  //по значению
{
	cout << "Вызвалась функция Foo" << endl;
}

MyClass Foo3()  //по значению
{
	MyClass temp(2);
	cout << "Вызвалась функция Foo3" << endl;
	return temp;
}




int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");
	/*Human firsthuman;
	firsthuman.age = 30;
	firsthuman.name = "Ivanov Ivan Ivanovich";
	firsthuman.weight = 80;

	firsthuman.Print();*/

	/*Point a;
	a.SetX(5);
	a.SetY(11);
	a.Print();
	cout << a.GetX() << endl;
	a.SetY(5);
	a.Print();

	Point b(7, 66);
	b.Print();*/
	
	/*Point a(1, 9);
	Point b(3, 9);

	bool result = a != b;


	cout << result << endl;*/

	/*CoffeeGrinder a;
	a.Start();

	MyClass a(1);

	MyClass b(2);

	Foo();*/


	/*MyClass a(10);
	MyClass b(2);
	MyClass c(7);
	c = a = b;*/

	//Foo2(a);

	String a;
	a = "hhbbl";

	String b = a;
	

	
	a.Print();
	b.Print();
	
	

	return 0;


}