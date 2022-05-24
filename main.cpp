#include <iostream>

using namespace std;


class StaticClass
{
public:
	StaticClass()
	{
		Count++;
	}

	virtual ~StaticClass()
	{
		Count--;
	}

	static int Count;
};

int StaticClass::Count = 0;



class Singleton
{
private:
	Singleton()
	{

	}

	int Gold;

public:
	Singleton* Do()
	{
		Gold;
		return this;
	}

	virtual ~Singleton()
	{

	}

	static Singleton* GetInstance()
	{
		if (Singleton::Instance == nullptr)
		{
			Singleton::Instance = new Singleton();
		}

		return Singleton::Instance;
	}

private:
	static Singleton* Instance;

};

Singleton* Singleton::Instance = nullptr;




int main()
{
	Singleton::GetInstance()->Do();
	
	//cout << StaticClass::Count << endl;

}