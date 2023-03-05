#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<vector>;
using namespace std;




int main()

{
	setlocale(LC_ALL, "ru");

	vector<int>myVector{ 1,2,3,4,5,6 };


	
	vector<int>::iterator it = myVector.begin();    /// долго писать тип

	auto i = myVector.begin();    /// автоматически принимает тот тип. которым инициализируется переменная (в правой части) - идентично выражению выше. но короче

	for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
		cout << *it << endl;

	for (auto it = myVector.begin(); it != myVector.end(); ++it)  /// эквивалентно верхнему примеру но короче
		cout << *it << endl;


	return 0;

}