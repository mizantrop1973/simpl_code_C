#pragma once
#include<iostream>
using namespace std;


namespace myNamespace					/// ������������ ������ ��� ������� �������������
{
	class myClass
	{
	public:
		myClass();

		~myClass();

		void printMessage(const char* str);

	};

}