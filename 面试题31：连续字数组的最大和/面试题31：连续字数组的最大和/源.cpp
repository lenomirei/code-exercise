#include<iostream>

using namespace std;

//
//int SubSum(int *a,size_t length)
//{
//	int GreatestSum = 0x80000000;
//	int curSum = 0;
//	for (int i = 0; i < length; ++ i)
//	{
//		curSum += a[i];
//		if (curSum < a[i])
//		{
//			curSum = a[i];
//		}
//		if (curSum > GreatestSum)
//		{
//			GreatestSum = curSum;
//		}
//	}
//	return GreatestSum;
//}
//
//
//
//int main()
//{
//	int a[8] = { 1,-2,3,10,-4,7,2,-5 };
//	cout << SubSum(a, 8) << endl;
//	return 0;
//}

//思路：当i=2也就是到了第三个数（恰好是3），如果前面的和设为sum，如果sum+a[i]<a[i]，这样就不好了
//这样就尴尬了，设定子数组从此刻开始就是从3开始了

int SubSum(int *a, size_t size)
{
	int GreatestSum = 0x80000000;
	int CurSum = 0;
	for (int i = 0; i < size; ++i)
	{
		CurSum += a[i];
		if (CurSum < a[i])
		{
			CurSum = a[i];
		}
		if (CurSum > GreatestSum)
		{
			GreatestSum = CurSum;
		}
	}
	return GreatestSum;
}
int main()
{
	int a[8] = { 1,-2,3,10,-4,7,2,-5 };
	cout << SubSum(a, 8) << endl;
	return 0;
}