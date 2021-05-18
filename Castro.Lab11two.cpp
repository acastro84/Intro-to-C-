//******************************************************************
// Case Manipulator
// Programmer: Armando Castro
// Completed :04/27/2020
// Status    : Complete
//
// This program accepts a string and uses three functions to step
// through the characters in the string.  The upper function will 
// switch all characters to upper case. The lower function will switch all
// characters to lower case.   Finally, the switch function will 
// switch the original case of all characters. The manipulated strings
// are output at the end along with the original string. 

// I didnt know it at the time, but she was prepping me for 
// bubble sorts.  
//******************************************************************

#include <string>
#include <cctype>
#include <iostream>

using namespace std;

void upper(string s)
{
	int i=0;

	while(i<s.length())				//While loop repeats untill end of sentence
	{
	
		if(islower(s.at(i)))					  //Checks for lower case character
		{
			s.at(i)=toupper(s.at(i)); 	 //Converting to upper case
		}
		i++;
	
	}
	cout << s << endl;
}
void lower(string s)
{
	int i=0;

	while(i<s.length())				//While loop repeats untill end of sentence
	{
	
		if(isupper(s.at(i)))					  //Checks for upper case character
		{
	
			s.at(i)=tolower(s.at(i)); 	 //Converting to lower case
		}
		i++;
	
	}
	cout << s << endl;
}
void switching(string s)
{
	int i=0;

	while(i<s.length())				//While loop repeats untill end of sentence
	{
	
		if(islower(s.at(i)))					  //Checks for lower case character
		{
			s.at(i)=toupper(s.at(i)); 	 //Converting to upper case
		}
		else
		{
			s.at(i)=tolower(s.at(i));
		}
		i++;
	
	}
	cout << s << endl;
}
int main()
{
	string sentence; 
	cout << "Please enter a string; ";
	cin >> sentence;
	int numchars = sentence.length();
	
	cout << "Here is the original string: \n";
	cout << sentence << "\n"; 
	
	upper(sentence);
	lower(sentence);
	switching(sentence);
	
	return 0;
}
