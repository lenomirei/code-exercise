<<<<<<< HEAD
//求按从小到大的顺序的第1500个丑数
//出现大数问题
=======
>>>>>>> 8714f91b64889566807ec70c53e2afe4d0054887

#include<iostream>
#include<vector>
using namespace std;


<<<<<<< HEAD

int Min(int number1,int number2,int number3)
{
	return (number1 < number2 ? number1 : number2) < number3 ? (number1 < number2 ? number1 : number2) : number3;
}

void uglyNum1(int x)
{
	int i;
	vector<int> ugly;
	ugly.push_back(1);
	int count = 1;
	int end = ugly.size() - 1;
	while (count < x)
	{
		for (i = 0; ugly[i] * 2 <= ugly[end]; ++i)
		{
		}
		int tmp2 = ugly[i] * 2;
		for (i = 0; ugly[i] * 3 <= ugly[end]; ++i)
		{
		}
		int tmp3 = ugly[i] * 3;
		for (i = 0; ugly[i] * 5 <= ugly[end]; ++i)
		{
		}
		int tmp5 = ugly[i] * 5;

		int min = Min(tmp2, tmp3, tmp5);
		ugly.push_back(min);
		end++;
		count++;
	}
	for (int i = 0; i < 1500; i++)
	{
		cout << "第" << i << "个数：" << ugly[i] << endl;
	}
}

void uglyNum2(int x)
{
	vector<int> ugly;
	ugly.resize(x+2);

	ugly[0] = 1;
	int count = 1;


	int *t2 = &ugly[0];
	int *t3 = &ugly[0];
	int *t5 = &ugly[0];
	int end = 1;


	while (count < x)
	{
		int min = Min(*t2 * 2, *t3 * 3, *t5 * 5);
		ugly[count] = min;

		while (*t2*2 <= ugly[end])
		{
			t2++;
		}
		while (*t3*3<= ugly[end])
		{
			t3++;
		}
		while (*t5*5 <= ugly[end])
		{
			t5++;
		}
		end++;
		count++;
	}



	for (int i = 0; i < 1500; i++)
	{
		cout << "第" << i << "个数：" << ugly[i] << endl;
	}
=======
void uglyNum()
{

>>>>>>> 8714f91b64889566807ec70c53e2afe4d0054887
}




int main()
{
<<<<<<< HEAD
	uglyNum2(1500);
	return 0;
=======


>>>>>>> 8714f91b64889566807ec70c53e2afe4d0054887
}