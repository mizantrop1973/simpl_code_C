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


															/// ���������� STL. VECTOR


int  main()

{
	setlocale(LC_ALL, "ru");
	
	vector<int> myVector;
	myVector.push_back(2);
	myVector.push_back(33);
	myVector.push_back(25);
	myVector.push_back(218);
	myVector[0] = 1000;

	//cout << myVector[10] << endl;								 /// ����� ���� ���� ����, ���� ����� ������

	/*try
	{
		cout << myVector.at(10) << endl;                          /// ����� at  � ����� ������ �� ���� ����������� ������� � ����� ������, �� �� ���������
	}
	catch (const std::out_of_range & ex)
	{
		cout << ex.what() << endl << endl;
	}*/

	for (int i = 0; i < myVector.size(); ++i)
		cout << myVector[i] << endl;							/// ����� size  - ������


	//myVector.clear();											/// ������� vector

	cout << myVector.size() << endl << endl;
	
	myVector.pop_back();

	for (int i = 0; i < myVector.size(); ++i)
		cout << myVector[i] << endl;

	cout << myVector.size() << endl << endl;

	vector<int>  myVector2 = { 1,2,3,4,5 };
	myVector2.push_back(10);
	myVector2.push_back(30);
	myVector2.push_back(40);
	myVector2.push_back(100);


	/*for (int i = 0; i < myVector2.size(); ++i)
		cout << myVector2[i] << endl;*/

	//myVector.capacity();
	cout << myVector2.capacity()  << endl;                   /// ��� � �������� ���������� ����� - ��� ���������� ��������� ������ ������� 
															/// ���������� ������ � �������������� ������� - ������� �� ������������ ������������� 
															/// � ����������� �� ������� ������� � ��.
	myVector2.reserve(100);									/// ��� ����� ������ ������������
															
	cout << myVector2.capacity() << endl;

	myVector2.shrink_to_fit();
	cout << myVector2.capacity() << endl;					///������������ ������
	
	vector<int> myVector3(20);								/// ������������ ������� ��� �������������
	for (int i = 0; i < myVector3.size(); ++i)				/// ��� ����� ��������� ���������������� ������
		cout << myVector3[i] << endl;	
	vector<int> myVector4(20,100);							/// ��� ����� ��������� ���������������� ������ ������ � �������
	for (int i = 0; i < myVector4.size(); ++i)				
		cout << myVector4[i] << endl;

	cout<<myVector4.empty()<<endl<<endl<<endl;				/// bool - ������ �� �������

	myVector4.resize(10);									/// ������ ������ �������, ���� ����������� �� ���������� ������
	for (int i = 0; i < myVector4.size(); ++i)
		cout << myVector4[i] << endl;
	cout << endl;
	myVector4.resize(5,200);								/// ������ ������ �������, ���� ����������� �� ���������� ������ ���������� � �������		
	for (int i = 0; i < myVector4.size(); ++i)
		cout << myVector4[i] << endl;

	return 0;



		return 0;
 }


