#include <iostream>
using namespace std;



long long gcd0(long long l, long long r)
{
	if (l < r)
	{
		return gcd0(r, l);
	}
	else if (r == 0)
	{
		return l;
	}
	else
	{
		gcd0(r, l%r);
	}
}



long long gcd1(long long l, long long r)
{
	long long tmp = 1;
	if (l < r)
	{
		swap(l, r);
	}
	while (tmp)
	{
		tmp = l%r;
		l = r;
		r = tmp;
	}
	return l;
}



int gcd2(int l,int r)
{
	if (l < r)
	{
		gcd2(r, l);
	}
	else if (r == 0)
	{
		return l;
	}
	else
	{
		return gcd2(r, l - r);
	}
}



int gcd3()
{
	int tmp = 1;
	while (tmp)
	{

	}
	return 0;
}



bool IsEven(int x)
{
	if (x % 2 == 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}


int gcd4(int l, int r)
{
	if (l < r)
	{
		return gcd4(r, l);
	}
	if (r == 0)
	{
		return l;
	}
	if (IsEven(l))
	{
		if (IsEven(r))
		{
			return (gcd4(l >> 1, r >> 1) << 1);
		}
		else
		{
			return (gcd4(l >> 1, r));
		}
	}
	else
	{
		if (IsEven(r))
		{
			return (gcd4(l, r >> 1));
		}
		else
		{
			return (gcd4(r, l - r));
		}
	}
	return l;
}


int main()
{
	long long l = 24;
	long long r = 16;
	//cout << gcd0(l, r) << endl;
	//cout << gcd1(l, r) << endl;
	//cout << gcd2(l, r) << endl;
	cout <<  gcd4(l, r) << endl;
	return 0;
}