#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
using namespace std;


															/// ����������� ����� exception
class MyException:public exception
{
public:
	MyException(const char* msg, int dataState);
	~MyException();

	int GetDataState() 
	{ 
		return dataState; 
	}

	
private:
	int dataState;

};

MyException::MyException(const char* msg, int dataState):exception(msg)
{
	this->dataState = dataState;
}

MyException::~MyException()
{
}

void Foo(int value)
{
	if (value < 0)
		throw exception("����� ������ 0 !!!");


	if (value == 1)
		throw MyException("����� ����� 1", value );
	

	cout << "Value = " << value << endl;
}

int  main()

{
	setlocale(LC_ALL, "ru");
	/*string path = "myFile.xt";								/// ����������� ����� ��� ����� ����������
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);    /// ������ ����� ����������� �������� � fstream, ifstream � ��., ������� �� ��������� ����� ������

	try
	{
		cout << "Trying to open file" << endl;

		fin.open(path);

		cout << "File is opend successfully" << endl;
	}
	catch (const /*std::exception*/ /*ifstream::failure& ex)*/      /// �������� �� ����� ������������ �����
	/*{
		cout << ex.what() << endl;
		cout << ex.code() << endl;								/// ���� ��� ������
		cout << "������ �������� �����" << endl;
	}*/

	

	try
	{
		Foo(1);
	}
	//catch (const int ex)
	//catch (const char* ex)
	catch (MyException& ex)
	{
		//cout << "We catched " << ex << endl;
		
		cout << "We catched "  << ex.what()<<endl;
		cout << "Data state is :" << ex.GetDataState() << endl;

	}

	catch (exception& ex)
	{
		//cout << "We catched " << ex << endl;

		cout << "We catched " << ex.what() << endl;
		

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