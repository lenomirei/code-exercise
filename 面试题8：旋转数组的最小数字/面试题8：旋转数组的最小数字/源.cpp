#include<iostream>
#include<cassert>
using namespace std;

//采用分治的想法，可以看成是两部分排序的数组

//int Min(int *array, int size)
//{
//	assert(array && size > 0);
//	int p1, p2;
//	p1 = 0;
//	p2 = size - 1;
//	while (p1 != p2 - 1)
//	{
//		int mid = (p1 + p2) / 2;
//		if (array[mid] > array[p1])
//		{
//			p1 = mid;
//		}
//		else
//		{
//			p2 = mid;
//		}
//	}
//	return array[p2];
//}


int Min(int *a ,size_t size)
{
	int left = 0;
	int right = size - 1;
	while (right - left != 1)
	{
		int mid = left + (right - left) / 2;
		if (a[mid] > a[left])
		{
			left = mid;
		}
		if (a[mid] < left)
		{
			right = mid;
		}
	}
	return a[right];
}


int main()
{
	int array[] = { 8,9,10,11,22,55,66,2,3,4 };
	cout << Min(array, 10) << endl;
	return 0;
}