#include<iostream>
using namespace std;


int count1(int n)
{
	int count = 0;
	while (n)
	{
		n = n / 2;
		count++;
	}
	return count;
}

int count2(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}



//ʣ�����ַ������ǲ���ʹ�ÿռ任ȡʱ��ķ�����һ���ǲ���switch case�ķ�֧��256����֧��û�ж�ô�ߵ�Ч�ʣ������ǵ�ѡ�����һ����֧��ʱ��
//��һ�����ǰ�256��������������������棬������˺ܶ࣬ʱ�临�ӶȾ���O(1)

void test()
{
	int a = 3;
	int result;
	//result = count1(a);
	//result = count2(a);
	
	cout << result << endl;
}

int main()
{
	test();
	return 0;
}