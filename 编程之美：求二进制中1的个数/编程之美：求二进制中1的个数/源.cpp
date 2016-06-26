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



//剩下两种方法都是采用使用空间换取时间的方法，一个是采用switch case的分支，256个分支并没有多么高的效率，尤其是当选择到最后一个分支的时候
//另一个就是把256个结果都定义在数组里面，这个快了很多，时间复杂度就是O(1)

void test()
{
	int a = 3;
	int result;
	//result = count1(a);
	//result = count2(a);
	
	cout << result << endl;
}

int main()
{
	test();
	return 0;
}