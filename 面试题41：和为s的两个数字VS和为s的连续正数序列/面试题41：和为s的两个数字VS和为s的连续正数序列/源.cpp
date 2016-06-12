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

//��Ϊs�������������У�������û��ϵ�˿�
void SumIss(int sum)
{
	int small = 1;
	int big = 2;
	int middle = sum / 2;
	while (1)
	{
		int s = 0;
		for (int i = small; i <= big; ++i)
		{
			s += i;
		}
		if (s > sum && small < middle)
		{
			small++;
		}
		else if (s > sum && small >= middle)
		{
			break;
		}
		else if(s<sum)
		{
			big++;
		}
		else
		{
			for (int i = small; i <= big; ++i)
			{
				cout << i << "  ";
			}
			big++;
		}
	}
	
}



int main()
{
	SumIss(15);
	return 0;
}