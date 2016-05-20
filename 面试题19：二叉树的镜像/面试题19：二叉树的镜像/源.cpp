#include"БъЭЗ.h"



void MirrorBinaryTree(BinaryTreeNode<int> *b)
{
	if (b == NULL)
	{
		return;
	}
	swap(b->_left, b->_right);
	MirrorBinaryTree(b->_left);
	MirrorBinaryTree(b->_right);
}





int main()
{

	int a[10] = { 1,2,3,'#','#',4,'#','#',5,6 };
	int c[1] = { 1 };
	BinaryTree<int> b(a, 10);
	BinaryTree<int> b2(c, 1);
	MirrorBinaryTree(b._root);
	MirrorBinaryTree(b2._root);
	return 0;
}