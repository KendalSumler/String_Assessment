#pragma once

class MyString{
private:
	char m_data[255];
public:
	//Mystring(); //Default Constructor
	MyString(char *newstring);
	const char * CString();
	
	/*char OGinput();
	char AFinput();*/
	bool Compare(MyString fu); //Compares two string to see if they are the same

	int StringLen();//Function for finding the length of a string 
	
	int StringCopy();//Fucntion needed to copy a string to another array
	
	int ToAppend();//Function needed to attach one string to the end of another
	
	//int ToPrepend();//Function needed to attach one string to the begininng of another
	
	//int ToUpper();//Function needed to copy a string and make them all uppercase
	
	//int Swap();//Function needed to swap two strings
	
	//int SubString();//Function to find a sub-string inside of a string
	
	//int	ToLow();/*Function to copy a string and make them all uppercase*/
};