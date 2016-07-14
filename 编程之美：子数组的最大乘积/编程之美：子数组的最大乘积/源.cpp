#include <iostream>
using namespace std;



int multi(int *a ,size_t length)
{
	int *s = new int[length];
	int *t = new int[length];
	int max = 0x80000000;
	int tmp = 1;
	for (int i = 0; i < length; ++i)
	{
		s[i] = tmp;
		tmp *= a[i];
	}
	tmp = 1;
	for (int i = length - 1; i >= 0; --i)
	{
		t[i] = tmp;
		tmp *= a[i];;
	}
	int *p = new int[length];
	for (int i = 0; i < length; ++i)
	{
		p[i] = s[i] * t[i];
		if (p[i] > max)
		{
			max = p[i];
		}
	}
	delete[] s;
	delete[] t;
	delete[] p;
	return max;
}


int _multi(int *a, size_t length, size_t ex)
{
	int result = 1;
	for (int i = 0; i < length; ++i)
	{
		if (i != ex)
		{
			result *= a[i];
		}
	}
	return result;
}

int multi2(int *a ,size_t length)
{
	int numofzheng = 0;
	int numoffu = 0;
	int numof0 = 0;
	for (int i = 0; i < length; ++i)//从头开始扫描
	{
		if (a[i] < 0)
		{
			numoffu++;
		}
		else if (a[i] > 0)
		{
			numofzheng++;
		}
		else
		{
			numof0++;
		}
	}
	if (numof0 != 0)
	{
		if (numof0 != 1)
		{
			return 0;
		}
		else
		{
			//numof0 == 1
			for (int i = 0; i < length; ++i)
			{
				if (a[i] == 0)
				{
					return _multi(a, length, i);
				}
			}
		}
	}
	if (numoffu % 2 != 0)
	{
		//乘积为负数
		int index = 0;
		int maxmin = 0x80000000;
		for (int i = 0; i < length; ++i)
		{
			if (a[i] < 0)
			{
				if (a[i] > maxmin)
				{
					index = i;
					maxmin = a[i];
				}
			}
		}
		return _multi(a, length, index);
	}
	else
	{
		if (numofzheng != 0)
		{
			//有正数
			int min = 0x7fffffff;
			int index = 0;
			for (int i = 0; i < length; ++i)
			{
				if (a[i] > 0)
				{
					if (a[i] < min)
					{
						index = i;
						min = a[i];
					}
				}
			}
			return _multi(a, length, index);
		}
		else
		{
			//没有正数
			int minmin = 0;
			int index = 0;
			for (int i = 0; i < length; ++i)
			{
				if (a[i] < minmin)
				{
					index = i;
					minmin = a[i];
				}
			}
			return _multi(a, length, index);
		}
	}




}


int main()
{
	int a[10] = { 6,7,8,9,10,1,2,3,4,5 };
	cout << multi(a, 10) << endl;
	cout << multi2(a, 10) << endl;
	return 0;
}