#include<iostream>
using namespace std;


//void Remove(int *a,size_t size)
//{
//	int p1 = 0;
//	int p2 = size - 1;
//	while (p1 < p2)
//	{
//		if (p1 < p2 && (a[p1] % 2 == 0))
//		{
//			swap(a[p1], a[p2]);
//			p1++;
//		}
//		else
//		{
//			p1++;
//		}
//		if (p1 < p2 && (a[p2] % 2 != 0))
//		{
//			swap(a[p1], a[p2]);
//			p2--;
//		}
//		else
//		{
//			p2--;
//		}
//	}
//}

//void Remove(int *a ,size_t size)
//{
//	int begin = 0;
//	int end = size - 1;
//	while (begin < end)
//	{
//		if (begin < end && a[end] % 2 == 1)
//		{
//			swap(a[begin], a[end]);
//			begin++;
//		}
//		else
//		{
//			end--;
//		}
//		if (begin < end && a[begin] % 2 == 0)
//		{
//			swap(a[begin], a[end]);
//			end--;
//		}
//		else
//		{
//			begin++;
//		}
//	}
//}



int main()
{
 	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	Remove(a, 10);
	for (int i = 0; i < 10; ++i)
	{
		cout << a[i] << " ";
	}
	return 0;
}