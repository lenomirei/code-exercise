#include<iostream>
#include<cassert>


#define MAXINT 0x7fffffff
#define MININT 0x80000000

using namespace std;

enum c{legal,illegal};


int StrToInt_Core(char *&str, c& i,int signal)
{
	long long result = 0;
	while (*str != '\0')
	{
		if (*str<'9' && *str>'0')
		{
			result = result * 10 + signal*(*str - '0');
			str++;
		}
		else
		{
			i = illegal;
			return -1;
		}
	}
	if ((signal == -1 && result < (signed int)MININT) || (signal == 1 && result > (signed int)MAXINT))
	{
		i = illegal;
		return -1;
	}
	return (int)result;
}
int StrToInt(char *&str, c& i)
{
	int signal = 1;
	if (str == NULL)
	{
		i = illegal;
		return -1;
	}
	if (*str == '-')
	{
		signal = -1;
		str++;
	}
	return StrToInt_Core(str,i,signal);
}




int main()
{
	char *str = "124566";
	c i = legal;
	cout << StrToInt(str, i) << endl;
	return 0;
}