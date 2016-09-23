#include <iostream>
#include <Windows.h>
#include <string>
#include "MyString.h"



int main()
{
	//String Starting Word
	MyString myString = MyString("The Default String");
	std::cout << myString.CString()<<"\n";
	
	//String Length
	std::cout << myString.StringLen()<<"\n";
	//Part 3
	system("pause");
	const char * cptr;
	char letter = 's';
	cptr = &letter;
	char bigstring[] = { "hello kendall you a thing" };
	cptr = &bigstring[0];

	return 0;
}