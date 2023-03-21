#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;
								/// МОДИФИКАТОРЫ ДОСТУПА ПРИ НАСЛЕДОВАНИИ///
class A
{
public:							/// при каждом  модификаторе доступа наследования поле меняет расположение в соответствующей секции 
	A();						/// в сответствии с модификтором наследования. 
	~A();										
	int a = 2;

private:						/// при всех модификаторах доступа наследования поле будет  private 

	int b = 3;

protected:						/// поле либо остается protected , либо (при модификаторе доступа private) становится private

	int c = 6;

};

A::A()
{
}

A::~A()
{
}


class B : protected A
{
public:
	B();
	~B();

	void Print()
	{
		cout << a << endl;
		///cout << b << endl;                ///private поля родительского класса недоступны в наследнике
		cout << c << endl;					///protected поля родительского класса доступны в наследнике
	} 

private:

};

B::B()
{
}

B::~B()
{
}


int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	B b;

	///cout << b.a<<endl;
	///cout << b.b<<endl;                          private и protected поля родительского класса недоступны нигде
	///cout << b.c<<endl;
	
	b.Print();										/// через метод наследника можно получить дотсуп к public и protected полям, но не к private

	
	return 0;


}