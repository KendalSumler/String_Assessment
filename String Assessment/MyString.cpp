#include <iostream>
#include "MyString.h"

MyString::MyString(char *charptr)
{
<<<<<<< HEAD
	for (int i = 0; str[i] != '\0'; i++)
	{

	}
}
=======
	int i;
	for (i =0; charptr[i] != '\0'; i++)
	{
		m_string[i] = charptr[i];

	}
	m_string[i] = '\0'; //Identifying the null character
	m_length = i;
	std::cout << i;	
}
>>>>>>> origin/master
