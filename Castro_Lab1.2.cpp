//******************************************************************
// Basketball Player Height
// Programmer: Armando Castro
// Completed : 1/23/2020
// Status    : Complete
//
// This program converts a specified height to feet and inches.
//******************************************************************

#include <iostream>      // necessary for input/outputs
using namespace std;
 

int main()
{
double playerInches = 75; // Initial height of the player in inches.
int convertFeet = playerInches / 12; // Get the feet portion of conversion.
double remainingInches = 75 % 12; // Get the remining inches of the conversion.
cout << "A " << playerInches <<" inch tall basketball player is " << convertFeet << " feet " << remainingInches << " inches tall.";  // Print the statement

return 0;
}
