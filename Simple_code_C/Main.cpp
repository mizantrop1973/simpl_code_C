#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							
#include<vector>							
#include<string>
#include<deque>							
#include<list>							

#include<stack>	
#include<queue>
using namespace std;

															/// STL. �������� �����������  queye, priority queue
														

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
	cout<<q.back()<<endl;											///������ � ���������� �������� (������), ����� �������� ���������� �� �� �������
	q.pop();													/// ����������� ������� (������ ������)
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

	q.swap(q1);														/// ����
	
	cout << "Quantity jf elements q is " << q.size() << endl;
	cout << "Quantity jf elements q1 is " << q1.size() << endl;
	
	
	auto s = q._Get_container();                             /// deque �� ���������

	queue<int, list<int>> q2;									/// ������ List � deque, vector - �� ��������!!!!!!!!!!!!!!!!!!

	auto a = q2._Get_container();

															/// ������� � ����������� <vector, deque> (NO List!!!!!!)
															/// �� ��������� vector

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