#include<iostream>
#include<vector>
using namespace std;
//��Ȼ��Ѱ����С��k������ȻҪȥ������С��


void AdjustDown(int *a, size_t size, int root)
{
	int child = root * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size &&a[child + 1] < a[child])
		{
			child++;
		}


		if (a[child] < a[root])
		{
			swap(a[child], a[root]);
			root = child;
			child = root * 2 + 1;
		}
		else
		{
			break;
		}
	}
}


void HeapSort(int *a, size_t size, int k)
{
	for (int i = (size - 2) / 2; i >= 0; --i)
	{
		AdjustDown(a, size, i);
	}//�������Ȼ����˵��
	for (int i = size - 1; i >= size - 1 - k; --i)
	{
		cout << a[0] << endl;
		swap(a[0], a[i]);
		AdjustDown(a, i, 0);
	}
}









int main()
{
	int a[] = { 9,8,7,6,5,4,3,2,1,0 };
	HeapSort(a, 10, 5);
	return 0;
}



