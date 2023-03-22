#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<thread>							/// для потоков
#include<vector>
#include<list>
#include<numeric>							/// для accumulate
//#include<chrono>							/// для времени (при включенной библиотеке потоков подключается автоматом)
using namespace std;


														/// АЛГОРИТМЫ STL. equal and mismatch

class Person
{
public:
	Person(string name, int age, double score);
	~Person();

	bool operator()(const Person& p)
	{
		return p.score > 180;
	}

	string name;
	double score;
	int age;

private:

};

Person::Person(string name, int age, double score)
{
	this->name = name;
	this->age = age;
	this->score = score;

}

Person::~Person()
{
}



int  main()

{

	setlocale(LC_ALL, "ru");


	

	int arr1[]{ 1,4,7,9,34,-77,45,42,11,29,10, 12};
	int arr2[]{ 1,4,7,9,34,-77,45,42,11,29 ,10,11};      

	bool result = equal(begin(arr1), end(arr1), begin(arr2));    /// будет некорректно работать если вторая коллекция будет длиннееб
																/// но в пределах длинны первой коллекции данные будуь совпадать

	bool result1 = equal(begin(arr1), end(arr1), begin(arr2), end(arr2));  /// не знаю зачем лектор говорил вообще о первом варианте!!!!!!!!

	cout << result << endl;
	cout << result1 << endl;

	vector<int> v1{ 1,4,7,9,34,-77,45,42,11,29,1 };    /// можно сравнивать вектор и массив легко

	bool result2 = equal(begin(arr1), end(arr1), begin(v1), end(v1));  


	cout << result2 << endl;                      /// при сравнении equal важен порядок. Если есть сомнения в порядке - надо сортировать

	vector<int> v2{ 1,4,7,9,34,-77,45,42,11,1,29 }; /// отличается от первого порядком последних членов например

	sort(begin(v1), end(v1));     /// после сортировки будут равны

	sort(begin(v2), end(v2));

	for (auto element : v2)
		cout << element << endl;

	bool result3 = equal(begin(v1), end(v1), begin(v2), end(v2));
	cout << result3 << endl;

	auto result4 = mismatch(begin(arr1), end(arr1), begin(arr2), end(arr2));   /// возвращает итераторы на несовпадающие элементы

	
	if (result4.first == end(arr1) && result4.second == end(arr2))
		cout << "Collections are equal" << endl;
	else
		cout << "Collections are not equal" << endl;
	
	
	
	cout << *result4.first << "\t" << *result4.second << endl;



		return 0;
}




