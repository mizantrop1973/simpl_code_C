#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;

class Human 
{
public:
	Human ();
	~Human ();
	string GetName()
	{
		return name;
	}
	void SenName(string name)
	{
		this->name = name;
	}

	//string name;

private:
	string name;
};

Human ::Human ()
{
}

Human ::~Human ()
{
}

class Student : public Human
{
public:
	Student();
	~Student();
	string group;

	void Learn()
	{
		cout << "� �����!" << endl;
	}

private:

};

Student::Student()
{
}

Student::~Student()
{
}

class ExtramuralStudent : public Student
{
public:
	ExtramuralStudent();
	~ExtramuralStudent();

	void Learn()
	{
		cout << "� ���� � ����������� ��� � �������" << endl;
	}

private:

};

ExtramuralStudent::ExtramuralStudent()
{
}

ExtramuralStudent::~ExtramuralStudent()
{
}

class Professor : public Human
{
public:
	Professor();
	~Professor();
	string subject;

private:

};

Professor::Professor()
{
}

Professor::~Professor()
{
}

int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	Student st;
	st.Learn();
	cout<<st.GetName()<<endl;
	
	Professor pr;

	ExtramuralStudent extraSt;
	extraSt.Learn();
	extraSt.SenName("������");
	cout<<extraSt.GetName()<<endl;
	st.SenName("������");
	cout << st.GetName() << endl;
	
	

	
	return 0;


}