#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<thread>							/// ��� �������
#include<chrono>							/// ��� �������
using namespace std;


															/// ������������� ����������������, thread

void DoWork()														/// ����� ������ ����� ��� �� ����� ��� � � main!!!!
{
	for (size_t i = 0; i < 10; ++i)
	{
		cout << "ID of the stream = " << this_thread::get_id() << "\tDoWork\t" <<i<< endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
}


int  main()

{
	setlocale(LC_ALL, "ru");



	/*cout << "START MAIN" << endl;

	/// ������������ ������ �������� ������

	this_thread::sleep_for(chrono::milliseconds(3000));

	/// ������������� �������� ������

	cout << this_thread::get_id() << endl;

	cout << "END MAIN" << endl << endl << endl;

	///------------------------------------------------------------------------------------------------------------------------------------

	DoWork();

	for (size_t i = 0; i < 10; ++i)
	{
		cout << "ID of the stream = " << this_thread::get_id() << "\tmain\t" <<i<< endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	cout << "END MAIN" << endl << endl << endl;

	///------------------------------------------------------------------------------------------------------------------------------------*/

	thread th(DoWork);						/// �������� ������� ������ � �������� ��� ������� �� ��������� (��� ������� - ���������, ��� � �������!!!!)

	thread th1(DoWork);

	/// ����������� � ��������� � ������������� ������������

	///th.detach();								/// ��������� ����� ����������� ����������, �� ������ ���� �������� �������� �����, 
											    ///����� ���������������, �� ��� �������� �����
	/// ���

	/// th.join();                            /// ���������� ���, ��� ��� ����� ��������� ��������� ������� ������ ����� ���������� ���������

	for (size_t i = 0; i < 10; ++i)
	{
		cout << "ID of the stream = " << this_thread::get_id() << "\tmain\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();								  /// ���� ��������� �����

	th1.join();
	cout << "END MAIN" << endl << endl << endl;

	///------------------------------------------------------------------------------------------------------------------------------------

	return 0;
 }


