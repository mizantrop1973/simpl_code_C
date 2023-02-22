#include<iostream>							/// ввод-вывод
#include<ctime>								/// врем€
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// €зык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// дл€ изменени€ кодировки консоли
using namespace std;


															/// —ќЅ—“¬≈ЌЌџ…  Ћј—— exception
class MyException:public exception
{
public:
	MyException(const char* msg, int dataState);
	~MyException();

	int GetDataState() 
	{ 
		return dataState; 
	}

	
private:
	int dataState;

};

MyException::MyException(const char* msg, int dataState):exception(msg)
{
	this->dataState = dataState;
}

MyException::~MyException()
{
}

void Foo(int value)
{
	if (value < 0)
		throw exception("„исло меньше 0 !!!");


	if (value == 1)
		throw MyException("„исло равно 1", value );
	

	cout << "Value = " << value << endl;
}

int  main()

{
	setlocale(LC_ALL, "ru");
	/*string path = "myFile.xt";								/// неправильно пишем им€ файла специально
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);    /// логика может некорректно работать у fstream, ifstream и пр., поэтому мы добавл€ем такую запись

	try
	{
		cout << "Trying to open file" << endl;

		fin.open(path);

		cout << "File is opend successfully" << endl;
	}
	catch (const /*std::exception*/ /*ifstream::failure& ex)*/      /// заменили на более инфоративный класс
	/*{
		cout << ex.what() << endl;
		cout << ex.code() << endl;								/// дает код ошибки
		cout << "ќшибка открыти€ файла" << endl;
	}*/

	

	try
	{
		Foo(1);
	}
	//catch (const int ex)
	//catch (const char* ex)
	catch (MyException& ex)
	{
		//cout << "We catched " << ex << endl;
		
		cout << "We catched "  << ex.what()<<endl;
		cout << "Data state is :" << ex.GetDataState() << endl;

	}

	catch (exception& ex)
	{
		//cout << "We catched " << ex << endl;

		cout << "We catched " << ex.what() << endl;
		

	}
	

	//fs.open(path, fstream::in | fstream::out | fstream::app);              ///   "|" - битовое  "или"

	//if (!fs.is_open())		/// fout.is_open()  возвращает   bool , 
	//{
	//	cout << "Error of file's opening" << endl;
	//}
	//else
	//{
	//	cout << "File is open" << endl;
	//	string msg;
	//	char value;
	//	while (true)
	//	{
	//		
	//		cout << "Choose the action: " << endl <<
	//			"to write  enter \"W\"" << endl <<
	//			"to read enter \"R\"" << endl;
	//		cin >> value;
	//			
	//		if (value == 'w' || value =='W')
	//		{
	//			msg = "";
	//			cout << "Enter a message: " << endl;
	//			SetConsoleCP(1251);							/// мен€ем кодировку консоли (дл€ возможности использовать кириллицу)
	//			//cin >> msg;
	//			//fs << msg << endl;
	//			cin.get();									/// !!!!!¬Ќ»ћјЌ»≈. «јћ”„»Ћ—я. „“ќЅџ »—ѕќЋ№«ќ¬ј“№ —Ћ≈ƒ”ёў”ё —“–ќ ”, Ё“ј —“–ќ ј ќЅя«ј“≈Ћ№Ќќ
	//			getline(cin, msg, '\n');
	//			fs << msg << endl;
	//			SetConsoleCP(866);							/// возвращаем кодировку консоли  !!!!!!!!!!
	//			break;
	//		}
	//		else if (value == 'r' || value == 'R')
	//		{
	//			cout << "Reading of the datas, source:  " + path << endl << endl << endl;
	//			while (!fs.eof())
	//			{
	//				msg = "";
	//				getline(fs, msg);
	//				cout << msg <<endl;
	//			}
	//			break;
	//		}
	//		else
	//		{
	//			cout << "Incorrect choice, try again" << endl<<endl<<endl;
	//		}
	//		
	//	}
	//}
	//fs.close();				/// закрываем файл






	return 0;

}