#include <iostream>
#include <string>

using namespace std;

//Standard Template Library

//template function
template<typename T>
T Sum(T A, T B)
{
	return A + B;
}

template<typename X, typename Y, typename Z>
Z Begin(X A, Y B)
{

	cout << A << endl;
	cout << B << endl;


	return (Z)(65);
}


int main()
{
	cout << Sum<int>(1, 2) << endl;
	cout << Sum<char>((char)64, (char)1) << endl;
	cout << Sum<float>(2.0f, 3.4f) << endl;
	cout << Sum<string>(string("Hello "), string("World")) << endl;
	cout << Sum<double>(323.0, 1011.111) << endl;

	cout << Begin<int, float, char>(static_cast<int>(2.2f), 20.5f) << endl;


	cout << Begin<int, int, char>(10,(int) 20.5f) << endl;

	return 0;

}