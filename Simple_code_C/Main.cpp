#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
using namespace std;


											///��������� ����/�����

class Point
{
public:

	Point()
	{
		x = y = z = 0;
	}

	Point(int x, int y, int z )// �����������
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	friend ostream& operator<<(ostream& os, const Point& point);                      /// ����� ������  �������� � ������ ���  friend   !!!!!
	friend istream& operator>>(istream& is, Point& point);

	void Print()
	{
		cout << "\t X = " << x << "\t Y = " << y << "\t Z = " << z << endl << endl;
	}

private:

	int x;
	int y;
	int z;
};

ostream& operator<<(ostream& os, const Point& point)       /// ������ ifstream, ofsream, fstream, cout , cin ������� �������� ������������!!!!!!
{
	os << point.x << "\t" << point.y << "\t" << point.z;
	return os;
}

istream& operator>>(istream& is, Point& point)       /// ������ ifstream, ofsream, fstream, cout , cin ������� �������� ������������!!!!!!
{
	is >> point.x >> point.y >> point.z;
	return is;
}


int  main()

{
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt";

	//Point p(40, 100, 1);

	//cout << p;

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);              ///   "|" - �������  "���"

	if (!fs.is_open())		/// fout.is_open()  ����������   bool , 
	{
		cout << "Error of file's opening" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		//fs << p << "\n";
	}


	Point p;
	//cin >> p;

	while (!fs.eof())
	{
		fs >> p;
		if (fs.eof())
			break;

		cout << p <<endl;
		
	}

	fs.close();				/// ��������� ����							


	return 0;

}