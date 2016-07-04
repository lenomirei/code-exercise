#include<iostream>

using namespace std;



int comp(const void*a, const void*b)

{

	return *(int *)a - *(int*)b;

}



void Find(int *a, size_t length, int sum)
{
	qsort(a, length, sizeof(int), comp);
	int left = 0;
	int right = length - 1;

	while (left < right)
	{
		if (a[left] + a[right] > sum)
		{
			right--;
		}
		else if (a[left] + a[right] < sum)
		{
			left++;
		}
		else
		{
			cout << a[left] << "  " << a[right] << endl;
			left++;
		}
	}
}



int main()
{
	int a[10] = { 6,7,8,9,0,1,2,3,4,5 };
	Find(a, 10, 11);
	return 0;
}