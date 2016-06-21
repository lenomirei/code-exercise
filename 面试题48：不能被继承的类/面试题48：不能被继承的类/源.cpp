#include<iostream>
using namespace std;

class A;
class A_Lock 
{
	friend class A;
private :
	A_Lock() {}
	A_Lock(const A_Lock &x) {}
};
class A:public virtual A_Lock
{
public:
	A() {}
	A(A& x) {}
};
//这里就有一个细节，被称作什么时候才会删除掉自动生成的默认构造函数
class DD :A
{

};

int main()
{
	A a;
	DD d;
	return 0;
}