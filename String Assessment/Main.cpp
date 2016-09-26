#include <iostream>
#include <Windows.h>
#include <string>
#include "MyString.h"



int main()
{
	//String Starting Word
	MyString myString = MyString("Kenny");
	std::cout << myString.CString()<<"\n";
	
	//String Length
	std::cout << myString.StringLen()<<"\n";
	//String Coppy
	std::cout << myString.StringCopy() << "\n";
	//String Append
	std::cout << myString.ToAppend()<< "\n";
	system("pause");
	return 0;
}