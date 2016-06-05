#include<iostream>
#include<cassert>
using namespace std;




void Combine(int *set,int root1,int root2)
{
	assert(root1 >= 0);
	assert(root2 >= 0);
	set[root1] += set[root2];
	set[root2] = root1;
}


int FindRoot(int *set,int child)
{
	while (set[child] >= 0)
	{
		child = set[child];
	}
	return child;
}



int Friends(int n,int m,int r[][2])
{
	int *set = new int[n + 1];
	for (int i = 1; i < n + 1; ++i)
	{
		set[i] = -1;
	}
	for (int i = 0; i < m; ++i)
	{
		int root1 = r[i][0];
		int root2 = r[i][1];
		if (set[root1] >= 0)
		{
			root1 = FindRoot(set, root1);
		}
		if (set[root2] >= 0)
		{
			root2 = FindRoot(set, root2);
		}
		Combine(set, root1, root2);
	}
	int count = 0;
	for (int i = 1; i < n + 1; ++i)
	{
		if (set[i] < 0)
		{
			count++;
		}
	}
	return count;
}




int main()
{
	int n = 5;
	int m = 3;
	int r[3][2] = { {1,2},{2,3},{4,5} };
	cout << Friends(n, m, r) << endl;
	return 0;
}