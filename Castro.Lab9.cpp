//******************************************************************
// Pointers
// Programmer: Armando Castro
// Completed :04/13/2020
// Status    : Complete
//
// This program determines the median of an even and odd array. It 
// passes the values of an array to a function using pointer notation.
// It then prints the sorted functions and the median values of each
// function. 
//******************************************************************



#include <iostream>
#include <algorithm>
using namespace std;

int array1[10] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27};
int array2[9] = {17, 32, 45, 68, 99, 101, 67, 89, 22};


void printArray(int *ar1, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << *(ar1 + i) << "\n";
    }
}


int medianfunction(int *arr, int num)
    {
       
        int median = 0;
        int middle = 0;
        int minusone, plusone;
       
       
        if(num % 2 == 0)
        {
            minusone = num/2 - 1;
            plusone = (num/2) + 1;
            median = (*(arr+minusone) + *(arr+plusone) )/ 2;
        }
        else
        {
            middle = num / 2;
            median = *(arr+middle);
        }
       
        return median;
       
    }


int main()
{
    sort(array1, array1+10);
    sort(array2, array2+9);
   
    cout << "\n\n Here is the sorted array1." << endl;
   
    printArray(array1, 9);
   
   
   
    cout << "Here is the sorted array2 \n\n";
   
    printArray(array2, 10);
   
   
    cout << "The median of even array1 is: " << medianfunction(array1, 10) << "\n\n";
    cout << "The median of odd array2 is: " << medianfunction(array2, 9) << "\n\n";
   
   
   
    return 0;
}
