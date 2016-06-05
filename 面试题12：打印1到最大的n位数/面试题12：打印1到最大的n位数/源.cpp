//#include<iostream>
//#include<string>
//using namespace std;
//
////隐含的大数问题，有可能存在系统自带类型装不下的可能性
//
//
////从1开始到n位的99999
//
//
//
//
//void Print1ton(int n)
//{
//	string result;
//	result.assign(n, '9');
//	string s;
//	s.assign(n, '0');
//	while (s != result)
//	{
//		s[n-1]++;
//		for (int i = n-1; i >=0; --i)
//		{
//			if (s[i] > '9')
//			{
//				s[i] -= 10;
//				s[i - 1] += 1;
//			}
//		}
//		int index = 0;
//		while (s[index] == '0')
//		{
//			index++;
//		}
//		for (int i = index; i < n; ++i)
//		{
//			cout << s[i];
//		}
//		cout << endl;
//	}
//}

//int main()
//{
//	int num;
//	cin >> num;
//
//	Print1ton(num);
//	return 0;
//}



//利用数字排列的思想解决问题
//#include<iostream>
//using namespace std;
//
//
//void PrintNumber(char *s)
//{
//	bool Beginwith0 = true;
//	int length = strlen(s);
//	for (int i = 0; i < length; ++i)
//	{
//		if (s[i] != '0')
//		{
//			Beginwith0 = false;
//		}
//		if (Beginwith0 == false)
//		{
//			cout << s[i];
//		}
//	}
//	cout << endl;
//}
//
//
//
//
//void Print1tonReversely(char *s, int length, int index)
//{
//	if (index == length - 1)
//	{
//		PrintNumber(s);
//		return;
//	}
//	for (int i = 0; i < 10; ++i)
//	{
//		s[index + 1] = i + '0';
//		Print1tonReversely(s, length, index + 1);
//	}
//}
//
//
//void Print1ton(int n)
//{
//	char *s = new char[n+1];
//	s[n] = '\0';
//	for (int i = 0; i < 10; ++i)
//	{
//		s[0] = i + '0';
//		Print1tonReversely(s, n, 0);
//	}
//}
//
//
//int main()
//{
//	int num;
//	cin >> num;
//	Print1ton(num);
//	
//	return 0;
//}
//

#include<iostream>

#include<string>
using namespace std;


void PrintNum(char *s)
{
	bool isbeginwith0 = true;
	for (int i = 0; i < strlen(s); ++i)
	{
		if (s[i] != '0')
		{
			isbeginwith0 = false;
		}
		if (isbeginwith0 == false)
		{
			cout << s[i] ;
		}
	}
	cout << endl;
}

void Print1tonReversely(char *s, int length, int index)
{
	if (index == length - 1)
	{
		PrintNum(s);
		return;
	}
	for (int i = 0; i < 10; ++i)
	{
		s[index + 1] = i + '0';
		Print1tonReversely(s, length, index + 1);
	}
}


void Print1ton(int n)
{
	char *s = new char[n + 1];
	s[n] = '\0';
	for (int i = 0; i < 10; ++i)
	{
		s[0] = i + '0';
		Print1tonReversely(s, n, 0);
	}
}

int main()
{
	int n;
	cin >> n;
	Print1ton(n);
	return 0;
}