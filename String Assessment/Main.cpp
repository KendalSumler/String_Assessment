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
	return 0;
}