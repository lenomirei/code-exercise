#pragma once
#include<iostream>
#include<stack>
using namespace std;

template<class T>
class Queue
{
public:
	//void Push(const T& x)
	//{
	//	s1.push(x);
	//}
	//void Pop()
	//{
	//	if (s2.empty())
	//	{
	//		while (!s1.empty())
	//		{
	//			s2.push(s1.top());
	//			s1.pop();
	//		}
	//	}
	//	s2.pop();
	//}
	///*T &Back()
	//{
	//	if (s2.empty())
	//	{
	//		while (!s1.empty())
	//		{
	//			s2.push(s1.top());
	//			s1.pop;
	//		}
	//	}
	//	return s2.top();
	//}*/



	void Push(T x)
	{
		s1.push(x);
	}
	void Pop()
	{
		if (s2.empty())
		{
			if (s1.empty())
			{
				cout << "现在队列是空的" << endl;
			}
			else
			{
				while (!s1.empty())
				{
					T top = s1.top();
					s1.pop();
					s2.push(top);
				}
				s2.pop();
			}
		}
		else
			s2.pop();
	}


protected:
	stack<T> s1;
	stack<T> s2;
};