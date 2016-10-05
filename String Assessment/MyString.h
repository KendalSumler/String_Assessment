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
<<<<<<< HEAD
	
	char ToAppend(MyString su);//Function needed to attach one string to the end of another
	
	char ToPrepend();//Function needed to attach one string to the begininng of another
	
	int ToUpper(int up);//Function needed to copy a string and make them all uppercase
	
	int ToLower();/*Function to copy a string and make them all uppercase*/
=======
	int StringCopy();//Fucntion needed to copy a string to another array
	int ToAppend(MyString s);//Function needed to attach one string to the end of another
	//int ToPrepend();//Function needed to attach one string to the begininng of another
	//int ToUpper();//Function needed to copy a string and make them all uppercase
	//int Swap();//Function needed to swap two strings
	//int SubString();//Function to find a sub-string inside of a string
	//int	ToLow();/*Function to copy a string and make them all uppercase*/
>>>>>>> origin/master
};