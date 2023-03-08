#include<iostream>							/// ввод-вывод
#include<ctime>								/// врем€
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							
#include<vector>							
#include<string>
#include<deque>							
#include<list>							

#include<stack>								
using namespace std;

															/// STL. јƒјѕ“≈–џ  ќЌ“≈…Ќ≈–ќ¬ stack, que, priority que
																/// stack

int  main()

{
	setlocale(LC_ALL, "ru");

	stack<int> st;

	st.push(9);
	st.push(19);
	st.push(125);
	st.emplace(23);                                   /// новее чем push, создает не копию а пр€м в стеке

	cout<<st.size()<<endl;
	st.empty();
	cout << st.top() << endl;
	st.pop();
	cout<<st.top()<<endl;

	while (!st.empty())									/// как просмотреть все элементы но только с извлечением
	{
		cout << st.top() << endl;
		st.pop();
	}


	auto a = st._Get_container();									/// основа стека (по умолчанию deque)

	cout << a[2] << endl;											/// начинаем работать уже как с deque

	stack<int, list<int>> st1 /*{1,2,3,4,5,6,7,8} - не работает*/ ;	/// конкретное указание основы, методы только как у стэка

	st1.push(9);
	st1.push(19);
	st1.push(125);
	st1.emplace(23);

	while (!st1.empty())									/// как просмотреть все элементы но только с извлечением
	{
		cout << st1.top() << endl;
		st.pop();
	}

	auto l = st1._Get_container();							/// уже работаем как с листом

	 


	return 0;


}