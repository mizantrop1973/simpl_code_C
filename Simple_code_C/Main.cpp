#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
#include<memory>							/// ����� ���������
using namespace std;


															/// �����_���������_Smart_pointers
															/// auto_ptr, unique_ptr, shared_ptr
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

	/*int* ptr = new int(5);
	cout << *ptr << endl;
	delete ptr;*/

	SmartPointer<int> pointer = new int(10);
	*pointer = 154857;
	cout << *pointer << endl;

	//SmartPointer<int> sp = pointer;                 /// ���������

	auto_ptr<int>ap1(new int(10));
	auto_ptr<int> ap2(ap1);							/// ������ ��������� ����������

	
	
	
	unique_ptr<int>up1(new int(10));
	//unique_ptr<int> up2(up1);						/// ������ 
	unique_ptr<int> up2 = move(up1);				/// �������

	/// ���

	up2.swap(up1);									/// �����

	int* p = up1.get();								/// ������� ������ ���������

	up1.release();									/// �������� ���������, �� ������ ���������
	
	up1.reset();									/// �������� ��������� �  ������


	shared_ptr<int>sp1(new int(10));				/// ����� ���������, ������ ������������ ������ ����� ����� ������������ ���������� ���������
	shared_ptr<int> sp2(sp1);						/// ����������� ��� ������ ���������� static

	
													
													/// �������

	int SIZE ;
	cin >> SIZE;
	shared_ptr<int[]>ptr(new int[SIZE] {1, 23, 4, 56, 7});

	for (int i = 0; i < SIZE; ++i)
	{
		ptr[i] = rand() % 100;
		cout << ptr[i] << endl;
	}
	
	return 0;
 }