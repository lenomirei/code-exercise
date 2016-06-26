#include<iostream>
using namespace std;


int Numof1(int n)
{
	int result = 0;
	int tmp = 1;
	int i = 0;
	while (n / tmp)
	{
		if (n / tmp != 1)
		{
			int look = (n / pow(10, i + 1) + 1);
			int look2 = pow(10, i);
			int tt = look * look2;
			result = result + tt;

		}
		else
		{
			int lala = pow(10, i);
			result = result + n%lala + 1;
		}
		i++;
		tmp *= 10;
	}


	return result;
}




int numof1(int n)
{
	int result = 0;
	int tmp = 1;
	int curnum = 0;
	int lowernum = 0;
	int highernum = 0;
	while (n / tmp)
	{
		curnum = (n / tmp) % 10;
		lowernum = n - (n / tmp)*tmp;
		highernum = n / (tmp * 10);
		switch (curnum)
		{
		case 0:
			result += highernum*tmp;
			break;
		case 1:
			result += highernum*tmp + lowernum + 1;
			break;
		default:
			result += (highernum + 1)*tmp;
			break;
		}
		tmp *= 10;
	}
	return result;
}

int main()
{
	//cout << Numof1(120) << endl;
	cout << numof1(123) << endl;
	return 0;
}


//满足f(N)=N的最大N值是多少？