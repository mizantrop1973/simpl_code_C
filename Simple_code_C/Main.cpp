#include<iostream>							/// ввод-вывод
#include<ctime>								/// время
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							
#include<vector>							
#include<string>
#include<deque>							
#include<list>							

#include<stack>	
#include<queue>
using namespace std;

															/// STL. АДАПТЕРЫ КОНТЕЙНЕРОВ  queye, priority queue
														

int  main()

{
	setlocale(LC_ALL, "ru");

	queue<int> q;
	queue<int> q1;

	q.push(1);
	q.push(2);
	q.push(5);
	q.push(23);
	q.push(16);
	cout<<q.back()<<endl;											///доступ к последнему элементу (ссылка), можем поменять посмотреть но не извлечь
	q.pop();													/// извлекается элемент (только первый)
	cout << q.front() << endl;

	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
	cout << "Quantity jf elements is " << q.size() << endl;
	q1.push(10);
	q1.push(25);
	q1.push(58);
	q1.push(21);
	q1.push(161);

	q.swap(q1);														/// СВАП
	
	cout << "Quantity jf elements q is " << q.size() << endl;
	cout << "Quantity jf elements q1 is " << q1.size() << endl;
	
	
	auto s = q._Get_container();                             /// deque по умолчанию

	queue<int, list<int>> q2;									/// Только List и deque, vector - не подходит!!!!!!!!!!!!!!!!!!

	auto a = q2._Get_container();

															/// Очередь с приоритетом <vector, deque> (NO List!!!!!!)
															/// по умолчанию vector

	priority_queue<int> pq;
	pq.push(10);
	pq.push(25);
	pq.push(58);
	pq.push(21);
	pq.push(161);
	

	while (!pq.empty())
	{
		cout << pq.top() << endl;
		pq.pop();
	}
	cout << "Quantity jf elements pq is " << pq.size() << endl;
	return 0;


}