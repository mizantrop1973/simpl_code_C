#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
using namespace std;


															/// ������������ ���� �++
								                         
namespace NS1
{
	void Foo()
	{
		cout << "ST1" << endl;
	}
}

namespace NS2
{
	void Foo()
	{
		cout << "ST2" << endl;
	}
}

namespace NS3
{
	namespace NS2
	{
		void Foo()
		{
			cout << "ST23" << endl;
		}
	}
}





int  main()

{
	setlocale(LC_ALL, "ru");

	NS1::Foo();

	NS2::Foo();

	NS3::NS2::Foo();
	
	std::cout << "test" << endl;
	cout << "test" << endl;
	
	return 0;
}