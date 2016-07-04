#include<iostream>
using namespace std;



int SubSum(int *a ,size_t length)
{
	int maxsum = 0x80000000;
	int cursum = 0;
	for (int i = 0; i < length; i++)
	{
		cursum += a[i];
		if (cursum < a[i])
		{
			cursum = a[i];
		}
		if (cursum > maxsum)
		{
			maxsum = cursum;
		}
	}
	return maxsum;
}





int main()
{

	int a[8] = { 1,-2,3,10,-4,7,2,-5 };
	cout << SubSum(a, 8) << endl;
	return 0;
}