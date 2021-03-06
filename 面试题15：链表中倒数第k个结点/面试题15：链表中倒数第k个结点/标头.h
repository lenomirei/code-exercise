#pragma once
#include<iostream>
using namespace std;

typedef int DataType;
struct ListNode
{
	DataType _data;
	struct ListNode *_next;

	ListNode(const DataType& x)
		:_data(x)
		,_next(NULL)
	{
	}
};

class List
{
public:
	List()
		:_head(NULL)
		,_tail(NULL)
	{

	}
	List(const List& l)
	{
		_head = new struct ListNode(l._head->_data);
		_tail = _head;
		struct ListNode *cur = l._head->_next;
		while (cur)
		{
			PushBack(cur->_data);
			cur = cur->_next;
		}
	}//拷贝构造
	~List()
	{
		struct ListNode *del=_head;
		while (_head)
		{
			del = _head;
			_head = _head->_next;
			delete del;
		}
	}
	void PushBack(DataType x)
	{
		struct ListNode *tmp=new ListNode(x);
		if (_head)
		{
			_tail->_next = tmp;
			_tail = _tail->_next;
		}
		else
		{
			_head = tmp;
			_tail = _head;
		}
	}
	void display()
	{
		struct ListNode *cur = _head;
		while (cur)
		{
			cout << cur->_data << "->" << endl;
		}
	}
	void PopBack()
	{
		//1.没有节点
		if (_head == NULL)
		{
			cout << "没有节点怎么pop" << endl;
		}
		//2.只有一个节点
		else if (_head->_next == NULL)
		{
			delete _head;
			_head = NULL;
			_tail = NULL;
		}
		//3.一个或者以上节点
		else
		{
			ListNode *cur = _head;
			while (cur->_next != _tail)
			{
				cur = cur->_next;
			}
			cur->_next = _tail->_next;
			delete _tail;
			_tail = cur;
		}
	}
	ListNode* Find(int x)
	{
		ListNode *cur = _head;
		while (cur)
		{
			if (cur->_data == x)
			{
				return cur;
			}
			cur = cur->_next;
		}
		return NULL;
	}
	void Insert(ListNode *pos,const DataType x)
	{

	}
	void Erase(ListNode *pos)
	{

	}
	void Swap(List &l)
	{
		swap(_head,l._head);
		swap(_tail,l._tail);
	}

	List&  operator=(List l)
	{
		//可以调用clear 或者是用swap 或 者是这么写
		Swap(l);
		return *this;
	}


	void Clear()
	{
		struct ListNode* begin = _head;
		while (begin)
		{
			_head = _head->_next;
			delete begin;
		}
		_head = _tail = NULL;
	}

	void merge()//接合
	{

	}


	ListNode *FindLastKNode(int k)
	{
		ListNode *fast = _head;
		ListNode *slow = _head;
		for (int i = 0; i < k; ++i)
		{
			if (fast == NULL)
			{
				cout << "Invalid Input" << endl;
				return NULL;
			}
			fast = fast->_next;
		}
		while (fast)
		{
			slow = slow->_next;
			fast = fast->_next;
		}
		return slow;
	}
private:
	struct ListNode *_head;
	struct ListNode *_tail;
};