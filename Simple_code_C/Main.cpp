#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
using namespace std;


											///������ � ������ ������� ������ �� �����/� ����

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

	int GetX()
	{
		return x;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}

	int GetY()
	{
		return y;
	}

	void SetY(int y)
	{
		this->y = y;
	}

	void Print()
	{
		cout << "\t X = " << x << "\t Y = " << y << "\t Z = " << z << endl << endl;
	}

private:
	int x;
	int y;
	int z;
};


int  main()

{
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt";
	//cin >> path;
	//ofstream fout;
	//fout.open("myFile.txt");   /// � ����� ���� ���� ��������� � ����� � ��������, ��� ������ ����� �����
	///*fout.open(path);			///    �������� ��� �������

	//if (!fout.is_open())		/// fout.is_open()  ����������   bool , 
	//{
	//	cout << "Error of file's opening" << endl;
	//}
	//else 
	//{
	//	fout << "These are our datas" << endl;
	//}

	//fout.close();				/// ��������� ����*/

	//fout.open(path, ofstream::app);           /// ���������, �� ��������

	//if (!fout.is_open())		/// fout.is_open()  ����������   bool , 
	//{
	//	cout << "Error of file's opening" << endl;
	//}
	//else
	//{
	//	for (size_t i = 0; i < 7; ++i)
	//	{
	//		cout << "Enter a number:" << endl;
	//		int a;
	//		cin >> a;
	//		//fout << endl<< "NEW datas" << endl;
	//		fout << a << endl;
	//	}
	//}

	//fout.close();				/// ��������� ����

	//ifstream fin;

	//fin.open(path);
	//if (!fin.is_open())		/// fout.is_open()  ����������   bool , 
	//{
	//	cout << "Error of file's opening" << endl;
	//}
	//else
	//{
	//	cout << "File is open" << endl;
	//	char str1[50]{};
	//	char ch;
	//	string str;
	//	//while (fin.get(ch))						/// ����������� ���������, � �.�. �������� ����� (�������)
	//	while(!fin.eof())							/// eof ��������� ������  �� ��������� �����
	//	{
	//		//cout << ch;
	//		str = "";								/// �������� ������ �������� ������ ��������� ������
	//		//fin >> str;								/// ��������. ����� �������� ������ �� ������� �������! 
	//		getline(fin, str/*,";"*/);				/// ��������� ������ �� "����������" - ������, �������������� ��������, �� ��������� -  \n
	//		//fin.getline(str1, 50);				/// ��������� ����� ������ ifstream, ������������ ���������� ��������, � str1 ������ ���� ��������
	//		
	//		
	//		cout << str << endl;					/// ��������� ���� �� �����, ��� ���� ���� ���� � ����� ������� ������ - 
	//												/// ���������� ��� ��� � ��������� �������
	//	}
	//}
	//
	//fin.close();

	/*Point point(0, 0, 0);
	point.Print();

	ofstream fout;
	fout.open(path, ofstream::app);
	
	if (!fout.is_open())		/// fout.is_open()  ����������   bool , 
	{
		cout << "\t Error of file's opening" << endl;
	}
	else
	{
		cout << "\t File is open" << endl;
		fout.write((char*)&point, sizeof(Point));
	}

	fout.close();				/// ��������� ����*/

	ifstream fin;
	fin.open(path);
	if (!fin.is_open())		/// fout.is_open()  ����������   bool , 
	{
		cout << "Error of file's opening" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		Point point1;
		while (fin.read((char*)&point1, sizeof(Point)))       /// ��������� ���� ������
		{
			point1.Print();
		}
	}
	fin.close();


	return 0;

}