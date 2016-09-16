#pragma once

class MyString
{
private:
	char m_string[255];

public:

	MyString(); //Default Constructor
	MyString(char[]);

	int StringSize();//Gets the length of the string
	bool StringCompare(); //Compares two string to see if they are the same
	int StringLen()
	{

	}

	//Function for finding the length of a string 
	int StringCopy();//Fucntion needed to copy a string to another array
	int Strappen();//Function needed to attach one string to the end of another
	int Strprep();//Function needed to attach one string to the begininng of another
	int Strupp();//Function needed to copy a string and make them all uppercase
	int Strswap();//Function needed to swap two strings
	int Strsub();//Function to find a sub-string inside of a string
	int Strlow();/*Function to copy a string and make them all uppercase*/
};