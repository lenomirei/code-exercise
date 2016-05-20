#include<iostream>
using namespace std;


void PrintMatrix(int *a, int start, int rowsize, int colsize)
{
	if (start == rowsize - 1 || start == colsize -1)
	{
		return;
	}
	int i = start;
	int j;
	for (j = start; j < colsize - start; ++j)
	{
		cout << a[i*colsize + j] << " ";
	}
	--j;
	for (i = start + 1; i < rowsize - start; ++i)
	{
		cout << a[i*colsize + j] << " ";
	}
	--i;
	for (j -= 1; j >= start; --j)
	{
		cout << a[i*colsize + j] << " ";
	}
	++j;
	for (i -= 1; i > start; --i)
	{
		cout << a[i*colsize + j] << " ";
	}
	return PrintMatrix(a, start + 1, rowsize, colsize);
}



int main()
{
	int a[4][4]=
	{
		{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}
	};
	int b[2][4] = { {1,2,3,4},{5,6,7,8} };
	int c[4][2] = 
	{
		{1,2} ,
		{3,4},
		{5,6},
		{7,8}
	};
	PrintMatrix(*a, 0,4,4);
	cout << endl;
	PrintMatrix(*b, 0, 2, 4);
	cout << endl;
	PrintMatrix(*c, 0, 4, 2);
	return 0;
}