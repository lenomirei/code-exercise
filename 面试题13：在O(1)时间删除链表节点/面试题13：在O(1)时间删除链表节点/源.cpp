#include<iostream>
#include"БъЭЗ.h"
#include<list>
using namespace std;

void DelListNode(ListNode *del)
{
	del->_data = del->_next->_data;
	ListNode *tmp = del->_next;
	del->_next = tmp->_next;
	delete tmp;
}



int main()
{
	List l;
	l.PushBack(1);
	l.PushBack(2);
	l.PushBack(3);
	l.PushBack(4);
	l.PushBack(5);

	ListNode *del = l.Find(3);
	DelListNode(del);
	return 0;
}
