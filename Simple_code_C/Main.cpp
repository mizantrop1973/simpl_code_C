#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<thread>							/// ��� �������
#include<vector>
#include<list>
#include<numeric>							/// ��� accumulate
//#include<chrono>							/// ��� ������� (��� ���������� ���������� ������� ������������ ���������)
using namespace std;


/// ��������� STL. equal � ����������

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




