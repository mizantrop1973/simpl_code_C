#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
#include<memory>							/// ����� ���������
#include<vector>
using namespace std;


															/// ���������


int  main()

{
	setlocale(LC_ALL, "ru");
	
	/*int arr[]{ 2,6,9 };
	cout << arr[1] << endl;
	cout << *(arr + 1) << endl;*/

	vector<int> myVector{ 1, 2, 3, 4, 5, 6 };
	cout << myVector[1] << endl;                         /// � ����������� ����������� ��������[] �� ����������

	vector<int>::iterator it;							/// vector<int>::iterator - ��� ��� ������, it  - ���������� ��������
	
	it = myVector.begin();								/// ���� ������ � ������� �������� �������

	cout << *it << endl;			

	*it = 1000;

	cout << *it << endl;

	++it;

	cout << *it << endl;

	--it;

	myVector.end();								///������� ��������� ������������ �� ��������� ����� ���������� �������

	for (it = myVector.begin(); it != myVector.end(); ++it)
		cout << *it << endl;

	/// ����������� ���������
	

	vector<int>::const_iterator it1 = myVector.begin();/// �� �� ������������ ������������ ��������� �� �������� �������������� ���� ��������

	//*it1 = 7;									///  ����� ������
	
	vector<int>::const_iterator it2 = myVector.cbegin();     /// � ���� ����� ����� ���������� ����������� ��������


	for (it2 = myVector.cbegin(); it != myVector.cend(); ++it)
		cout << *it << endl;


	for ( vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); ++i)
		cout << *i << endl;



	return 0;
 }


