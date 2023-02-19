#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// для изменения кодировки консоли
using namespace std;


											///ПОТОКОВЫЙ ВВОД/ВЫВОД

class Point
{
public:

	Point()
	{
		x = y = z = 0;
	}

	Point(int x, int y, int z )// конструктор
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	friend ostream& operator<<(ostream& os, const Point& point);                      /// метод вывода  объявить в классе как  friend   !!!!!
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

ostream& operator<<(ostream& os, const Point& point)       /// классы ifstream, ofsream, fstream, cout , cin связаны цепочкой наследования!!!!!!
{
	os << point.x << "\t" << point.y << "\t" << point.z;
	return os;
}

istream& operator>>(istream& is, Point& point)       /// классы ifstream, ofsream, fstream, cout , cin связаны цепочкой наследования!!!!!!
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
	fs.open(path, fstream::in | fstream::out | fstream::app);              ///   "|" - битовое  "или"

	if (!fs.is_open())		/// fout.is_open()  возвращает   bool , 
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

	fs.close();				/// закрываем файл							


	return 0;

}