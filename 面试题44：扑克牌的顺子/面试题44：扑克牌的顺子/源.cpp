#include<iostream>
#include<cassert>
#include<stdlib.h>
using namespace std;


//从54张扑克牌中抽取5张牌，判断是否是顺子
//大王小王被看作可以替代任何牌面


int comp(const void*a, const void*b)
{
	return *(int*)a - *(int*)b;
}
bool Judge(int *a,int length)
{
	assert(a);
	qsort(a,length,sizeof(int),comp);


	int numofzero = 0;
	int numofgap = 0;
	for (int i = 0; i < length-1; ++i)
	{
		if (a[i] == 0)
		{
			numofzero++;
		}
		else
		{
			numofgap += a[i + 1] - a[i] - 1;
		}
	}
	if (numofgap==0)
	{
		return true;
	}
	else if (numofgap == numofzero)
	{
		return true;
	}
	else
	{
		return false;
	}
}



int main()
{
	int a[] = { 0,0,3,5,8 };
	int b[] = { 0,2,3,4,5 };
	int c[] = { 1,2,3,4,5 };
	int d[] = { 0,2,3,4,6 };
	int e[] = { 0,0,3,4,7 };
	int f[] = { 0,0,3,4,8 };
	cout <<"a"<< Judge(a, 5) << endl;
	cout <<"b"<< Judge(b, 5) << endl;
	cout <<"c"<< Judge(c, 5) << endl;
	cout <<"d"<< Judge(d, 5) << endl;
	cout <<"e"<< Judge(e, 5) << endl;
	cout <<"f"<< Judge(f, 5) << endl;
	return 0;
}