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



int  main()

{
	setlocale(LC_ALL, "ru");
	string path = "myFile.xt";								/// ����������� ����� ��� ����� ����������
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);    /// ������ ����� ����������� �������� � fstream, ifstream � ��., ������� �� ��������� ����� ������

	try
	{
		cout << "Trying to open file" << endl;
		
		fin.open(path);

		cout << "File is opend successfully" << endl;
	}
	catch (const /*std::exception*/ ifstream::failure& ex)      /// �������� �� ����� ������������ �����
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "������ �������� �����" << endl;
	}





	//fs.open(path, fstream::in | fstream::out | fstream::app);              ///   "|" - �������  "���"

	//if (!fs.is_open())		/// fout.is_open()  ����������   bool , 
	//{
	//	cout << "Error of file's opening" << endl;
	//}
	//else
	//{
	//	cout << "File is open" << endl;
	//	string msg;
	//	char value;
	//	while (true)
	//	{
	//		
	//		cout << "Choose the action: " << endl <<
	//			"to write  enter \"W\"" << endl <<
	//			"to read enter \"R\"" << endl;
	//		cin >> value;
	//			
	//		if (value == 'w' || value =='W')
	//		{
	//			msg = "";
	//			cout << "Enter a message: " << endl;
	//			SetConsoleCP(1251);							/// ������ ��������� ������� (��� ����������� ������������ ���������)
	//			//cin >> msg;
	//			//fs << msg << endl;
	//			cin.get();									/// !!!!!��������. ���������. ����� ������������ ��������� ������, ��� ������ �����������
	//			getline(cin, msg, '\n');
	//			fs << msg << endl;
	//			SetConsoleCP(866);							/// ���������� ��������� �������  !!!!!!!!!!
	//			break;
	//		}
	//		else if (value == 'r' || value == 'R')
	//		{
	//			cout << "Reading of the datas, source:  " + path << endl << endl << endl;
	//			while (!fs.eof())
	//			{
	//				msg = "";
	//				getline(fs, msg);
	//				cout << msg <<endl;
	//			}
	//			break;
	//		}
	//		else
	//		{
	//			cout << "Incorrect choice, try again" << endl<<endl<<endl;
	//		}
	//		
	//	}
	//}
	//fs.close();				/// ��������� ����



										


	return 0;

}