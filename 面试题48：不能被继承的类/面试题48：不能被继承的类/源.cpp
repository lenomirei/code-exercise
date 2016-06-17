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

class DD :A
{

};

int main()
{
	A a;
	DD d;
	return 0;
}