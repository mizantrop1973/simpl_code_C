
#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// для изменения кодировки консоли
#include<memory>							/// умные указатели
#include<vector>
#include<list>								/// подключаем LIST
#include<forward_list>	
#include<array>			
#include<deque>								/// двухсторонняя очередь

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


															///Контейнер deque двухсторонняя очередь - гибрид между вектором и двухсторонним списком
															/// по сути двухсвязанный список векторов

	int c = 6;


};


template<class T>
void PrintList(const list<T>& lst)
{
	for (auto it = lst.cbegin(); it != lst.cend(); ++it)
		cout << *it << endl;
}


int  main()

{
	setlocale(LC_ALL, "ru");
	
	deque<int> dq{ 1,2,3,4,5 };

	dq.begin();
	


	return 0;


 }

=======
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



