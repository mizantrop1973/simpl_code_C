#include<iostream>							/// ����-�����
#include<ctime>								/// �����
#include <math.h>							/// �������������� �-���
#include<algorithm>							/// ���������� �-���
#include<locale.h>							/// ����
#include<fstream>							/// ����� � �����
#include<string>
#include<Windows.h>							/// ��� ��������� ��������� �������
#include<memory>							/// ����� ���������
using namespace std;


															/// ����������� ������


template<typename T>
class List
{
public:
	List();
	~List();

	void push_back(T data);
	int GetSize() { return Size; }
	T& operator[](const int index);

	template<typename T>
	class Node
	{
	public:
		Node(T data=T(), Node* pNext = nullptr)/// ���������� ��������� �� ��������� ��� ����������, ����� �� ���� ������, � ��� ���������� ����� ������
		{
			this->data = data;
			this->pNext = pNext;
		}  
		~Node(){}

		Node* pNext;
		T data;

		
	private:
		
	};
private:
	int Size;
	Node<T>* head;
};



template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}
template<typename T>
List<T>::~List()
{
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
		head = new Node<T>(data);
	else
	{
		Node<T>* current = this->head;
		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	++Size;
}

template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
			return current->data;
		else
			current = current->pNext;
		++counter;

	}
}



//template<typename T>
//List<T>::Node<T>::Node
//{
//	this->data = data;
//	this->pNext = pNext;
//}
//
//template<typename T>
//List<T>::Node<T>::~Node()
//{
//}



int  main()

{
	setlocale(LC_ALL, "ru");
	List<int> lst;

	int numbersCount;
	cin >> numbersCount;

	for (int i = 0; i < numbersCount; ++i)
	{
		lst.push_back(rand() % 100);
	}


	/*lst.push_back(5);
	lst.push_back(10);
	lst.push_back(22);*/
	cout<<lst.GetSize()<< endl;

	cout << lst[0] << endl;

	for (int i = 0; i < lst.GetSize(); ++i)
		cout << lst[i] << endl;
	return 0;
 }