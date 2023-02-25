#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
using namespace std;


															/// �����_���������_Smart_pointers
template<class T>															
class SmartPointer
{
public:
	SmartPointer(T* ptr);
	~SmartPointer();

	T& operator *()
	{
		return *ptr;
	}


private:
	T* ptr;
};

template<class T>
SmartPointer<T>::SmartPointer(T*ptr)
{
	this->ptr = ptr;
	cout << "Constructor" << endl;
}
template<class T>
SmartPointer<T>::~SmartPointer()
{
	delete ptr;
	cout << "Destructor" << endl;
}



int  main()

{
	setlocale(LC_ALL, "ru");

	int* ptr = new int(5);
	cout << *ptr << endl;
	delete ptr;

	SmartPointer<int> pointer = new int(10);
	*pointer = 154857;
	cout << *pointer << endl;

	return 0;
}