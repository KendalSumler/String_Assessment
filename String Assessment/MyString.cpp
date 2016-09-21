#include <iostream>
#include "MyString.h"

MyString::MyString(char *charptr)
{
	int i;
	for (i =0; charptr[i] != '\0'; i++)
	{
		m_string[i] = charptr[i];

	}
	m_string[i] = '\0'; //Identifying the null character
	m_length = i;
	std::cout << i;	
}