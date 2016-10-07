#pragma once

class MyString{
private:
	char m_data[255];
	int m_Size;
public:
	//Mystring(); //Default Constructor
	MyString(char newstring[]);
	const char * CString();
	
	/*char OGinput();
	char AFinput();*/
	MyString();
	char SubString(char D);//Function needed to access a certain sub string

	bool Compare(MyString fu); //Compares two string to see if they are the same

	int StringLen();//Function for finding the length of a string 
	
	char* ToAppend(MyString su);//Function needed to attach one string to the end of another
	
	char* ToPrepend(MyString fu);//Function needed to attach one string to the begininng of another
	
	MyString ToUpper();//Function needed to copy a string and make them all uppercase
	
	MyString ToLower();/*Function to copy a string and make them all uppercase*/
};