////给定一个整数N，那么N的阶乘N!末尾有多少个0呢？
//
////第一种方法就是计算N的阶乘中有几次出现5，或者5的倍数
//#include<iostream>
//using namespace std;
//
//int Count0(int n)
//{
//	int count = 0;
//	for (int i = n; i > 0; i--)
//	{
//		if (i % 5 == 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int _Count0(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count += n / 5;
//		n /= 5;
//	}
//	return count;
//}
//
//
//
//void test()
//{
//	int a = 5;
//	cout << _Count0(a) << endl;
//}
//
//
//
//int main()
//{
//	test();
//	return 0;
//}



#include<iostream>
using namespace std;


//求N!二进制表示中最低位1的位置

//解法一：当你用一数除以2的时候，从二进制的角度来看，如果二进制的最后一位是一个0，那么直接将该二进制数右移一位，如果最后一位是一个1的话，那么除不尽，不应该往右移

int findposition(int n)
{
	int count = 0;
	for (int i = n; i > 0; i--)
	{
		if (i % 2 == 0)
		{
			count++;
		}
	}
	return count;
}


//采用和之前的算法一样的公式

int Find1Position(int n)
{
	int count = 0;

	while (n)
	{
		count += n / 5;
		n /= 5;
	}
	return count;
}


void test()
{
	int n = 5;
	cout << findposition(n) << endl;
	//Find1Position


}

int main()
{
	test();
	return 0;
}