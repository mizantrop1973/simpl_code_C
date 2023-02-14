#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<string>
using namespace std;


//class Image
//{
//public:
//	void GetImageInfo()
//	{
//		for (int i = 0; i < LENGTH; ++i)
//		{
//			cout << "#"<<i<<" "<<pixels[i].GetInfo() << endl;
//		}
//	}
//	
/////private:                                            если разместить вложенный класс в public секции, то мы сможем работать с ним из main напрямую
//	
//private:
//
//};

class Pixel
{
public:
	Pixel()
	{
		r = g = b = 0;
	}



	Pixel(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;
	}

	string GetInfo()
	{
		return "Pixel: \tr = " + to_string(r) + "\t\tg = " + to_string(g) + "\t\tb = " + to_string(b);
	}

private:
	int r;
	int g;
	int b;
};



int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "ru");
	const int LENGTH = 5;

	///СТАТИЧЕСКИЕ МАССИВЫ

	/*

	Pixel pixels[LENGTH]

	{
		Pixel(0, 4, 64),
		Pixel(4, 14, 10),
		Pixel(111, 4, 24),
		Pixel(244, 244, 14),
		Pixel(111, 179, 64)
	};

	pixels[0] = Pixel(11, 12, 45);

	cout<<pixels[0].GetInfo()<<endl;*/

	/// ДИНАМИЧЕСКИЕ МАССИВЫ

	Pixel* pixels = new Pixel[LENGTH];

	pixels[0] = Pixel(11, 12, 45);

	cout << pixels[0].GetInfo() << endl;

	delete[] pixels;

	                  
	return 0;
}