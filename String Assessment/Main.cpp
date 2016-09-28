#include <iostream>
#include <Windows.h>
#include <string>
#include "MyString.h"



int main()
{
	//String Starting Word
	MyString FirstString = MyString("Dragon Ball");
	MyString SecondString = MyString("Naruto");
	std::cout << FirstString.CString()<<"\n";
	FirstString.Compare(SecondString);
	//String Length
	std::cout << FirstString.StringLen()<<"\n";
	//String Copy
	std::cout << FirstString.StringCopy() << "\n";
	system("pause");
	return 0;
}