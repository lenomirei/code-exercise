#include<iostream>
#include<string>
using namespace std;


string Combine(string l,string r)
{
	string tmp = l;
	tmp += r;
	return tmp;
}





bool Compare(int i1,int i2)
{
	char c1[20] = { 0 };
	char c2[20] = { 0 };
	itoa(i1, c1, 10);
	itoa(i2, c2, 10);
	string s1(c1);
	string s2(c2);
	string str1 = Combine(s1, s2);
	string str2 = Combine(s2, s1);
	if (str1 > str2) 
	{
		return true;
	}
	else
		return false;
}





string Func(int *a,size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (Compare(a[i],a[j]))
			{
				swap(a[i], a[j]);
			}
		}
	}
	return string();
}




int main()
{
	int a[] = { 3,75,13,2,5 };
	
	Func(a, 5);
	return 0;
}