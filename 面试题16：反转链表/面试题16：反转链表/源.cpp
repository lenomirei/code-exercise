#include"БъЭЗ.h"



int main()
{
	List l;
	l.PushBack(1);
	l.PushBack(2);
	l.PushBack(3);

	l.PushBack(4);
	l.PushBack(5);
	l.display();
	l.Reverse();
	l.display();
	return 0;
}