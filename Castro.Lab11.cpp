//******************************************************************
// Word Separator
// Programmer: Armando Castro
// Completed :04/27/2020
// Status    : Complete
//
// This program accepts as input a sentence with no spaces and every
// first letter of a word capitalized.  It stores this in as string 
// object. It then converts the string to a sentence with spaces and 
// where the first letter of the first word is only capitilized.   
//******************************************************************

#include <string>
#include <cctype>
#include <iostream>

using namespace std;

class Palabras
{
	public:
		string word;
		void displayString(string sentence);
};


void displayString(string sentence)
{
	int i=1;

	while(i<sentence.length())				//While loop repeats untill end of sentence
	{
	
		if(isupper(sentence.at(i)))					  //Checks for upper case character
		{
	
			sentence.insert(i," "); 								  //Inserting space
	
			sentence.at(i+1)=tolower(sentence.at(i+1)); 	 //Converting to lower case
		}
		i++;
	}

	cout << sentence << endl;

	
	
}


int main()
{
	Palabras birdisthaword;
	string dabird;
	
	cout << "Please enter a sentence with the first letter of each word "
		 << "captitalized.  Do not enter any spaces in this sentence. ";
	cin >> dabird;
	
	displayString(dabird);
	
	return 0;
}
		
