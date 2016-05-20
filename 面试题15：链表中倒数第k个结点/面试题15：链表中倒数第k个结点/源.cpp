#include"БъЭЗ.h"



int main()
{
	List l;
	l.PushBack(1);
	l.PushBack(2);
	l.PushBack(3);
	l.PushBack(4);
	l.PushBack(5);
	if (l.FindLastKNode(10))
	{
		cout << l.FindLastKNode(10)->_data << endl;
	}
	else
	{
		cout << "Invalid Input" << endl;
	}
	if (l.FindLastKNode(1))
	{
		cout << l.FindLastKNode(1)->_data << endl;
	}
	else
	{
		cout << "Invalid Input" << endl;
	}
	if (l.FindLastKNode(2))
	{
		cout << l.FindLastKNode(2)->_data << endl;
	}
	else
	{
		cout << "Invalid Input" << endl;
	}if (l.FindLastKNode(3))
	{
		cout << l.FindLastKNode(3)->_data << endl;
	}
	else
	{
		cout << "Invalid Input" << endl;
	}if (l.FindLastKNode(4))
	{
		cout << l.FindLastKNode(4)->_data << endl;
	}
	else
	{
		cout << "Invalid Input" << endl;
	}if (l.FindLastKNode(5))
	{
		cout << l.FindLastKNode(5)->_data << endl;
	}
	else
	{
		cout << "Invalid Input" << endl;
	}
	return 0;
}