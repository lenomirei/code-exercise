#include<iostream>
using namespace std;
//�ҽ�ʹ��4�ַ������
//1.���ù��캯�����
//2.�����麯�����
//3.����ָ�����
//4.����ģ���������

class Sum
{
public:
	Sum()
	{
		n++;
		sum += n;
	}
	static void Reset()
	{
		n = 0;
		sum = 0;
	}
	int getSum()
	{
		return sum;
	}
public:
	static int n;
	static int sum;
};
int Sum::n = 0;
int Sum::sum = 0;

void test1()
{
	Sum::Reset();
	Sum *tmp = new Sum[100];
	delete tmp;
	cout << Sum::sum << endl;
}


int main()
{
	test1();
	return 0;
}