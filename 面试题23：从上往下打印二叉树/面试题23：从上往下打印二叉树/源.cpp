#include<iostream>
#include"БъЭЗ.h"
using namespace std;


void LevelOrder(BinaryTreeNode<int> *b)
{
	queue<BinaryTreeNode<int> *> q;
	if (b == NULL)
	{
		return;
	}
	q.push(b);
	while (!q.empty())
	{
		BinaryTreeNode<int> *top = q.front();
		cout << top->_data << " ";
		q.pop();
		if (top->_left)
		{
			q.push(top->_left);
		}
		if (top->_right)
		{
			q.push(top->_right);
		}
	}
}



int main()
{
	int a[10] = { 1,2,3,'#','#',4,'#','#',5,6 };
	BinaryTree<int> b(a, 10);
	LevelOrder(b._root);
	return 0;
}