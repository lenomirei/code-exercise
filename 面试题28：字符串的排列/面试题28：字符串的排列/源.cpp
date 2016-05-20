//输入一个字符串输出该字符串的全排列

#include<iostream>
#include<string>
using namespace std;






void Permutation(char *str, char *begin)
{
	if (*begin == '\0')
	{
		cout << str << endl;
	}
	else
	{
		for (char *pch = begin; *pch != '\0'; ++pch)
		{

			swap(*pch, *begin);
			Permutation(str, begin + 1);
			swap(*pch, *begin);
		}
	}
}


void Permutation(char *str)
{
	if (str == NULL)
	{
		return;
	}
	Permutation(str, str);
}



int main()
{
	string s;
	cin >> s;
	Permutation((char *)s.c_str());
	return 0;
}