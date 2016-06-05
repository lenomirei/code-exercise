#include"БъЭЗ.h"



void testmerge()
{
	List l1;
	List l2;
	l1.PushBack(1);
	l1.PushBack(3);
	l1.PushBack(5);
	l1.PushBack(7);
	l2.PushBack(2);
	l2.PushBack(4);
	l2.PushBack(6);
	l2.PushBack(8);
	ListNode *tmp= l1.merge(l2);
}

int main()
{
	testmerge();
	return 0;
}