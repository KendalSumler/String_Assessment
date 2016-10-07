#include <iostream>
#include <Windows.h>
#include <string>
#include "MyString.h"




int main()
{
	//String Starting Word
	MyString FirstString = MyString("Seven");
	MyString SecondString = MyString("Eight");
	std::cout << FirstString.CString()<<"\n";
	std::cout << SecondString.CString() << "\n";
	
	//String Length
	std::cout << FirstString.StringLen()<<"\n";
	std::cout << SecondString.StringLen() << "\n";
	//String Compare
	 std::cout << FirstString.Compare(SecondString) << "\n";
	//String Access
	std::cout << FirstString.SubString(3) << "\n";
	//String Append
	std::cout << FirstString.ToAppend(SecondString) << "\n";
	//String Prepend
	printf("prepend start... \n");
	std::cout << FirstString.ToPrepend(SecondString) << "\n";
	//String Lowercase
	std::cout << SecondString.ToLower().CString() << "\n";
	//String Uppercase
	std::cout << SecondString.ToUpper().CString() << "\n";
	system("pause");
	return 0;
}