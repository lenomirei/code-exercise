#include<iostream>
using namespace std;

//不使用多余的变量，加法实现
void Swap1(int &a,int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;

}


//不使用多余的变量，异或实现
void Swap2(int &a, int &b)
{
	a = a^b;
	b = a^b;
	a = a^b;

}




int main()
{
	int a = 3;
	int b = 2;
	Swap2(a, b);
	return 0;
}
