#pragma once

class MyString
{
private:
<<<<<<< HEAD
	char m_data[255];

=======
	char m_string[255];
	int m_length;
>>>>>>> origin/master
public:

	MyString(); //Default Constructor
	MyString(char str[]);

	bool StringCompare(); //Compares two string to see if they are the same
<<<<<<< HEAD
	int StringLen();//Function for finding the length of a string 
=======
	int StringLen();
	//Function for finding the length of a string 
>>>>>>> origin/master
	int StringCopy();//Fucntion needed to copy a string to another array
	int StringAppen();//Function needed to attach one string to the end of another
	int StringPrep();//Function needed to attach one string to the begininng of another
	int StringUpp();//Function needed to copy a string and make them all uppercase
	int StringSwap();//Function needed to swap two strings
	int StringSub();//Function to find a sub-string inside of a string
	int StringLow();/*Function to copy a string and make them all uppercase*/
};