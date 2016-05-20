//��Ŀ����һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
//�����һ������������������һ����ά���飬��һ���������ж��������Ƿ��и�����


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
