#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// язык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// для изменения кодировки консоли
#include<memory>							/// умные указатели
#include<vector>
using namespace std;


															/// Библиотека STL. VECTOR


int  main()

{
	setlocale(LC_ALL, "ru");
	
	vector<int> myVector;
	myVector.push_back(2);
	myVector.push_back(33);
	myVector.push_back(25);
	myVector.push_back(218);
	myVector[0] = 1000;

	//cout << myVector[10] << endl;								 /// может дать либо сбой, либо чужие данные

	/*try
	{
		cout << myVector.at(10) << endl;                          /// метод at  в любом случае не дает возможность доступа к чужим данным, но он медленный
	}
	catch (const std::out_of_range & ex)
	{
		cout << ex.what() << endl << endl;
	}*/

	for (int i = 0; i < myVector.size(); ++i)
		cout << myVector[i] << endl;							/// метод size  - размер


	//myVector.clear();											/// очищает vector

	cout << myVector.size() << endl << endl;
	
	myVector.pop_back();

	for (int i = 0; i < myVector.size(); ++i)
		cout << myVector[i] << endl;

	cout << myVector.size() << endl << endl;

	vector<int>  myVector2 = { 1,2,3,4,5 };
	myVector2.push_back(10);
	myVector2.push_back(30);
	myVector2.push_back(40);
	myVector2.push_back(100);


	/*for (int i = 0; i < myVector2.size(); ++i)
		cout << myVector2[i] << endl;*/

	//myVector.capacity();
	cout << myVector2.capacity()  << endl;                   /// это в принципе количество ячеек - при добавлении элементов иногда заранее 
															/// выделяется массив с дополнительной ячейкой - сколько их определяется индивидуально 
															/// в зависимости от размера массива и пр.
	myVector2.reserve(100);									/// это можно самому регулировать
															
	cout << myVector2.capacity() << endl;

	myVector2.shrink_to_fit();
	cout << myVector2.capacity() << endl;					///оптимизирует размер
	
	vector<int> myVector3(20);								/// установление размера при инициализации
	for (int i = 0; i < myVector3.size(); ++i)				/// при таком написании инициализируются нулями
		cout << myVector3[i] << endl;	
	vector<int> myVector4(20,100);							/// при таком написании инициализируются второй цифрой в скобках
	for (int i = 0; i < myVector4.size(); ++i)				
		cout << myVector4[i] << endl;

	cout<<myVector4.empty()<<endl<<endl<<endl;				/// bool - пустой ли массивж

	myVector4.resize(10);									/// меняет размер массива, если увеличивает то дописывает нулями
	for (int i = 0; i < myVector4.size(); ++i)
		cout << myVector4[i] << endl;
	cout << endl;
	myVector4.resize(5,200);								/// меняет размер массива, если увеличивает то дописывает вторым параметром в скобках		
	for (int i = 0; i < myVector4.size(); ++i)
		cout << myVector4[i] << endl;

	return 0;



		return 0;
 }


