#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
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

	//fout.open(path, ofstream::app);           /// добавляем, не затираем

	//if (!fout.is_open())		/// fout.is_open()  возвращает   bool , 
	//{
	//	cout << "Error of file's opening" << endl;
	//}
	//else
	//{
	//	for (size_t i = 0; i < 7; ++i)
	//	{
	//		cout << "Enter a number:" << endl;
	//		int a;
	//		cin >> a;
	//		//fout << endl<< "NEW datas" << endl;
	//		fout << a << endl;
	//	}
	//}

	//fout.close();				/// закрываем файл

	ifstream fin;

	fin.open(path);
	if (!fin.is_open())		/// fout.is_open()  возвращает   bool , 
	{
		cout << "Error of file's opening" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		char str1[50]{};
		char ch;
		string str;
		//while (fin.get(ch))						/// посимвольно считываем, в т.ч. переносы строк (неявные)
		while(!fin.eof())							/// eof считывает строки  ДО окончания файла
		{
			//cout << ch;
			str = "";								/// исправит ошибку двойного вывода последней строки
			//fin >> str;								/// ВНИМАНИЕ. Метод считывая строку ДО ПЕРВОГО ПРОБЕЛА! 
			//getline(fin, str/*,";"*/);				/// считывает строку ДО "сепаратора" - третий, необязательный аргумент, по умолчанию -  \n
			fin.getline(str1, 50);					/// неудобный метод класса ifstream, ограничивает количество символов, и str1 должен быть массивом
			
			
			cout << str1<<endl;						/// считывает файл до конца, при этом если есть в конце перенос строки - 
													/// отработает еще раз с последним данными

			
		}
	}
	
	fin.close();
	return 0;

}