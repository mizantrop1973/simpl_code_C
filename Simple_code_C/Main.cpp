#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
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

	ifstream fin;

	fin.open(path);
	if (!fin.is_open())		/// fout.is_open()  ����������   bool , 
	{
		cout << "Error of file's opening" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		char str1[50]{};
		char ch;
		string str;
		//while (fin.get(ch))						/// ����������� ���������, � �.�. �������� ����� (�������)
		while(!fin.eof())							/// eof ��������� ������  �� ��������� �����
		{
			//cout << ch;
			str = "";								/// �������� ������ �������� ������ ��������� ������
			//fin >> str;								/// ��������. ����� �������� ������ �� ������� �������! 
			//getline(fin, str/*,";"*/);				/// ��������� ������ �� "����������" - ������, �������������� ��������, �� ��������� -  \n
			fin.getline(str1, 50);					/// ��������� ����� ������ ifstream, ������������ ���������� ��������, � str1 ������ ���� ��������
			
			
			cout << str1<<endl;						/// ��������� ���� �� �����, ��� ���� ���� ���� � ����� ������� ������ - 
													/// ���������� ��� ��� � ��������� �������

			
		}
	}
	
	fin.close();
	return 0;

}