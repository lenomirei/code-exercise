//#include<iostream>
//
//
//using namespace std;
//
////一个整形数组里除了一个数字以外，其他的数字都出现了两次
//
//void findNum(int *a ,size_t length)
//{
//	int value = a[0];
//	for (int i = 1; i < length; ++i)
//	{
//		value = value^a[i];
//	}
//	cout << value << endl;
//}
//
//
//
//int main()
//{
//	int a[9] = { 2,4,3,6,3,2,5,5,6 };
//	findNum(a, 9);
//	return 0;
//}
//
//
//升级版，一个数组里除了两个数以外，至少出现两次
#include<iostream>
#include<vector>
using namespace std;

void _findNum(int *a, size_t length)
{
	int value = a[0];
	for (int i = 1; i < length; ++i)
	{
		value = value^a[i];
	}
	cout << value << endl;
}



void Dilivery(int *a, size_t length, int bit, vector<int>& v1, vector<int>& v2)
{
	for (int i = 0; i < length; ++i)
	{
		if ((a[i] & bit) == 0)
		{
			v1.push_back(a[i]);
		}
		else
		{
			v2.push_back(a[i]);
		}
	}
}



void findNum(int *a ,size_t length)
{
	int bit = a[0];
	for (int i = 1; i < length; ++i)
	{
		bit = bit^a[i];
	}
	vector<int> v1;
	vector<int> v2;
	Dilivery(a, length, bit,v1,v2);
	_findNum(&v1[0],v1.size());
	_findNum(&v2[0],v2.size());
}



int main()
{
	int a[8] = { 2,4,3,6,3,2,5,5 };
	findNum(a, 8);
	return 0;
}
