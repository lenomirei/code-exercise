#include<iostream>
using namespace std;

int Fibonacci_R(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return Fibonacci_R(n - 1) + Fibonacci_R(n - 2);
}



int Fibonacci(int n)
{
	int *fibonacci = new int[n + 1];
	fibonacci[0] = 1;
	fibonacci[1] = 1;
	for (int i = 2; i < n + 1; ++i)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	return fibonacci[n];
}



void test()
{
	cout << Fibonacci(5) << endl;
}
void test1()
{
	cout << Fibonacci_R(5) << endl;

}


int main()
{
	test();
	test1();
	return 0;
}