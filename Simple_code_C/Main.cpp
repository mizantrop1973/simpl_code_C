#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
using namespace std;




void main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < argc; ++i)
		cout << argv[i] << endl;  //выдает хотя бы один параметр - адрес экзешника в папке с проектом
								  //если скопировать адрес экзешника в командную строку, можно через пробел можно передать массу параметров любых (набираем символы)

	system("pause");

}