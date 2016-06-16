#include<iostream>
using namespace std;


//三步走战略
//计算各位相加不要进位，例如5+17就是12（个位5+7不要进位变2，十位0+1 变1）
//做进位算出进位大小
//第二步和第一步所得结果相加，这不就循环了么~

int Add(int a,int b)
{
	int sum = 0;
	int carry;
	int tmp;
	do
	{
		tmp = a;
		a = a^b;
		b = (tmp & b) << 1;
	} while (b != 0);
	return a;
}



int main()
{
	cout << "sum is " << Add(5,17) << endl;
	return 0;
}