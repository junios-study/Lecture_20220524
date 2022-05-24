#include <iostream>

using namespace std;

class Parent
{
public:
	Parent() : Money(0) {}
	virtual ~Parent() {}

	void Do()
	{

	}

private:
	int Money;

protected:
	int ChildMoney;

public:
	//Accessor
	int GetMoney()
	{ 
		return Money;
	}

	void SetMoney(int NewMoney)
	{
		if (NewMoney > 0)
		{
			Money = NewMoney;
		}
	}
};

class ±è³²¿í : public Parent
{
public:
	void Waste()
	{
		ChildMoney = -100;
	}
};

int main()
{
	Parent P;
	P.Do();
	cout << P.GetMoney() << endl;
	P.SetMoney(10);
	cout << P.GetMoney() << endl;

	±è³²¿í A;
	A.Waste();
}