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

//˼·����i=2Ҳ���ǵ��˵���������ǡ����3�������ǰ��ĺ���Ϊsum�����sum+a[i]<a[i]�������Ͳ�����
//�����������ˣ��趨������Ӵ˿̿�ʼ���Ǵ�3��ʼ��

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