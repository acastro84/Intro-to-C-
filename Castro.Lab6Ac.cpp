//******************************************************************
// Gratuity Calculator program
// Programmer: Armando Castro
// Completed : 03/08/2020
// Status    : Incomplete
//
// This program will compute a restaraunt tip based on a total bill
//amount and a % the patron wishes to tip the server.
//******************************************************************

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Tips
{
	private:
		double taxRate;
		
	public:
		Tips(double rate)			//Constructor with 1 parameter
		{
			taxRate = rate;			//Handles sales with input given tax rate. 
		}
		Tips()
		{							// Default constructor. 
			taxRate = 0.15;			// Default tax rate if not given.  
		}
		
		double computeTip(double amount, double tipRate);
};

int main()
{
	Tips tipRateGiven(rate);
	Tips tipRateGiven();
	char goAgain = 'n';
	
	cout << "This program will compute a restaraunt tip based on a total"
		 << "bill amount and the % the patron wishes to tip the server. \n";
	cout << "Tax % for this location: ";
	cin >> rate;
	while (rate < 0)
	{
		cout << "Tax $ cannot be less than 0. Please re-enter tax %";
		cin >> rate;
	}
	
	// use the computeTip function here.
	computeTip();
	
	while (goAgain = 'y'|| goAgain = 'Y')
	{
		cout << "Compute another tip (y//n)? ";
		cin >> goAgain;
		if (goAgain = 'y'|| goAgain = 'Y')
		{
			cout << "***************Tip Helper****************\n";
			computeTip();	
		}
	}
return 0;
}

/***********************************************************
*                     Tips::computeTip                     *
* This function takes the total bill amount argument and   *
* the tip rate argument from user input. It uses the member*
* variable stored in taxRate along with the total bill     *
* amount to compute the amount before tax as added. After  *
* this amount has been calculated, it applies the entered  *
* tip rate to the non-taxable portion of the bill to       *
* compute and return the tip amounts.                      *
************************************************************/

double Tips::computeTip(double amount, double tipRate)
{
	double nonTaxable = 0.0;
	double tipAmount = 0.0;
	cout << "Enter total bill amount: ";
	cin >> amount;
	nonTaxable = amount - (amount * Tips.taxRate);
	cout << "Entered desired tip %";
	cin >> tipRate;
	tipAmount = nonTaxable * tipRate;
	return nonTaxable, tipAmount;
}
