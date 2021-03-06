#pragma once
#pragma once
#include<iostream>
#include<queue>
#include<stack>
#include<cassert>
using namespace std;

template<class T>
struct BinaryTreeNode
{
	T _data;
	BinaryTreeNode<T> *_left;
	BinaryTreeNode<T> *_right;
	BinaryTreeNode(T x)
		:_data(x)
		, _left(NULL)
		, _right(NULL)
	{

	}
};

template<class T>
class BinaryTree
{
public:


	//BinaryTree(int *preorder, int *inorder,int size)

	//{
	//	_root = ReBuildBinaryTree(preorder, inorder, size);
	//}
	//BinaryTreeNode<int>* ReBuildBinaryTree(int preorder[], int inorder[],int length)
	//{
	//	assert(preorder && inorder);
	//	return ConstructCore(preorder, preorder + length - 1, inorder, inorder + length - 1);
	//}

	//BinaryTreeNode<int>* ConstructCore(int *stratpreorder, int *endpreorder, int* startinorder, int* endinorder)
	//{
	//	BinaryTreeNode<int> *root = new BinaryTreeNode<int>(stratpreorder[0]);
	//	if (stratpreorder == endpreorder)
	//	{
	//		if (startinorder == endinorder)
	//		{
	//			return root;
	//		}
	//		
	//	}
	//	int *rootInorder = startinorder;
	//	while (rootInorder < endinorder && *rootInorder != stratpreorder[0])
	//	{
	//		rootInorder++;
	//	}
	//
	//	int Length = rootInorder - startinorder;
	//	int *leftpreorderend = stratpreorder + Length;
	//	if (Length > 0)
	//	{
	//		root->_left = ConstructCore(stratpreorder + 1, leftpreorderend, startinorder, rootInorder - 1);
	//	}
	//	if (Length < endinorder - startinorder)
	//	{
	//		root->_right = ConstructCore(leftpreorderend+1, endpreorder, rootInorder + 1, endinorder);
	//	}
	//	return root;
	//}


	BinaryTree(int* preorder, int* inorder,  size_t size)
	{
		_root = ReBuildTree(preorder, inorder, size);
	}
	BinaryTreeNode<T>* ReBuildTree(int* preorder, int* inorder, size_t size)
	{
		assert(preorder&& inorder);
		return ConstructCore(preorder, preorder + size - 1, inorder, inorder + size - 1);
	}
	
	BinaryTreeNode<T> *ConstructCore(int *startpreorder, int *endpreorder, int *startinorder, int *endinorder)
	{
		int rootvalue = startpreorder[0];
		BinaryTreeNode<T> *root = new BinaryTreeNode<T>(rootvalue);
		if (startpreorder == endpreorder)
		{
			if (startinorder == endinorder &&*startpreorder == *startinorder)
			{
				return root;
			}
		}
		int *rootinorder = startinorder;
		while (rootinorder != endpreorder && *rootinorder!= rootvalue)
		{
			rootinorder++;
		}
		//if (rootinorder == endoreder)
		//{
		//	//抛出异常，给的数组不对劲
		//}
		int length = rootinorder - startinorder;
		if (length > 0)
		{
			root->_left = ConstructCore(startpreorder + 1, startpreorder + length, startinorder, rootinorder-1);
		}
		if (endinorder - startinorder - length > 0)
		{
			root->_right = ConstructCore(startpreorder + length + 1, endpreorder, rootinorder+1, endinorder);
		}
		return root;
	}





	BinaryTree(const T *a, size_t size)
	{
		int index = 0;
		_root = _CreateTree(a, size, index);
	}
	~BinaryTree()
	{
		_Destory(_root);
	}
	BinaryTree(BinaryTree<T> &b)
	{
		_root = _Copy(b._root);
	}
	BinaryTree<T> &operator=(BinaryTree<T> b)
	{
		swap(b._root, _root);
		return *this;
	}
	void PrevOrder()
	{
		_PrevOrder(_root);
		cout << endl;
	}
	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}
	void LaOrder()
	{
		_LaOrder(_root);
		cout << endl;
	}
	void LevelOrder()
	{
		queue<BinaryTreeNode<T>*> q;
		if (_root == NULL)
		{
			return;
		}
		q.push(_root);
		while (!q.empty())
		{
			BinaryTreeNode<T> *tmp = q.front();
			q.pop();
			if (tmp->_left)
			{
				q.push(tmp->_left);
			}
			if (tmp->_right)
			{
				q.push(tmp->_right);
			}
			cout << tmp->_data << " ";
		}
		cout << endl;
	}
	int Depth()
	{
		return _Depth(_root);

	}
	int Size()
	{
		size_t size = 0;
		return _Size(_root, size);
	}
	BinaryTreeNode<T> *Find(const T &x)
	{

		return _Find(_root, x);

	}
	void PreOrder_NonR()
	{
		if (_root == NULL)
		{
			return;
		}
		stack<BinaryTreeNode<T>*> s;
		s.push(_root);
		while (!s.empty())
		{
			BinaryTreeNode<T>* top = s.top();
			cout << top->_data << " ";
			s.pop();
			if (top->_right)
			{
				s.push(top->_right);
			}
			if (top->_left)
			{
				s.push(top->_left);
			}
		}
		cout << endl;
	}
	void InOrder_NonR()
	{
		stack<BinaryTreeNode<T>*> s;
		BinaryTreeNode<T> *cur = _root;
		while (cur || !s.empty())
		{
			while (cur)
			{
				s.push(cur);
				cur = cur->_left;
			}
			if (!s.empty())
			{
				BinaryTreeNode<T> *top = s.top();
				cout << top->_data << " ";
				s.pop();
				cur = top->_right;
			}
		}
		cout << endl;
	}
	void PostOrder_NonR()
	{
		stack<BinaryTreeNode<T> *> s;
		BinaryTreeNode<T>* PreVisited = NULL;
		BinaryTreeNode<T>* cur = _root;
		while (cur || !s.empty())
		{
			while (cur)
			{
				s.push(cur);
				cur = cur->_left;
			}
			BinaryTreeNode<T> *top = s.top();
			if (top->_right == NULL || PreVisited == top->_right)
			{
				cout << top->_data << " ";
				s.pop();
				PreVisited = top;
			}
			else
			{
				cur = top->_right;
			}
		}
		cout << endl;
	}

protected:
	BinaryTreeNode<T>* _CreateTree(const T *a, size_t size, int &index)
	{
		BinaryTreeNode<T> *root = NULL;
		if (a[index] != '#' && index < size)
		{
			root = new BinaryTreeNode<T>(a[index]);
			root->_left = _CreateTree(a, size, ++index);
			root->_right = _CreateTree(a, size, ++index);
		}
		return root;
	}
	void _PrevOrder(BinaryTreeNode<T> *root)
	{
		if (root == NULL)
		{
			return;
		}
		cout << root->_data << " ";
		_PrevOrder(root->_left);
		_PrevOrder(root->_right);
	}
	void _InOrder(BinaryTreeNode<T> *root)
	{
		if (root == NULL)
		{
			return;
		}
		_InOrder(root->_left);
		cout << root->_data << " ";
		_InOrder(root->_right);
	}
	void _LaOrder(BinaryTreeNode<T> *root)
	{
		if (root == NULL)
		{
			return;
		}
		_LaOrder(root->_left);
		_LaOrder(root->_right);
		cout << root->_data << " ";
	}
	int _Depth(BinaryTreeNode<T>* root)
	{
		if (root == NULL)
		{
			return 0;
		}
		int left = _Depth(root->_left);
		int right = _Depth(root->_right);
		if (left > right)
		{
			return 1 + left;
		}
		return 1 + right;
	}
	//int _Size(BinaryTreeNode<T>* root)
	//{
	//	if (root == NULL)
	//	{
	//		return 0;
	//	}
	//	return 1 + _Size(root->_left) + _Size(root->_right);
	//}
	int _Size(BinaryTreeNode<T>* root, size_t &size)
	{
		if (NULL == root)
		{
			return 0;
		}
		size++;
		_Size(root->_left, size);
		_Size(root->_right, size);
		return size;
	}
	BinaryTreeNode<T> *_Find(BinaryTreeNode<T> *root, const T &x)
	{
		if (root == NULL)
		{
			return NULL;
		}
		if (root->_data == x)
		{

			return root;
		}
		else
		{
			BinaryTreeNode<T> *tmp = _Find(root->_left, x);
			if (root->_left && tmp)
			{
				return tmp;
			}
			else
			{
				return _Find(root->_right, x);
			}
		}
		return NULL;
	}
	BinaryTreeNode<T>* _Copy(BinaryTreeNode<T> *root)
	{
		BinaryTreeNode<T> *newroot = NULL;
		if (root)
		{
			newroot = new BinaryTreeNode<T>(root->_data);
			_Copy(root->_left);
			_Copy(root->_right);
		}
		return newroot;
	}

	void _Destory(BinaryTreeNode<T> *root)
	{
		if (root == NULL)
		{
			return;
		}
		_Destory(root->_left);
		_Destory(root->_right);
		delete root;
	}

protected:
	BinaryTreeNode<T> *_root;
};


