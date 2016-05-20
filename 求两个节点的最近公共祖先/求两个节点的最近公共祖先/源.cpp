#include"BinaryTree.h"


int main()
{
	int a[10] = { 1, 2, 3, '#', '#', 4, '#' , '#', 5, 6 };
	BinaryTree <int>t1(a, 10);
	t1.FindSameAcsetor(3,4);
	return 0;
}