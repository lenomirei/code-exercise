#include"标头.h"



//输入两个二叉树A,B判断B是不是A的子结构

bool Judge(BinaryTreeNode<int> *a, BinaryTreeNode<int> *b)
{
	//BinaryTreeNode<int> *bb = b;
	if (b != NULL && a == NULL)
	{
		return false;
	}
	if (b == NULL && a == NULL)
	{
		return true;
	}
	if (a->_data == b->_data)
	{
		bool tmp;
		tmp = Judge(a->_left, b->_left);
		if (tmp == true)
		{
			return Judge(a->_right, b->_right);
		}
	}
	else
	{
		bool tmp = Judge(a->_left, b);
		if (tmp != true)
		{
			return Judge(a->_right, b);
		}
	}
}



int main()
{
	int a[10] = { 1,2,3,'#','#',4,'#','#',5,6 };
	int b[5] = { 5,6 };
	BinaryTree<int> at(a, 10);
	BinaryTree<int> bt(b, 2);
	cout << Judge(at._root, bt._root);
	return 0;
}
