#include<iostream>


using namespace std;


//这里就简单的拿整型ID号来模拟
int Find(int *a ,size_t size)
{
	int id = a[0];
	int ntimes = 0;
	for (int i = 1; i < size; ++i)
	{
		if (ntimes == 0)
		{
			id = a[i];
		}
		if (id == a[i])
		{
			ntimes++;
		}
		else
		{
			ntimes--;
		}
	}
	return id;
}



int main()
{
	int a[10] = { 2,4,2,4,2,6,2,2,7,2 };
	cout << Find(a, 10) << endl;
	return 0;
}