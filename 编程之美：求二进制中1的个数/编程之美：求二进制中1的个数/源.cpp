#include<iostream>
using namespace std;


int count1(int n)
{
	int count = 0;
	while (n)
	{
		n = n / 2;
		count++;
	}
	return count;
}

int count2(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}

int count3(int n)
{
	int count = 0;
	return count;
}

void test()
{
	int a = 3;
	int result;
	//result = count1(a);
	//result = count2(a);
	result = count3(a);
	cout << result << endl;
}

int main()
{
	test();
	return 0;
}