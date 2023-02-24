#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// для изменения кодировки консоли
using namespace std;


															/// ПРОМТРАНСТВО ИМЕН С++
								                         
namespace NS1
{
	void Foo()
	{
		cout << "ST1" << endl;
	}
}

namespace NS2
{
	void Foo()
	{
		cout << "ST2" << endl;
	}
}

namespace NS3
{
	namespace NS2
	{
		void Foo()
		{
			cout << "ST23" << endl;
		}
	}
}





int  main()

{
	setlocale(LC_ALL, "ru");

	NS1::Foo();

	NS2::Foo();

	NS3::NS2::Foo();
	
	std::cout << "test" << endl;
	cout << "test" << endl;
	
	return 0;
}