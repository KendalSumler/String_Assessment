#include <iostream>
#include "MyString.h"

MyString::MyString() {};
MyString::MyString(char newstring[])
{ 		
	m_Size = 0;
	while (newstring[m_Size] != '\0')
	{
		this->m_data[m_Size] = newstring[m_Size];
		m_Size++;
	}
	m_data[m_Size] = '\0';
}

const char * MyString::CString()
{
	return this->m_data;
}

int MyString::StringLen()
{
	return this->m_Size;
}
char MyString::SubString(char D)
{

	return m_data[D];
}
bool MyString::Compare(MyString fu)
{
	bool on = true;
	int i = 0;
	for (i;; i++)
	{
		on = (m_data[i] == fu.m_data[i]) ? true : false;
		if (on == false)
		{
			break;
		}
		if (on == true)
		{
			break;
		}
	}
	return false;
}

char *MyString::ToAppend(MyString su)
{ 

	int FirstLength = m_Size;
	int i;
	for (i = 0; i < su.m_data[i] != '\0'; i++)
	{
		m_data[i + FirstLength] = su.m_data[i];
	}
	m_data[i + FirstLength] = '\0';
	return m_data;
}

char *MyString::ToPrepend(MyString fu)
{	char *Dummy = new char [m_Size + fu.m_Size];
	int SecondLength = fu.m_Size;
	int x;
	for (x = 0; x <= fu.m_data[x] ; x++)
	{
		fu.m_data[x + SecondLength] = m_data[x];
	}
	fu.m_data[x + SecondLength] = '\0';
	
	return fu.m_data;
}




int MyString::ToUpper(int up)
{
	int i;

	return 0;
}

int MyString::ToLower(int low)
{
	return 0;
}
