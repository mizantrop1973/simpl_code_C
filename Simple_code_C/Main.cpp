#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
using namespace std;


											///Работа с файлами

int  main()

{
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt";
	//cin >> path;
	ofstream fout;
	//fout.open("myFile.txt");   /// в таком виде файл создается в папке с проектом, или полный адрес иначе
	/*fout.open(path);			///    затирает все прежнее

	if (!fout.is_open())		/// fout.is_open()  возвращает   bool , 
	{
		cout << "Error of file's opening" << endl;
	}
	else 
	{
		fout << "These are our datas" << endl;
	}

	fout.close();				/// закрываем файл*/

	fout.open(path, ofstream::app);           /// добавляем, не затираем

	if (!fout.is_open())		/// fout.is_open()  возвращает   bool , 
	{
		cout << "Error of file's opening" << endl;
	}
	else
	{
		for (size_t i = 0; i < 7; ++i)
		{
			cout << "Enter a number:" << endl;
			int a;
			cin >> a;
			//fout << endl<< "NEW datas" << endl;
			fout << a << endl;
		}
	}

	fout.close();				/// закрываем файл

	return 0;

}