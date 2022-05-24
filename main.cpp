#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

//#####						3,3
//#  ##						3,2	
//# # #						3,1
//#  P#						2,1
//#####						1,1
template<typename T>
class Stack
{
public:
	Stack() {}
	virtual ~Stack() {}

	T Database[10];

	int Cursor = -1;

	void Push(T A)
	{
		Database[++Cursor] = A;
	}

	void Pop()
	{
		Cursor--;
	}

	T Top()
	{
		return Database[Cursor];
	}
};

class Queue
{
public:
	Queue(int NewCapicity = 10)
	{
		Capicity = NewCapicity;
		Database = new int[Capicity];
		Size = 0;
	}

	virtual ~Queue()
	{
		delete[] Database;
	}

	int* Database;
	int Capicity;
	int Size;

	bool Push(int Data)
	{
		if (Size > Capicity)
		{
			return false;
		}

		Database[Size++] = Data;

		return true;
	}

	int Pop()
	{
		if (Size <= 0)
		{
			return -1;
		}

		int Number = Database[0];
		for (int i = 0; i < Size - 1; ++i)
		{
			Database[i] = Database[i + 1];
		}

		Size--;

		return Number;
	}
};


int main()
{
	Queue IntQueue;

	for (int i = 0; i < 10; ++i)
	{
		IntQueue.Push(i);
	}

	cout << IntQueue.Pop() << endl;
	cout << IntQueue.Pop() << endl;

	IntQueue.Push(10);
	IntQueue.Push(11);

	for (int i = 0; i < 13; ++i)
	{
		cout << IntQueue.Pop() << endl;
	}

	return 0;

}