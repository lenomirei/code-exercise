#include<iostream>
using namespace std;

//��ʹ�ö���ı������ӷ�ʵ��
void Swap1(int &a,int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;

}


//��ʹ�ö���ı��������ʵ��
void Swap2(int &a, int &b)
{
	a = a^b;
	b = a^b;
	a = a^b;

}




int main()
{
	int a = 3;
	int b = 2;
	Swap2(a, b);
	return 0;
}
