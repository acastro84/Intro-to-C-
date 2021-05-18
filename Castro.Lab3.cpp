//******************************************************************
// Speed of Sound Lab
// Programmer: Armando Castro
// Completed : 02/07/2020
// Status    : Complete
//
// This program computes how much time it takes for a the speed of
// speed of sound to travel through specific substance. The user will pick
// a menu choice, and the distance traveled.
//******************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

double const AIR_SPEED = 1100;  // speed for air as a constant
double const WATER_SPEED = 4900;  // speed for water as a constant
double const STEEL_SPEED = 16400;  // speed for steel as a constant

int main()
{
	int choice; // menu choice here.  used in conjunction with the switch statement
	double distance;  // used in computation of time_traveled and final print statement. 
	double time_traveled; // This is what we are looking for.  (output)
	string substance; // allows us to change the stdout according to what is chosen.
	
	
	// Display the menu for the user.   
	cout << "Select a substance for the sound to travel through; \n";
	cout << "     1. Air\n";
	cout << "     2. Water\n";
	cout << "     3. Steel\n";
	cin >> choice;

	if (choice < 1 || choice > 3) //Check the choice and if acceptable, ask for distance. 
		{
		cout <<"You have made an invalid selection.\n"  //data validation 
		<<"Please run the program again, and make a\n"
		<<"selection of 1, 2, or 3.  \n";
		}
	else
		{
		cout << "Enter the number of feet the sound will travel. ";
		cin >> distance;	
		}


	switch (choice)   // using input from choice to make a selection. 
	{
		case 1: 
		{	
			time_traveled = distance / AIR_SPEED;
			substance = "air";  // std out
			cout << "The sound wave will travel " << distance << " feet through " << substance << " in " << fixed << showpoint << setprecision(4) << time_traveled << " seconds." << endl;
			break;  // keep the switch from executing all.  
		}
		case 2:
		{
		    time_traveled = distance / WATER_SPEED;
			substance = "water";
			cout << "The sound wave will travel " << distance << " feet through " << substance << " in " << fixed << showpoint << setprecision(4) << time_traveled << " seconds." << endl;
			break;
		}
		case 3:
		{   
			time_traveled = distance / STEEL_SPEED;
			substance = "steel";
			cout << "The sound wave will travel " << distance << " feet through " << substance << " in " << fixed << showpoint << setprecision(4) << time_traveled << " seconds." << endl;
			break;
		}
		default:
			cout <<"Exiting program.";
				
	}
	return 0;	
}
