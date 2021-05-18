//******************************************************************
// Property Tax Program
// Programmer: Armando Castro
// Completed : 02/01/2020
// Status    : Complete
//
// This program computes assessed value and property tax of a given
// property value and tax rate from the user. (Madison County only) 
//******************************************************************


#include <iostream>
#include <iomanip> //Used to format the strings when printing to STD.
using namespace std;

const double ASSESSED_MULT = .60;  //Setting constant for all occurrences 

int main() {
	double actual_value;
	double tax_rate;
	
	
	cout << "Please enter the actual value of the property in dollars. " << endl;  //get actual
	cin >> actual_value;
	cout << "Please enter dollar value amount for each 100$ increment of the assessed value. " << endl;  // get tax rate
	cin >> tax_rate;
	
	double assessed_value = (actual_value * ASSESSED_MULT);  // calculate assessed
	double property_tax = (assessed_value / 100) * tax_rate; // calculate property tax
	
	
	cout << "Property Value:  $  "<< setw(6) << actual_value << endl; //setting w to 6 as a minimum to not be overridden
	cout << "Assessed Value:  $  "<< setw(6) << assessed_value << endl;//setting w to 6 as a minimum to not be overridden
	cout << "Property Tax:    $  "<< setw(6) << property_tax << endl;//setting w to 6 as a minimum to not be overridden
	
	return 0;
	
}






