#include<iostream>
using namespace std;


bool InvalidInput = false;

long double power(int n,int exponent)
{
	long double result = 1;
	if (exponent < 0)
	{
		if (n == 0)
		{
			InvalidInput = true;
			cout << "出错！值无效";
			return -1;
		}
		else
		{
			for (int i = 0; i < abs(exponent); ++i)
			{
				result *= n;
			}
			return 1 / result;
		}
	}
	
	for (int i = 0; i < exponent; ++i)
	{
		result *= n;
	}
	return result;
}



int main()
{
	cout << power(2, -3) << endl;
	cout << power(0, -3) << endl;
	cout << power(0, 0) << endl;
	cout << power(-3, 0) << endl;
	return 0;
}