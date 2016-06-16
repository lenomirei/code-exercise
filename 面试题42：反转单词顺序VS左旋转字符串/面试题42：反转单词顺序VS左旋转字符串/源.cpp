#include<iostream>
#include<cassert>
using namespace std;



//输入一个英文句子，反转句子中单词的顺序，但单词内字符的顺序不变
//例如输入一个 I am a student输出student am I




void Reverse(char *pbegin,char *pend)
{
	assert(pbegin != NULL && pend != NULL);
	
	while (pbegin < pend)
	{
		
		swap(*pbegin, *pend);
		pbegin++;
		pend--;
	}
}



void func(char * str)
{
	Reverse(str,str+(strlen(str)-1));

	int begin = 0;
	for (int i = 0; i < strlen(str); ++i)
	{
		if (str[i] == ' ')
		{
			Reverse(str + begin, str + i - 1);
			begin = i+1;
		}
	}
}

void test1()
{
	char str[] = "I am a student";
	func(str);
}


void LeftRotate(char *str,int n)
{
	Reverse(str, str + n - 1);
	Reverse(str + n, str + strlen(str) - 1);
	Reverse(str, str + strlen(str) - 1);
}

void test2()
{
	char str[] = "abcdefg";
	LeftRotate(str,2);
}

int main()
{
	//test1();
	test2();
	return 0;
}