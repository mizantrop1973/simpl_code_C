#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<thread>							/// ��� �������
//#include<chrono>							/// ��� ������� (��� ���������� ���������� ������� ������������ ���������)
using namespace std;
class Timer															/// ������ ����� ���������� ����� ������ ���������
{
public:
	Timer();
	~Timer();


private:
	std::chrono::time_point<std::chrono::steady_clock> start, finish;
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

															/// ����� ���������� ����

int Sum(int a, int b)

{
	Timer n;
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout << "Stream ID  is " << this_thread::get_id() << " ==============================\t SUM STARTED\t===============================" << endl;
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout << "Stream ID  is " << this_thread::get_id() << " ==============================\t SUM STOPED\t===============================" << endl;
	return a + b;
}




int  main()

{
	Timer a;													/// ����� ����� ���� ������� ������� ��������� �����, ���� ������� ������ ������� 
	
	setlocale(LC_ALL, "ru");

	int result;

	thread t([&result]()
		{
			result = Sum(2, 5);
		}
	);


	for (size_t i = 1; i <= 10; ++i)
	{
		cout << "Stream ID  is " << this_thread::get_id() << " ==============================\t MAIN STARTED\t===============================" <<i<< endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	

	t.join();

	cout << "Sum result is " << result << endl;

	
	
	return 0;
 }


