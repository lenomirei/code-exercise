////����һ������N����ôN�Ľ׳�N!ĩβ�ж��ٸ�0�أ�
//
////��һ�ַ������Ǽ���N�Ľ׳����м��γ���5������5�ı���
//#include<iostream>
//using namespace std;
//
//int Count0(int n)
//{
//	int count = 0;
//	for (int i = n; i > 0; i--)
//	{
//		if (i % 5 == 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int _Count0(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count += n / 5;
//		n /= 5;
//	}
//	return count;
//}
//
//
//
//void test()
//{
//	int a = 5;
//	cout << _Count0(a) << endl;
//}
//
//
//
//int main()
//{
//	test();
//	return 0;
//}



#include<iostream>
using namespace std;


//��N!�����Ʊ�ʾ�����λ1��λ��

//�ⷨһ��������һ������2��ʱ�򣬴Ӷ����ƵĽǶ���������������Ƶ����һλ��һ��0����ôֱ�ӽ��ö�����������һλ��������һλ��һ��1�Ļ�����ô����������Ӧ��������

int findposition(int n)
{
	int count = 0;
	for (int i = n; i > 0; i--)
	{
		if (i % 2 == 0)
		{
			count++;
		}
	}
	return count;
}


//���ú�֮ǰ���㷨һ���Ĺ�ʽ

int Find1Position(int n)
{
	int count = 0;

	while (n)
	{
		count += n / 5;
		n /= 5;
	}
	return count;
}


void test()
{
	int n = 5;
	cout << findposition(n) << endl;
	//Find1Position


}

int main()
{
	test();
	return 0;
}