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
using namespace std;

															/// STL. �������� ����������� stack, que, priority que
																/// stack

int  main()

{
	setlocale(LC_ALL, "ru");

	stack<int> st;

	st.push(9);
	st.push(19);
	st.push(125);
	st.emplace(23);                                   /// ����� ��� push, ������� �� ����� � ���� � �����

	cout<<st.size()<<endl;
	st.empty();
	cout << st.top() << endl;
	st.pop();
	cout<<st.top()<<endl;

	while (!st.empty())									/// ��� ����������� ��� �������� �� ������ � �����������
	{
		cout << st.top() << endl;
		st.pop();
	}


	auto a = st._Get_container();									/// ������ ����� (�� ��������� deque)

	cout << a[2] << endl;											/// �������� �������� ��� ��� � deque

	stack<int, list<int>> st1 /*{1,2,3,4,5,6,7,8} - �� ��������*/ ;	/// ���������� �������� ������, ������ ������ ��� � �����

	st1.push(9);
	st1.push(19);
	st1.push(125);
	st1.emplace(23);

	while (!st1.empty())									/// ��� ����������� ��� �������� �� ������ � �����������
	{
		cout << st1.top() << endl;
		st.pop();
	}

	auto l = st1._Get_container();							/// ��� �������� ��� � ������

	 


	return 0;


}