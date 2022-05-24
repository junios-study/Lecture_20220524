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

class 김남욱 : public Parent
{
public:
	void Waste()
	{
		ChildMoney = -100;
	}
};

//		
//public		공개		상속(자식이 사용가능)
//protected		비공개		상속(자식이 사용가능)
//private		비공개		상속X(자식이 사용 불가능)

int main()
{
	Parent P;
	P.Do();
	cout << P.GetMoney() << endl;
	P.SetMoney(10);
	cout << P.GetMoney() << endl;

	김남욱 A;
	A.Waste();
}