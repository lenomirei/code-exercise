#include<iostream>
#include<vector>
using namespace std;



int Count(int n)
{
	//首先计算其长度
	vector<int > v;
	int length = 0;
	int tmp = 1;
	while (n / tmp)
	{
		length++;
		tmp *= 10;
	}
	int result = 0;
	while (length--)
	{

		v.push_back(n % 10);
		n /= 10;
	}
	for (int i = 0; i < v.size(); ++i)
	{
		int tt = pow(10, i);
		for (int j = i + 1; j < v.size(); ++j)
		{
			tt *= (v[j] + 1);
		}
		if (i != v.size() - 1)
		{
			result += tt;
		}
		else
		{
			if (v[i] == 1)
			{
				result = result + v[i - 1] * pow(10, i - 1) + 1;
			}
			else
			{
				result += tt;
			}
		}

	}
	return result;
}




int main()
{
	cout << Count(290) << endl;
	return 0;
}