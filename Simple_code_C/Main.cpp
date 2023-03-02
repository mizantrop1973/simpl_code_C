#include<iostream>							/// ввод-вывод
#include<ctime>								/// врем€
#include <math.h>							/// математические ф-ции
#include<algorithm>							/// библиотека ф-ций
#include<locale.h>							/// €зык
#include<fstream>							/// поток в файлы
#include<string>
#include<Windows.h>							/// дл€ изменени€ кодировки консоли
#include<memory>							/// умные указатели
using namespace std;


															/// ќƒЌќ—¬я«Ќџ… —ѕ»—ќ 


template<typename T>
class List
{
public:
	List();
	~List();

	void push_back(T data);
	void pop_front();
	void push_front(T data);
	void pop_back();void clear();
	void insert(T value, int index);
	void remoweAt(int index);
	int GetSize() {return Size;}
	T& operator[](const int index);
	
	

private:
	template<typename T1=T>
	class Node
	{
	public:
		Node(T1 data = T1(), Node* pNext = nullptr);/*/// фактически параметры по умолчанию при объ€влении, чтобы не было мусора, и дл€ последнего члена списка
		{
			this->data = data;
			this->pNext = pNext;
		}  */
		~Node();

		Node* pNext;
		T1 data;

		
	
		
	};

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
	clear();
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
void List<T>::pop_front()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	--Size;
}

template<typename T>
void List<T>::clear()
{
	while (Size)
		pop_front();
}

template<typename T>
void List<T>::insert(T value, int index)
{
	if (head == nullptr || index <= 0)
	{
		this->push_front(value);
	}
	else if (index >= this->Size)
	{
		this->push_back(value);
	}
	else
	{
		Node<T>* previos = head;
		for (int i = 0; i < index - 1; ++i)
			previos = previos->pNext;
		Node<T>* newNode = new Node<T>(value, previos->pNext);
		previos->pNext = newNode;
		++Size;
	}
}

template<typename T>
void List<T>::remoweAt(int index)
{
	if (index <= 0)
	{
		this->pop_front();
	}
	else
	{
		if (index >= this->Size - 1)
			index = Size - 1;

		Node<T>* previos = head;

		for (int i = 0; i < index - 1; ++i)
			previos = previos->pNext;

		Node<T>* toDelete = previos->pNext;
		previos->pNext = toDelete->pNext;
		delete toDelete;
		--Size;
	}
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

template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head);
	++Size;
}

template<typename T>
void List<T>::pop_back()
{
	remoweAt(Size - 1);
}



int  main()

{
	setlocale(LC_ALL, "ru");
	List<int> lst;

	int numbersCount;
	cin >> numbersCount;
	cout << endl << endl;

	for (int i = 0; i < numbersCount; ++i)
	{
		lst.push_back(rand() % 100);
	}


	/*lst.push_back(5);
	lst.push_back(10);
	lst.push_back(22);*/
	/*cout<<lst.GetSize()<< endl;*/

	/*cout << lst[0] << endl;*/

	for (int i = 0; i < lst.GetSize(); ++i)
		cout << lst[i] << endl;

	cout << "Ёлементов в списке " << lst.GetSize() << endl << endl << "выполн€ю метод pop_front" << endl << endl;
	//lst.pop_front();
	//lst.push_front(100);
	lst.pop_back();
	//lst.insert(1050, 10);
	//lst.remoweAt(5);

	for (int i = 0; i < lst.GetSize(); ++i)
		cout << lst[i] << endl;

	cout << "Ёлементов в списке " << lst.GetSize() << endl << endl;

	//lst.clear();

	return 0;
 }

template<typename T>
template<typename T1>
List<T>:: Node<T1>::Node(T1 data, Node* pNext) : data(data), pNext(pNext)
{
	/*this->data = data;
	this->pNext = pNext;*/
}

template<typename T>
template<typename T1>
List<T>::Node<T1>::~Node()
{
}
