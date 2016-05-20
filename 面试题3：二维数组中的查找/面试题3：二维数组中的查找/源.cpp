//题目：在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
//请完成一个函数，输入这样的一个二维数组，和一个整数，判断数组中是否含有该整数


#include<iostream>
#include<cassert>
using namespace std;


bool Judge(int *a, int x, int rowSize, int colSize)
{
	assert(a);
	int j = colSize - 1;
	for (int i = 0; i < rowSize; ++i)
	{
		for (; j >= 0; --j)
		{
			if (a[i*colSize + j]>x)
			{
				continue;
			}
			if (a[i*colSize + j] < x)
			{
				break;
			}
			if (a[i*colSize + j] == x)
			{
				return true;
			}
		}
	}
	return false;

}






int main()
{
	int a[][5] =
	{
		{1,2,3,4,5},
		{2,3,4,5,6},
		{3,4,5,6,7},
		{4,5,6,7,8},
		{5,6,7,8,9}, 
	};
	int b[][4] =
	{
		{1,2,8,9},
		{2,4,9,12},
		{4,7,10,13},
		{6,8,11,15},
	};

	if (Judge((int *)a,1,5,5))
	{
		cout << "find it!" <<1<< endl;
	}
	if (Judge((int *)a, 5, 5, 5))
	{
		cout << "find it!" << 5<<endl;
	}
	if (Judge((int *)a, 9, 5, 5))
	{
		cout << "find it!" <<9<< endl;
	}
	if (Judge((int *)a, 7, 5, 5))
	{
		cout << "find it!" <<7<< endl;
	}
	if (Judge((int *)b, 1, 4, 4))
	{
		cout << "find it!" <<"b1"<< endl;
	}
	if (Judge((int *)b, 5, 4, 4))
	{
		cout << "find it!" << "b5"<<endl;
	}
	if (Judge((int *)b, 9, 4, 4))
	{
		cout << "find it!" << endl;
	}
	if (Judge((int *)b, 7, 4, 4))
	{
		cout << "find it!" << endl;
	}
	if (Judge((int *)b, 15, 4, 4))
	{
		cout << "find it!" << endl;
	}
	return 0;
}
