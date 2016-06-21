#include<iostream>
#include<cassert>
using namespace std;

bool match_core(char *str1, char *str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
		{
			if (*str2 == '.')
			{
				str1++;
				str2++;
			}
			//例如 aaa ab*ac*a是匹配的
			//例如 aaab a*b
			else if (*str2 == '*')
			{
				char tmp = *str1;
				while (*str1 == tmp)
				{
					str1++;
				}
				str2++;
			}
			else
			{
				if (*(str2 + 1) == '*')
				{
					str2 += 2;
				}
				else
				{
					return false;
				}
			}

		}
	}
	if (*str1 != '\0' || *str2 != '\0')
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool match(char *str1,char *str2)
{
	assert(str1 && str2);
	return match_core(str1, str2);
}



int main()
{
	char *str1 = "abdccdcdcd";
	char *str2 = "abc*";
	cout << match(str1, str2) << endl;
	return 0;
}
