#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<vector>;
#include<list>
using namespace std;


														/// ЦИКЛ for... each  - не стандарт!!!! И не поддерживается
														/// есть алгоритм for_each  - не путать (algoritm)
														/// остался так называемый range-based цикл (цикла для диапазона) - ниже в коде. СТАНДАРТ!



template<typename T>
void PrintList(const list<T>& lst)
{
	for (auto i = lst.cbegin(); i != lst.cend(); ++i)							/// укоротили и упростили код 
		cout << *i << endl;
}


int main()

{
	setlocale(LC_ALL, "ru");

	int arr[]={ 1,2,3,4,5 };

	for(auto var: arr)									/// передается копия, если мы что то меняем, то массив не меняется
	{
		var = -1;
		cout << var << endl;
	}

	for (auto &var : arr)									/// передается ссылка, массив меняется
	{
		var = 100;
		cout << var << endl;
	}
	


	for (const auto& var : arr)									/// передается ссылка, массив меняется
	{
		///var = 100;											/// ошибка
		cout << var << endl;
	}
	
	list<int> myList{ 9,8,7,6,5 };
	
	PrintList(myList);
	
	return 0;






}