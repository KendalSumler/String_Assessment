#include <iostream>
#include "MyString.h"

MyString::MyString(char * newstring)
{
	/*int i;
	for (i = 0; newstring[i] != '\0'; i++)
		m_data[i] = newstring[i];*/
}

const char * MyString::CString()
{
	for(int i = 0; m_data[i] != '\0';i++)
	
		return m_data;
}

int MyString::StringLen(char * charptr)
{
	
		int i;
		for (i = 0; charptr[i] != '\0'; i++)
			return i;
	
	
}

int MyString::StringCopy()
{
	/*
		char *charptr;
		int i;
		for (i = 0; charptr[i] != '\0'; i++);
		m_data[i] = charptr[i];
		*/
	
	return 0;
}

int MyString::ToAppend()
{	/*int i;
	for(i = 0;i)*/
	return 0;
}
