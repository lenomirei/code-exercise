#include"标头.h"
#include<iostream>
using namespace std;

template<class T>
bool IsPart(BinaryTreeNode<T> *root1,BinaryTreeNode<T> *root2)
{
	if (root2 == NULL)
	{
		return true;
	}
	if (root1 == NULL)
	{
		return false;
	}
	if (root1 == root2)
	{
		return IsPart(root1->_left, root2->_left) && IsPart(root1->_right, root2->_right);
	}
	return false;
}
template<class T>
bool IsPartTree(BinaryTreeNode<T> *root1, BinaryTreeNode<T> *root2)
{
	if (root1 == NULL && root2 == NULL)
	{
		return true;
	}
	if (root1 == root2)
	{
		return IsPart(root1, root2);
	}
	if (IsPartTree(root1->_left, root2))
	{
		return true;
	}
	else
	{
		return IsPartTree(root1->_right, root2);
	}

}

void test()
{
	int a1[5] = { 1,2,3,4,5 };
	//int a2[3] = { 3,4,5 };
	BinaryTree<int> b1(a1, 5);
	BinaryTree<int> b2;
	b2._root = b1._root->_left->_left;
	cout << IsPartTree(b1._root, b2._root) << endl;//函数是正确的测试是错误的，析构了两次当然爆炸
	
}

void test2()
{
	int a1[5] = { 1,2,3,4,5 };
	//int a2[3] = { 3,4,5 };
	BinaryTree<int> b1(a1, 5);
}


int main()
{
	test();
	return 0;
}