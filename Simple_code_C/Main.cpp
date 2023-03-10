#include<iostream>							/// ввод-вывод
#include<ctime>								/// врем€
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// €зык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// дл€ изменени€ кодировки консоли
#include<memory>							/// умные указатели
#include<functional>
#include<vector>
using namespace std;


															/// ЋяћЅƒј ‘”Ќ ÷»» / ¬џ–ј∆≈Ќ»я (јнонимные)

void Bar(int a)
{
	if (a%2 ==0)
		cout<< "FOO "<< a << endl;
}


void Foo(int a)

{
	if (a> 10 && a <40)
		cout <<"BAR " << a << endl;

}

//void DoWork4(vector<int>& v, vector<function<void(int)>> f)
//{
//	for (auto el : v)
//	{
//		for (auto &el1 : f)
//			el1(el);
//	}
//}

void DoWork5(vector<int>& v, function<void(int)> f)
{
	for (auto el : v)
		f(el);
}



void Bas(int a)
{
	cout << "BAS " <<  endl;
}

int  main()

{
	setlocale(LC_ALL, "ru");

	//int p = 0;

	//auto f = [&p](int a)												/// квадратные скобки дл€ передачи внешнего контектса
	//{
	//	p = 5;
	//	///return (что будет возвращать ф-ци€), если этого слова нет -  ничего не будет возвращать
	//};

	//f();														/// в 14- ом стандарте разрешили ссылатьс€ на л€мбду ключевым словом auto!!!!

	//auto q = (f)

		auto f1 = [](int a, int b)												/// квадратные скобки дл€ передачи внешнего контектса
	{
		return a + b;
	};

														/// в 14- ом стандарте разрешили ссылатьс€ на л€мбду ключевым словом auto!!!!

	auto q = f1(1, 4);




	vector<int> v{ 1,2,3,4,5,6,7,8,9 };

	//function <void(int)> f1;                       ///этот посредник не нужен



	//f1 = [](int a)										/// это и есть анонимна€ ф-ци€ (сигнатура)
	//{
	//	cout << "anonym function\t" << a << endl;
	//};									

	//DoWork5(v, f1);

	/*DoWork5(v, [](int a)										/// передаем без посредника сразу в вызов функции
		{
			if (a % 2 == 0)
				cout << "Ћ€мбда " << a << endl;
		});*/

	return 0;
}

