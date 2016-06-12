#include<iostream>
using namespace std;

//在一个数组中找到和为sum的两个数字
void func1(int *a,size_t size,int sum)
{
	for (int i = 0; i < size; ++i)
	{
		int left = a[i];
		for (int j = size - 1; j >= 0; j--)
		{
			if (left + a[j] == sum)
			{
				cout << left << endl;
				cout << a[j] << endl;
				return;
			}
			else if(left + a[j] > sum)
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
}

//优化版本
void fasterfunc1(int *a, size_t size, int sum)
{
	int *ahead = a;
	int *behind = a + size - 1;
	while (1)
	{
		if (*ahead + *behind == sum)
		{
			cout << *ahead << endl;
			cout << *behind << endl;
			return;
		}
		else if (*ahead + *behind < sum)
		{
			ahead++;
		}
		else
		{
			behind--;
		}
	}
}

//和为s的连续正数序列，跟数组没关系了咯
void SumIss(int sum)
{
	int small = 1;
	int big = 2;
	int middle = sum / 2;
	while (1)
	{
		int s = 0;
		for (int i = small; i <= big; ++i)
		{
			s += i;
		}
		if (s > sum && small < middle)
		{
			small++;
		}
		else if (s > sum && small >= middle)
		{
			break;
		}
		else if(s<sum)
		{
			big++;
		}
		else
		{
			for (int i = small; i <= big; ++i)
			{
				cout << i << "  ";
			}
			big++;
		}
	}
	
}



int main()
{
	SumIss(15);
	return 0;
}