#include<iostream>
using namespace std;


//������ս��
//�����λ��Ӳ�Ҫ��λ������5+17����12����λ5+7��Ҫ��λ��2��ʮλ0+1 ��1��
//����λ�����λ��С
//�ڶ����͵�һ�����ý����ӣ��ⲻ��ѭ����ô~

int Add(int a,int b)
{
	int sum = 0;
	int carry;
	int tmp;
	do
	{
		tmp = a;
		a = a^b;
		b = (tmp & b) << 1;
	} while (b != 0);
	return a;
}



int main()
{
	cout << "sum is " << Add(5,17) << endl;
	return 0;
}