#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<vector>;
#include<list>
using namespace std;


														/// ���� for... each  - �� ��������!!!! � �� ��������������
														/// ���� �������� for_each  - �� ������ (algoritm)
														/// ������� ��� ���������� range-based ���� (����� ��� ���������) - ���� � ����. ��������!



template<typename T>
void PrintList(const list<T>& lst)
{
	for (auto i = lst.cbegin(); i != lst.cend(); ++i)							/// ��������� � ��������� ��� 
		cout << *i << endl;
}


int main()

{
	setlocale(LC_ALL, "ru");

	int arr[]={ 1,2,3,4,5 };

	for(auto var: arr)									/// ���������� �����, ���� �� ��� �� ������, �� ������ �� ��������
	{
		var = -1;
		cout << var << endl;
	}

	for (auto &var : arr)									/// ���������� ������, ������ ��������
	{
		var = 100;
		cout << var << endl;
	}
	


	for (const auto& var : arr)									/// ���������� ������, ������ ��������
	{
		///var = 100;											/// ������
		cout << var << endl;
	}
	
	list<int> myList{ 9,8,7,6,5 };
	
	PrintList(myList);
	
	return 0;






}