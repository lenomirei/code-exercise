#include<iostream>
using namespace std;

//��һ���������ҵ���Ϊsum����������
void func1(int *a,size_t size,int sum)
{
	for (int i = 0; i < size; ++i)
	{
		int left = a[i];
		for (int j = size - 1; j >= 0; j--)
		{
			if (left + a[j] == sum)
			{
				cout << left << endl;
				cout << a[j] << endl;
				return;
			}
			else if(left + a[j] > sum)
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
}

//�Ż��汾
void fasterfunc1(int *a, size_t size, int sum)
{
	int *ahead = a;
	int *behind = a + size - 1;
	while (1)
	{
		if (*ahead + *behind == sum)
		{
			cout << *ahead << endl;
			cout << *behind << endl;
			return;
		}
		else if (*ahead + *behind < sum)
		{
			ahead++;
		}
		else
		{
			behind--;
		}
	}
}

//��һ���������ҵ���Ϊsum��һ������
void func2(int *a, size_t size,int sum)
{

}



int main()
{
	int a[6] = { 1,2,4,7,11,15 };
	fasterfunc1(a, 6, 15);
	return 0;
}