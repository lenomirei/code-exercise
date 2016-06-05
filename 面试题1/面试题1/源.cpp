#include<iostream>
using namespace std;


class CMyString
{
public:
	CMyString(char *pData = NULL)
	{

	}

	CMyString(const CMyString & str)
	{

	}
	~CMyString()
	{

	}
	CMyString &operator=(const CMyString & b)
	{
		if (this != &b)
		{
			delete[] m_pData;
			m_pData = new char[strlen(b.m_pData) + 1];
			strcpy(m_pData, b.m_pData);//Éî¿½±´
			//delete[] m_pData;
			//m_pData = b.m_pData;//Ç³¿½±´
		}
		return *this;
	}
private:
	char *m_pData;
};