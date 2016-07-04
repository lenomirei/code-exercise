//典型的通过堆可以实现的题目


#include <iostream>


using namespace std;

void AdjustDown(int *a, int parent, size_t size)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && a[child + 1] < a[child])
		{
			child++;

		}
		if (a[child] < a[parent])
		{
			swap(a[child], a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			break;
	}
}


void HeapSort(int *a,size_t size)
{
	for (int i = (size - 2) / 2; i >= 0; --i)
	{
		AdjustDown(a, i, size);
	}
	for (int i = size - 1; i >= 0; --i)
	{
		swap(a[i], a[0]);
		AdjustDown(a, 0, i);
	}
}



int main()
{
	int a[10] = { 6,7,8,9,0,1,2,3,4,5 };
	HeapSort(a, 10);
	return 0;
}