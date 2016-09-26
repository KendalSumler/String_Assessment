#include <iostream>
#include "MyString.h"

MyString::MyString(char  newstring[])
{
	
	int i;
	for (i = 0; newstring[i] != '\0'; i++)
		m_data[i] = newstring[i];
	m_data[i] = '\0';
}

const char * MyString::CString()
{
	return m_data;
}

int MyString::StringLen()
{
	char * charptr = &m_data[0];
	int i = 0;
	for (; charptr[i] != '\0'; )
	{
		i++;
	}


	return i;


}

int MyString::StringCopy()//Copy the contents of one array into the memory space of another
{

		char *charptr;
		int i;
		for (i = 0; charptr[i] != '\0'; i++);
		m_data[i] = charptr[i];

	
	return 0;
}

int MyString::ToAppend(MyString s)//To attach two character strings together
{	
	char *temp = new char[s.StringLen() + StringLen()];
	
	int x = 0;
	for (x;m_data[x] != '\0';x++)
	return x;
}
