#include<iostream>
using namespace std;
//我将使用4种方法求解
//1.利用构造函数求解
//2.利用虚函数求解
//3.函数指针求解
//4.利用模板类型求解

class Sum
{
public:
	Sum()
	{
		n++;
		sum += n;
	}
	static void Reset()
	{
		n = 0;
		sum = 0;
	}
	int getSum()
	{
		return sum;
	}
public:
	static int n;
	static int sum;
};
int Sum::n = 0;
int Sum::sum = 0;

void test1()
{
	Sum::Reset();
	Sum *tmp = new Sum[100];
	delete tmp;
	cout << Sum::sum << endl;
}


int main()
{
	test1();
	return 0;
}