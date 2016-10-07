#include <iostream>
#include "MyString.h"

MyString::MyString() {};
MyString::MyString(char newstring[])//
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
	for (i;; i++)//loop that itterates through the index of each instance of the array
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

char* MyString::ToPrepend(MyString fu)
{

	int firstSize = fu.m_Size;
	int secondSize = this->m_Size;
	int totalSize = firstSize + secondSize;
	char *Dummy = new char[totalSize];
	
	int x;
	for (x = 0; x < firstSize; x++)
	{
		Dummy[x] = fu.m_data[x];
	}
	for (; x < totalSize; x++)
	{
		int offset = x - firstSize;
		Dummy[x] = m_data[offset];
		//fu.m_data[x + SecondLength] = this->m_data[x];
	}
	Dummy[x] = '\0';
	
	return Dummy;
}




MyString MyString::ToUpper()
{
	
	int i = 0;
	for (i; i < StringLen(); i++)
	{
		if (m_data[i] >= 97 && m_data[i] <= 132)
		{
			char c = m_data[i];
			c -= 32;
			m_data[i] = c;
		}
	}
	return MyString(m_data);
}

MyString MyString::ToLower()
{

	int i = 0;
	for (i; i < StringLen(); i++)
	{
		if (m_data[i] >= 65 && m_data[i] <= 90)
		{
			char c = m_data[i];
			c += 32;
			m_data[i] = c;
		}
	}
	return m_data;
}
