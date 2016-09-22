#pragma once

class MyString
{
private:

	char m_data[255];


	char m_string[255];
	int m_length;

public:

	MyString(); //Default Constructor
	MyString(char str[]);

	bool StringCompare(); //Compares two string to see if they are the same
	int StringLen(char *charptr) 
	{
		int i;
		for (i = 0; charptr[i] != '\0'; i++)
			std:: cout << i;
			return i;
	};//Function for finding the length of a string 
	int StringCopy();//Fucntion needed to copy a string to another array
	int StringAppen();//Function needed to attach one string to the end of another
	int StringPrep();//Function needed to attach one string to the begininng of another
	int StringUpp();//Function needed to copy a string and make them all uppercase
	int StringSwap();//Function needed to swap two strings
	int StringSub();//Function to find a sub-string inside of a string
	int StringLow();/*Function to copy a string and make them all uppercase*/
};