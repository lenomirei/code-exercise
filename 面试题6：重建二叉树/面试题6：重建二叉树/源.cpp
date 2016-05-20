#include"БъЭЗ.h"


void test()
{
	int preorder[] = {1,2,4,7,3,5,6,8};
	int inorder[] = {4,7,2,1,5,3,8,6};
	BinaryTree<int> b1(preorder,inorder,8);
}


int main()
{
	test();
	return 0;
}