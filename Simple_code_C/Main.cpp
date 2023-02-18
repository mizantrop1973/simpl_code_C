#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
using namespace std;


											///������ � ������ ��� ������ ������ fstream

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

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);              ///   "|" - �������  "���"

	if (!fs.is_open())		/// fout.is_open()  ����������   bool , 
	{
		cout << "Error of file's opening" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		string msg;
		char value;
		while (true)
		{
			
			cout << "Choose the action: " << endl <<
				"to write  enter \"W\"" << endl <<
				"to read enter \"R\"" << endl;
			cin >> value;
				
			if (value == 'w' || value =='W')
			{
				msg = "";
				cout << "Enter a message: " << endl;
				SetConsoleCP(1251);							/// ������ ��������� ������� (��� ����������� ������������ ���������)
				//cin >> msg;
				//fs << msg << endl;
				cin.get();									/// !!!!!��������. ���������. ����� ������������ ��������� ������, ��� ������ �����������
				getline(cin, msg, '\n');
				fs << msg << endl;
				SetConsoleCP(866);							/// ���������� ��������� �������  !!!!!!!!!!
				break;
			}
			else if (value == 'r' || value == 'R')
			{
				cout << "Reading of the datas, source:  " + path << endl << endl << endl;
				while (!fs.eof())
				{
					msg = "";
					getline(fs, msg);
					cout << msg <<endl;
				}
				break;
			}
			else
			{
				cout << "Incorrect choice, try again" << endl<<endl<<endl;
			}
			
		}
	}
	fs.close();				/// ��������� ����



										


	return 0;

}