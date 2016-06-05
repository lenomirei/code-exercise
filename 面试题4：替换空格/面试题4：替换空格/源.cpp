//题目：请事先一个函数，把字符串中的每个空格替换成“%20”。例如输入“we are happy.”，则输出"we%20are%20happy."。

#include<iostream>
#include<cassert>
using namespace std;



//void ReplaceBlank(char *s)
//{
//	int count = 0;
//	int p1 = strlen(s) - 1;
//	
//	for (int i = 0; i < p1; ++i)
//	{
//		if (s[i] == ' ')
//		{
//			count++;
//		}
//	}
//	int p2 = strlen(s) - 1+count*2;
//	while (p1 >=0)
//	{
//		if (s[p1] == ' ')
//		{
//			s[p2--] = '0';
//			s[p2--] = '2';
//			s[p2--] = '%';
//			p1--;
//		}
//		else
//		{
//			s[p2--] = s[p1--];
//		}
//	}
//}

void ReplaceBlank(char *s)
{
	assert(s);
	int count = 0;
	int length = strlen(s);
	for (int i = 0; i < length; ++i)
	{
		if (s[i] == ' ')
		{
			count++;
		}
	}
	int p = length - 1 + count * 2;
	for (int i = length - 1; i >= 0; --i)
	{
		if (s[i] != ' ')
		{
			s[p] = s[i];
			p--;
		}
		else
		{
			s[p] = '0';
			p--;
			s[p] = '2';
			p--;
			s[p] = '%';
			p--;
			
		}
	}
}


int main()

{

	char s1[30] = " helloworld";
	char s2[30] = "how are you";
	ReplaceBlank(s1);
	cout << s1 << endl;
	ReplaceBlank(s2);
	cout << s2 << endl;
	return 0;
}