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
	/*int i = 0;
	for(i; m_data[i] != '\0';i++)

		return m_data;*/
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

	/*	char *charptr;
		int i;
		for (i = 0; charptr[i] != '\0'; i++);
		m_data[i] = charptr[i];

	*/
	return 0;
}

int MyString::ToAppend()//To attach two character strings together
{

	return 0;
}
