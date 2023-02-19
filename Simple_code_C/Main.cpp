#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<fstream>
#include<Windows.h>
//#include<string>
using namespace std;

class String
{
public:
	//  ŒÕ—“–” “Œ– œŒ ”ÃŒÀ◊¿Õ»ﬁ

	String()
	{
		this->str = nullptr;
		this->length = 0;
	}

	//  ŒÕ—“–” “Œ– œŒ œ¿–¿Ã≈“–”

	String(const char* str)

	{
		for (int i = 0; str[i] != '\0'; ++i)
			this->length = i + 1;
		this->str = new char[this->length + 1];
		for (int i = 0; i < this->length; ++i)
			this->str[i] = str[i];
		this->str[this->length] = '\0';
	}

	String(char* str)

	{
		for (int i = 0; str[i] != '\0'; ++i)
			this->length = i + 1;
		this->str = new char[this->length + 1];
		for (int i = 0; i < this->length; ++i)
			this->str[i] = str[i];
		this->str[this->length] = '\0';
	}



	//  ŒÕ—“–” “Œ–  Œœ»–Œ¬€¿Õ»ﬂ

	String(const String& other)
	{
		this->length = other.length;
		this->str = new char[length + 1];
		for (int i = 0; i < length; ++i)
		{
			this->str[i] = other.str[i];
		}
		str[length] = '\0';
	}

	//   ŒÕ—“–” “Œ– œ≈–≈Ã≈Ÿ≈Õ»ﬂ

	String(String&& other)						  // ÔËÌËÏ‡ÂÏ ÒÒ˚ÎÍÛ Ì‡ ÒÒ˚ÎÍÛ Ì‡ Ó·˙ÂÍÚ
	{
		this->length = other.length;
		this->str = other.str;
		other.str = nullptr;
	}

	// œ≈–≈√–”« ¿ Œœ≈–¿“Œ–¿ œ–»—¬¿»¬¿Õ»ﬂ

	String& operator = (const String& other)
	{
		if (this->str != nullptr)            //Ó·˚˜ÌÓ ÌÂ ÚÂ·ÛÂÚÒˇ, Ú‡Í Í‡Í Ó·˙ÂÍÚ ÒÓÁ‰‡Ì ÛÊÂ
			delete[] this->str;
		for (int i = 0; other.str[i] != '\0'; ++i)
			length = i + 1;
		this->str = new char[length + 1];
		for (int i = 0; i < length; ++i)
			this->str[i] = other.str[i];
		this->str[length] = '\0';

		return *this;
	}

	// œ≈–≈√–”« ¿ Œœ≈–¿“Œ–¿  ŒÕ“¿ ÷≈Õ¿÷»»(— À≈»¬¿Õ»ﬂ)

	String operator + (const String& other)

	{
		String str1;
		str1.str = new char[this->length + other.length + 1];
		for (int i = 0; i < this->length + other.length; ++i)
			i < this->length ? str1.str[i] = this->str[i] : str1.str[i] = other.str[i - this->length];
		str1.length = this->length + other.length;
		str1.str[str1.length] = '\0';
		return str1;
	}

	//	œ≈–≈√–”« ¿ Œœ≈–¿“Œ–¿ —–¿¬Õ≈Õ»ﬂ (–¿¬≈Õ—“¬¿)

	bool operator == (const String& other)
	{
		bool result = false;

		if (this->length == other.length)
		{
			for (int i = 0; i < this->length; ++i)
			{
				if (this->str[i] == other.str[i])
					result = true;
				else
				{
					result = false;
					break;
				}
			}
		}
		else
			result = false;
		return result;
	}

	//	œ≈–≈√–”« ¿ Œœ≈–¿“Œ–¿ —–¿¬Õ≈Õ»ﬂ (Õ≈–¿¬≈Õ—“¬¿)

	bool operator != (const String& other)
	{
			return !(this->operator==(other));
	}

	// œ≈–≈√–”« ¿ Œœ≈–¿“Œ–¿ »ÕƒÕ —»–Œ¬¿Õ»ﬂ

	char & operator [](int index)
	{
		return this->str[index];
	}

	friend ostream& operator<<(ostream& os, const String& string);
	friend istream& operator>>(istream& os, String& string);

	void Print()
	{
		cout << str << endl;
	}

	int Length()
	{
		return length;
	}

	~String()
	{
		delete[] this->str;
	}
	
private:
	char* str;
	int length;
};

// œ≈–≈√–”« ¿ ¬€¬Œƒ¿                                        


ostream& operator<<(ostream& os, const String& string)
{
	os << string.str << endl;
	return os;
}

 /// œ≈–≈√–”« ¿ ¬¬Œƒ¿

istream& operator>>(istream& is, String & string)
{
	
	int max;
	cout << "Point the max of simbol's quantity" << endl;
	cin >> max;
	
	if (string.str != nullptr)
		delete[] string.str;
	char c;
	String temp(cin.get());
	
	for (int i = 0; cin.get(temp.str[i]); ++i)
	{
		temp.length= i + 1;
		string.str[i] = temp.str[i];
	
	 
	
	

	return is;
}

int main()

{
	setlocale(LC_ALL, "ru");

	string path = "MyFile.txt";
	String a;

	String b = ", World!";

	bool equal = (a == b);
	cout << equal << endl;

	bool noequal = (a != b);
	cout << noequal << endl;

	cout << (a != b) << endl;

	String result;
	result = a + b;



	//a.Print();
	b.Print();
	result.Print();

	/*cout << a[0] << endl;
	a[3] ='z';
	a.Print();*/



	
	/*fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);              ///   "|" - ·ËÚÓ‚ÓÂ  "ËÎË"

	if (!fs.is_open())		/// fout.is_open()  ‚ÓÁ‚‡˘‡ÂÚ   bool , 
	{
		cout << "Error of file's opening" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		fs << a << "\n";
		
	}
	fs.close();*/

	cin>>b;
	
	//cout << a;
	return 0;


}