#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<thread>							/// ��� �������
#include<mutex>	

//#include<chrono>							/// ��� ������� (��� ���������� ���������� ������� ������������ ���������)
using namespace std;
						/// ������������� ����������������,  ������������� �������, lock_guard mutex






class Timer									/// ������ ����� ���������� ����� ������ ���������
{
public:
	Timer();
	~Timer();


private:
	chrono::time_point<chrono::steady_clock> start, finish;
	chrono::duration<float> duration;
};

Timer::Timer()
{
	start = chrono::high_resolution_clock::now();
}

Timer::~Timer()
{
	finish = chrono::high_resolution_clock::now();
	chrono::duration<float> duration = finish - start;
	cout << duration.count() << " sec" << endl;
}

mutex mtx;                           /// ������� ������� (�����)

void Print(char ch)
{
	this_thread::sleep_for(chrono::milliseconds(2000));

	//mtx.lock();						 /// �������� ������� ���� �� �������������� ������������� ������� ��������
	{									/// � ������ � �������� lock guard  ��� ����������� ���� ������������� ����� ������������ �������� ������
		lock_guard<mutex> duard(mtx);       /// ��������� ������ �� lock � unlock (����� - �������� ������� � ������ �������� � ������������, 
		/// � ����� ���������� ������ ������� - ���������� ���� ������ ����������

		for (int i = 0; i < 5; ++i)
		{
			for (int i = 0; i < 10; ++i)
			{
				cout << ch;
				this_thread::sleep_for(chrono::milliseconds(10));
			}
			cout << endl;
		}
		cout << endl;
		//mtx.unlock();					/// ������� ������
	}												/// ���� ���������� �������� ������, �� ������ lock guard  ��������� �����

	this_thread::sleep_for(chrono::milliseconds(2000));


}										/// ��� ��� ����������� ������ lock guard


int  main()
{
	setlocale(LC_ALL, "ru");

	Timer timer;
	thread t1(Print, '*');           /// �� ���������������
	thread t2(Print, '#');

	/*Print('*');
	Print('#');*/

	t1.join();
	t2.join();

	return 0;
}