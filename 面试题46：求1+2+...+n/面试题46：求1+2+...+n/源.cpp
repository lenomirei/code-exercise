#include<iostream>
using namespace std;
//我将使用4种方法求解
//1.利用构造函数求解
//2.利用虚函数求解
//3.函数指针求解
//4.利用模板类型求解

//class Sum
//{
//public:
//	Sum()
//	{
//		n++;
//		sum += n;
//	}
//	static void Reset()
//	{
//		n = 0;
//		sum = 0;
//	}
//	int getSum()
//	{
//		return sum;
//	}
//public:
//	static int n;
//	static int sum;
//};
//int Sum::n = 0;
//int Sum::sum = 0;
//
//void test1()
//{
//	Sum::Reset();
//	Sum *tmp = new Sum[100];
//	delete tmp;
//	cout << Sum::sum << endl;
//}



class B
{
public:
	virtual int Sum(unsigned int n)
	{
		return 0;
	}
};

B* arr[2];

class C :public B
{
public:
	int Sum(unsigned int n)
	{
		return arr[!!n]->Sum(n - 1) + n;
	}
};




void test2()
{
	B b;
	C c;
	arr[0] = &b;
	arr[1] = &c;
	cout << arr[1]->Sum(100) << endl;
}



//
//typedef int(*FUNC)(unsigned int);
//
//FUNC f[2];
//int Over(unsigned int n)
//{
//	return 0;
//}
//
//
//int Sum(unsigned int n)
//{
//	return f[!!n](n - 1) + n;
//}
//void test3()
//{
//	f[0] = Over;
//	f[1] = Sum;
//	cout << "The sum is:" << Sum(100) << endl;
//}



template<unsigned int n>
struct SumSolution
{
	enum Value { N = SumSolution<n - 1>::N + n };
};


template<>
struct SumSolution<1>
{
	enum Value { N = 1 };
};




void test4()
{
	SumSolution<100> s;
	cout << s.N << endl;

}



int main()
{
	//test1();
	test2();
	//test3();
	//test4();
	return 0;
}

