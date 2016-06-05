#include<iostream>
using namespace std;


int BinarySearch(int *a, size_t size, int x)
{
	int left = 0;
	int right = size;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (x < a[mid])
		{
			right = mid;
		}
		else if (x > a[mid])
		{
			left = mid;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}


int CountofNum(int *a, size_t size, int x)
{
	int count = 1;
	int index = BinarySearch(a, size, x);
	if (index == -1)
	{
		cout << "´íÎóÊäÈë" << endl;
		return -1;
	}
	for (int i = 1; a[index + i] == x; ++i)
	{
		
		count++;
	}
	for (int i = 1; a[index - i] == x; ++i)
	{

		count++;
	}
	return count;
}




int main()
{
	int a[10] = { 1,1,2,4,8,8,8,8,9,10 };
	cout << CountofNum(a, 10, 8) << endl;
	return 0;
}



