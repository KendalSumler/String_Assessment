#include <iostream>
#include "MyString.h"

MyString::MyString(char str[])
{
	for (int i = 0; i < 255; i++)
	{
		if (m_string[i] == 0)
		{
			break;
		}
	}
	std::cout<<m_string[2];
}
