#include"标头.h"
#include<vector>

//void FindPath(BinaryTreeNode<int> *root, int ExpectedSum, vector<BinaryTreeNode<int>*> &s, int &sum)
//{
//	sum += root->_data;
//	s.push_back(root);
//	bool isLeaf = root->_left == NULL && root->_right == NULL;
//	if (isLeaf && sum == ExpectedSum)
//	{
//		for (int i = 0; i < s.size(); i++)
//		{
//			cout << s[i]->_data << " ";
//		}
//	}
//	if (root->_left)
//	{
//		FindPath(root->_left, ExpectedSum, s, sum);
//	}
//	if (root->_right)
//	{
//		FindPath(root->_right, ExpectedSum, s, sum);
//	}
//	sum -= s.back()->_data;
//	s.pop_back();
//}
//
//void FindPath(BinaryTreeNode<int> *root, int ExpectedSum)
//{
//	if (root == NULL)
//	{
//		return;
//	}
//	vector<BinaryTreeNode<int>*> s;
//	int sum = 0;
//	FindPath(root, ExpectedSum, s, sum);
//}
void FindPath_core(BinaryTreeNode<int> *root, int ExpectedeNum,vector<BinaryTreeNode<int> *> s,int CurNum)
{
	s.push_back(root);
	bool IsLeaf=false;
	if (root->_left == NULL && root->_right == NULL)
	{
		IsLeaf = true;
	}
	CurNum += root->_data;
	if (CurNum == ExpectedeNum && IsLeaf == true)
	{
		//已经获得路径求处理
		for (int i = 0; i < s.size(); ++i)
		{
			cout << s[i]->_data << "  ";
		}
	}
	if (root->_left != NULL)
	{
		FindPath_core(root->_left, ExpectedeNum, s, CurNum);
	}
	if (root->_right != NULL)
	{
		FindPath_core(root->_right, ExpectedeNum, s, CurNum);
	}
	CurNum -= root->_data;
	s.pop_back();

}


void FindPath(BinaryTreeNode<int> *root,int ExpectedeNum)
{
	if (root == NULL)
	{
		return;
	}
	vector<BinaryTreeNode<int> *> s;
	int sum = 0;
	FindPath_core(root, ExpectedeNum, s, sum);
}


int main()
{
	int a[10] = { 1,2,3,'#','#',4,'#','#',5,6 };
	
	BinaryTree<int> b(a, 10);
	FindPath(b._root, 12);
	return 0;
}
