#include<iostream>
using namespace std;


int TheNumofArray(int *a,size_t size)
{
	int count = 0;
	int tmp = a[0];
	for (int i = 1; i < size; ++i)
	{
		if (tmp != a[i])
		{
			count--;
		}
		if (count < 0)
		{
			tmp = a[i];
			count = 0;
		}
	}
	return tmp;
}






int main()
{
	int a[10] = { 2,4,2,4,2,6,2,2,7,2 };
	cout << TheNumofArray(a, 10) << endl;
	return 0;
}