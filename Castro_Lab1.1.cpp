//******************************************************************
// Flash Drive price program
// Programmer: Armando Castro
// Completed : 1/23/2020
// Status    : Complete
//
// This program determines how much a flash drive should be sold for
// to net a profit of 35%. (The drive sells for $8.00)
//******************************************************************

#include <iostream>      // input/output declarations
using namespace std;
#include <string>
#include <math.h>
int main()
{
double drivePrice = 8; // The price of the flash drive.
double percentageNeeded = 135; // 100 % plus 35.
double onePercent = drivePrice / 100; // Get one percent.
double salePrice = onePercent * percentageNeeded; // increase 1% increment  135 times.
cout << "To have a 35% profit, the flash drive should sell for $" << salePrice <<".";  // Print the statement

return 0;
}
