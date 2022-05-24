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

class �賲�� : public Parent
{
public:
	void Waste()
	{
		ChildMoney = -100;
	}
};

//		
//public		����		���(�ڽ��� ��밡��)
//protected		�����		���(�ڽ��� ��밡��)
//private		�����		���X(�ڽ��� ��� �Ұ���)

int main()
{
	Parent P;
	P.Do();
	cout << P.GetMoney() << endl;
	P.SetMoney(10);
	cout << P.GetMoney() << endl;

	�賲�� A;
	A.Waste();
}