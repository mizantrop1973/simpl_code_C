#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;
								
											/// ƒ≈À≈√»–”ﬁŸ»…  ŒÕ—“–” “Œ–



class Human
{
public:
	Human(string name);
	Human(string name, int age);
	Human(string name, int age, int weight);
	~Human();

	string name;
	int age;
	int weight;
private:

};

Human::Human(string name)
{
	this->name = name;
}

Human::Human(string name, int age) : Human(name)
{
	this->age = age;
}

Human::Human(string name, int age, int weight) :Human(name, age)
{
	this->weight = weight;
}

Human::~Human()
{
}

int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");

	Human human("»‚‡ÌÓ‚", 25, 78);
	
	return 0;		    

}