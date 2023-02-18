#include<iostream>							/// ввод-вывод
#include<ctime>								/// врем€
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// €зык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// дл€ изменени€ кодировки консоли
using namespace std;


											///„тение и запись при помощи класса fstream

class Point
{
public:

	Point()
	{
		x = y = z = 0;
	}

	Point(int x, int y, int z )// конструктор
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	

	void Print()
	{
		cout << "\t X = " << x << "\t Y = " << y << "\t Z = " << z << endl << endl;
	}

private:
	int x;
	int y;
	int z;
};


int  main()

{
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt";

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);              ///   "|" - битовое  "или"

	if (!fs.is_open())		/// fout.is_open()  возвращает   bool , 
	{
		cout << "Error of file's opening" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		string msg;
		char value;
		while (true)
		{
			
			cout << "Choose the action: " << endl <<
				"to write  enter \"W\"" << endl <<
				"to read enter \"R\"" << endl;
			cin >> value;
				
			if (value == 'w' || value =='W')
			{
				msg = "";
				cout << "Enter a message: " << endl;
				SetConsoleCP(1251);							/// мен€ем кодировку консоли (дл€ возможности использовать кириллицу)
				//cin >> msg;
				//fs << msg << endl;
				cin.get();									/// !!!!!¬Ќ»ћјЌ»≈. «јћ”„»Ћ—я. „“ќЅџ »—ѕќЋ№«ќ¬ј“№ —Ћ≈ƒ”ёў”ё —“–ќ ”, Ё“ј —“–ќ ј ќЅя«ј“≈Ћ№Ќќ
				getline(cin, msg, '\n');
				fs << msg << endl;
				SetConsoleCP(866);							/// возвращаем кодировку консоли  !!!!!!!!!!
				break;
			}
			else if (value == 'r' || value == 'R')
			{
				cout << "Reading of the datas, source:  " + path << endl << endl << endl;
				while (!fs.eof())
				{
					msg = "";
					getline(fs, msg);
					cout << msg <<endl;
				}
				break;
			}
			else
			{
				cout << "Incorrect choice, try again" << endl<<endl<<endl;
			}
			
		}
	}
	fs.close();				/// закрываем файл



										


	return 0;

}