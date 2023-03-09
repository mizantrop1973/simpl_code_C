#pragma once
#include<iostream>
using namespace std;


namespace myNamespace					/// ограничиваем доступ для внешних разработчиков
{
	class myClass
	{
	public:
		myClass();

		~myClass();

		void printMessage(const char* str);

	};

}