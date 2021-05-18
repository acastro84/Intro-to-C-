//******************************************************************
// Quarterly Sales program
// Programmer: Armando Castro
// Completed : 02/23/2020
// Status    : Complete
//
// This program calls the function getSales() 4 times to get the 
// division name and the 4 sales figures. It will then determine
// the highest of the four sales  and display division name and 
// sales number to std out.  
//******************************************************************

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


/*******************************************************************
*                         getSales                                 *
* This function takes a double number and stores the value in the  *
* current_division variable.                                       *
*******************************************************************/ 

double getSales(double current_division, string regionName)
{

	cout << "Enter the quarterly sales for the " << regionName << " division: ";
	cin >> current_division;    // Loop primer
	while (current_division < 0)  // Test the parameters 
		{
		cout << "Sales figures cannot be negative, please re-enter : ";
		cin >> current_division;
		}
	return current_division;   // End loop and accept the parameter.
}

void findHighest(double northEast, double southEast, double northWest, double southWest); // function prototype 


int main()
{
	double northEast;		// Northeast Sales
	double southEast;		// Southeast Sales
	double northWest;		// Northwest Sales
	double southWest;		// Southwest Sales
	
	northEast = getSales(northEast, "Northeast");  // Input validation added string name for cout. 
	southEast = getSales(southEast, "Southeast");
	northWest = getSales(northWest, "Northwest");
	southWest = getSales(southWest, "Southwest");
	
cout << fixed << showpoint << setprecision(2) << endl;  // Format to 2 decimal points. 
findHighest(northEast, southEast, northWest, southWest);  // Print desired output to std. 
return 0;
}
	
/*******************************************************************
*                           findHighest                            *
* This function evaluates four double numbers.  After validating   *
* input, It uses if statements to determine which number is the    *
* highest. When a number is determined to be the highest, the      *
* number is printed to std out.                                    *
********************************************************************/
	
void findHighest(double northEast, double southEast, double northWest, double southWest)	
{	
	if (northEast > southEast)
		if (northEast > northWest)
			if (northEast > southWest)  // nested if to determine rank among the 4. 
			{
				cout << "The Northeast division had the highest sales this quarter. " << endl;
				cout << "Their sales were $" << northEast << endl;
			}
	if (southEast > northEast)
		if (southEast > northWest)
			if (southEast > southWest)
			{	
				cout << "The Southeast division had the highest sales this quarter. " << endl;
				cout << "Their sales were $" << southEast << endl;
			}
	if (northWest > northEast)
		if (northWest > southEast)
			if (northWest > southWest)
			{
				cout << "The Northwest division had the highest sales this quarter. " << endl;
				cout << "Their sales were $" << northWest << endl;
			}
	if (southWest > northEast)
		if (southWest > southEast)
			if (southWest > northWest)
			{
				cout << "The Southwest division had the highest sales this quarter. " << endl;
				cout << "Their sales were $" << southWest << endl;
			}
}

