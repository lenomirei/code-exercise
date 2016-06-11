#include<iostream>
using namespace std;


//判断一个数组中是否有逆序对，按照从小到大为正序，一个数字可多次使用
//例如{7,5,6,4}中含有5个逆序对
//利用类似归并排序的做法在排序的同时计数
void merge(int *a, int *tmp, int left1, int right1, int left2, int right2, int &count)
{
	int index = left1;
	while (left1 <= right1 && left2 < right2)
	{
		if (a[left1] < a[left2])
		{
			tmp[index++] = a[left1++];

		}
		else
		{
			tmp[index++] = a[left2++];
			count++;
		}

	}
	while (left1 <= right1)
	{
		tmp[index++] = a[left1++];
		count++;
	}
	while (left2 <= right2)
	{
		tmp[index++] = a[left2++];
	}
}


void _Count(int *a, int *tmp, int left, int right, int &count)
{
	int mid = left + (right - left) / 2;
	if (left < right)
	{
		_Count(a, tmp, left, mid, count);
		_Count(a, tmp, mid + 1, right, count);
		merge(a, tmp, left, mid, mid + 1, right, count);
		memcpy(a + left, tmp + left, sizeof(int)*(right - left + 1));
	}
}


void Count(int *a,size_t length)
{
	int *tmp = new int[length];
	int count = 0;
	_Count(a, tmp, 0, length - 1, count);
	cout <<"count:" <<count << endl;
}

void testCount()
{


	int a[4] = { 7,5,6,4 };
	Count(a, 4);
}


int main()
{
	testCount();
	return 0;
}