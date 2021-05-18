//******************************************************************
// Sales Bar Chart
// Programmer: Armando Castro
// Completed : 02/14/2020
// Status    : Complete
//
// This program creates a bar graph based on sales inputs from the user.  
//******************************************************************

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

float store_one = 0;
float store_two = 0;
float store_three = 0;

// Ask the user for the sales and validate their input.


cout << "Enter today's sales value for store 1: ";
cin >> store_one;

while (store_one <=0)   //Validate that it is greater than zero
{
	cout << "Please enter a postive number for store 1: ";
	cin >> store_one;
}
	

cout << "Enter today's sales value for store 2: " ;
cin >> store_two;

while (store_two <=0)  //Validate that it is greater than zero
{
	cout << "Please enter a postive number for store 2: ";
	cin >> store_two;
}

cout << "Enter today's sales value for store 3: ";
cin >> store_three;

while (store_three <=0)  //Validate that it is greater than zero
{
	cout << "Please enter a postive number for store 3: ";
	cin >> store_three;
}


cout << "   Daily Sales  \n";  //Create the first part of stdout
cout << " (each * = $100)\n";

cout << "Store 1: ";  // Store plus * in a for loop

float ast_one = round(store_one / 100);

for (int k = 0; k < ast_one; k++)
{    cout << "*"; // Use for loop to create the rounded number of asterisks
}
cout << "\n";

cout << "Store 2: ";

float ast_two = round(store_two / 100);

for (int k = 0; k < ast_two; k++)
{    cout << "*";   // Use for loop to create the rounded number of asterisks
}    

cout << "\n";

cout << "Store 3: ";

float ast_three = round(store_three / 100);

for (int k = 0; k < ast_three; k++)
    cout << "*"; // Use for loop to create the rounded number of asterisks
    
    
}
