#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
using namespace std;




void main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < argc; ++i)
		cout << argv[i] << endl;  //������ ���� �� ���� �������� - ����� ��������� � ����� � ��������
								  //���� ����������� ����� ��������� � ��������� ������, ����� ����� ������ ����� �������� ����� ���������� ����� (�������� �������)

	system("pause");

}