#include<iostream>
using namespace std;


void FindFirstNum(const char *str)
{
	int length = strlen(str);
	int hash[256];
	memset(hash, 0, 256*sizeof(int));
	for (int i = 0; i < length; ++i)
	{
		hash[str[i]]++;
	}
	for (int i = 0; i < length; ++i)
	{
		if (hash[str[i]] == 1)
		{
			cout << str[i] << endl;
		}
	}
}




int main()
{
	char *str = "aaaavvvvbbbbbcdddddd";
	FindFirstNum(str);
	return 0;
}