#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
#include<locale.h>
#include<vector>;
using namespace std;




int main()

{
	setlocale(LC_ALL, "ru");

	vector<int>myVector{ 1,2,3,4,5,6 };


	
	vector<int>::iterator it = myVector.begin();    /// ����� ������ ���

	auto i = myVector.begin();    /// ������������� ��������� ��� ���. ������� ���������������� ���������� (� ������ �����) - ��������� ��������� ����. �� ������

	for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it)
		cout << *it << endl;

	for (auto it = myVector.begin(); it != myVector.end(); ++it)  /// ������������ �������� ������� �� ������
		cout << *it << endl;


	return 0;

}