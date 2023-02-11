#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
//#include<string>
using namespace std;

class String
{
public:
	// ÊÎÍÑÒÐÓÊÒÎÐ ÏÎ ÓÌÎË×ÀÍÈÞ
	
	String()
	{
		str = nullptr;
	}


	// ÊÎÍÑÒÐÓÊÒÎÐ ÏÎ ÏÀÐÀÌÅÒÐÓ

	String(const char* str)

	{
		for (int i = 0; str[i] != '\0'; ++i)
			length = i + 1;
		this->str = new char[length + 1];
		for (int i = 0; i < length; ++i)
			this->str[i] = str[i];
		this->str[length] = '\0';
	}
	
	// ÊÎÍÑÒÐÓÊÒÎÐ ÊÎÏÈÐÎÂÛÀÍÈß

	String(const String& other)                  
	{
		this->length = other.length;
		this->str = new char [length +1];
		for (int i = 0; i < length; ++i)
		{
			this->str[i] = other.str[i];
		}
		str[length] = '\0';
	}                

	// ÏÅÐÅÃÐÓÇÊÀ ÎÏÅÐÀÒÎÐÀ ÏÐÈÑÂÀÈÂÀÍÈß

	String& operator = (const String& other)              
	{
		if (this->str != nullptr)            //îáû÷íî íå òðåáóåòñÿ, òàê êàê îáúåêò ñîçäàí óæå
			delete[] this->str;
		for (int i = 0; other.str[i] != '\0'; ++i)
			length = i + 1;
		this->str = new char[length + 1];
		for (int i = 0; i < length; ++i)
			this->str[i] = other.str[i];
		this->str[length] = '\0';

		return *this;
	}

	// ÏÅÐÅÃÐÓÇÊÀ ÎÏÅÐÀÒÎÐÀ ÊÎÍÒÀÊÖÅÍÀÖÈÈ(ÑÊËÅÈÂÀÍÈß)

	String operator + (const String& other)

	{
		String str1;
		str1.str = new char[this->length + other.length + 1];
		for (int i = 0; i < this->length + other.length; ++i)
			i < this->length ? str1.str[i] = this->str[i] : str1.str[i] = other.str[i-this->length];
		str1.length = this->length + other.length;
		str1.str[str1.length] = '\0';
		return str1;
	}

	void Print()
	{
		cout << str << endl;
	}

	~String()
	{
		delete[] this->str;
	}

private:
	char* str;
	int length;
	
};





int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");
	
	
	String a("jbivuiefbujen uenb ubmbenboe");
	
	String b = "hbhdfb b uiebieb";

	String result;
	result = a + b;
	

	
	a.Print();
	b.Print();
	result.Print();
	

	return 0;


}