#include<iostream>
#include<ctime>
using namespace std;


void main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		arr[i] = rand() % 20;
		for (int j=i-1; j >= 0; --j)
		{
			if (arr[i] == arr[j])
			{
				arr[i] = rand() % 20;
				j = i;
			}
		}
	}


	for (int i = 0; i < SIZE; ++i)
		cout << arr[i]<<endl;
}