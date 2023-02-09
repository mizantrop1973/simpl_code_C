#include<iostream>
#include<ctime>
#include <math.h>
#include<algorithm>
using namespace std;



void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 20;
}

int strlen1(const char* string)
{
	int count = 0;
	while (string[count] != '\0')
		++count;
	return count;

}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << "\t";
	cout << endl;
}

void ChangeArray1(int*& arr, int& size)
{
	int isize = 0;
	while (isize == 0 || abs(isize) > size)
	{
		cout << "Enter quantity of adding/removing array's elements(add - positive number; remove - negative number: " << endl
			<< "(max quantity of removing array's elements = " << size - 1 << ", \"0\" - EXIT): ";
		cin >> isize;
		if (isize == 0)
			return;
		else if (abs(isize) > size && isize < 0)
			cout << "The quantity of of removing array's elemenst exceeds array's size, try again" << endl << endl;
	}
	int* index = new int[abs(isize)];
	cout << endl;
	cout << "Enter " << abs(isize) << " positions(unique) of adding / removing array's elements" << endl << endl;
	for (int i = 0; i < abs(isize); ++i)
	{
		while (true)
		{
			if (isize > 0)
				cout << "Enter " << i + 1 << " adding/changing position of  new array (min  = 0; max = " << size + isize - 1 << "): ";
			else
				cout << "Enter " << i + 1 << " removing position of  array (min  = 0; max = " << size << "): ";
			cin >> index[i];
			for (int j = 0; j < i; ++j)
			{
				if (index[i] == index[j])
					cout << "You have already entered this index, try again" << endl;
			}
			if ((isize > 0 && index[i] > (size + isize - 1)) || (isize < 0 && index[i] >(size - 1)))
				cout << "You go out of the array's border', try again" << endl;
			else
				break;
		}
	}
	cout << endl;
	ShowArray(index, abs(isize));
	stable_sort(index, index + abs(isize));
	cout << endl;
	ShowArray(index, abs(isize));

	int* p = new int[size + isize];
	for (int k = 0; k < abs(isize);)
	{
		for (int i = 0, j = 0; i < size || j < size + isize; ++i, ++j)
		{
			if (isize < 0)
			{
				if (i == index[k])
				{
					--j;
					++k;
				}
				else
					p[j] = arr[i];
			}
			else
			{
				if (j == index[k])
				{
					cout << "Enter new element (index = " << index[k] << "): ";
					cin >> p[j];
					cout << endl;
					--i;
					++k;
				}
				else
					p[j] = arr[i];
			}
		}
	}
	size = size + isize;
	delete[] arr;
	arr = p;
	delete[] index;
}

void main()
{
	/*
		const char* string = "gv lsdb bf if";
		cout << strlen1(string)<<
			"\t" << string;
	*/

	int size1;
	int size2;
	int isize;

	cout << "Enter array N1 count : ";
	cin >> size1;
	cout << "Enter array N2 count : ";
	cin >> size2;
	cout << endl << endl;

	int* arr1 = new int[size1];
	int* arr2 = new int[size2];

	FillArray(arr1, size1);
	FillArray(arr2, size2);

	ShowArray(arr1, size1);
	ShowArray(arr2, size2);


	size1 = size2;
	delete[] arr1;

	arr1 = new int[size1];
	for (int i = 0; i < size2; ++i)
		arr1[i] = arr2[i];


	ShowArray(arr1, size1);
	ShowArray(arr2, size2);




	cout << endl << endl << endl;
	ChangeArray1(arr1, size1);


	ShowArray(arr1, size1);



	delete[] arr1;
	delete[] arr2;

}