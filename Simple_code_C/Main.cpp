#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
using namespace std;


											///������ � �������

int  main()

{
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt";
	//cin >> path;
	ofstream fout;
	//fout.open("myFile.txt");   /// � ����� ���� ���� ��������� � ����� � ��������, ��� ������ ����� �����
	/*fout.open(path);			///    �������� ��� �������

	if (!fout.is_open())		/// fout.is_open()  ����������   bool , 
	{
		cout << "Error of file's opening" << endl;
	}
	else 
	{
		fout << "These are our datas" << endl;
	}

	fout.close();				/// ��������� ����*/

	fout.open(path, ofstream::app);           /// ���������, �� ��������

	if (!fout.is_open())		/// fout.is_open()  ����������   bool , 
	{
		cout << "Error of file's opening" << endl;
	}
	else
	{
		for (size_t i = 0; i < 7; ++i)
		{
			cout << "Enter a number:" << endl;
			int a;
			cin >> a;
			//fout << endl<< "NEW datas" << endl;
			fout << a << endl;
		}
	}

	fout.close();				/// ��������� ����

	return 0;

}