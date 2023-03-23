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


/// АЛГОРИТМЫ STL. equal с предикатом

class Point
{
public:
	Point(int x, int y);
	~Point();


	int x, y;
private:
};

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}

int  main()

{

	setlocale(LC_ALL, "ru");


	vector<Point> arr1{ Point(20,3),Point(4,8),Point(0,10) };

	vector<Point> arr2{ Point(1,3),Point(4,8),Point(0,10) };

	bool result = equal(begin(arr1), end(arr1), begin(arr2), end(arr2), [](const Point & p1, const Point & p2) 
		{
			return  p1.x == p2.x && p1.y == p2.y;
		});


	cout << result << endl;

	return 0;
}




