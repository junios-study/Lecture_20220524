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

template<typename T>
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

protected:
	T* Database;
	int Capicity;
	int Size;

public:
	int GetSize() { return Size; }

	bool Push(int Data)
	{
		if (Size > Capicity)
		{
			return false;
		}

		Database[Size++] = Data;

		return true;
	}

	T Pop()
	{
		if (Size <= 0)
		{
			return -1;
		}

		T Number = Database[0];
		for (int i = 0; i < Size - 1; ++i)
		{
			Database[i] = Database[i + 1];
		}

		Size--;

		return Number;
	}
};

template<typename T>
class ChildQueue : public Queue<T>
{
public:
	void Clear()
	{
		Size = 0;
	}
};


int main()
{
	queue<int> intQ;

	ChildQueue<int> IntQueue;


	for (int i = 0; i < 10; ++i)
	{
		IntQueue.Push(i);
	}

	cout << IntQueue.Pop() << endl;
	cout << IntQueue.Pop() << endl;

	//IntQueue.Clear();

	IntQueue.Push(10);
	IntQueue.Push(11);

	while (IntQueue.GetSize() != 0)
	{
		cout << IntQueue.Pop() << endl;
	}

	return 0;

}