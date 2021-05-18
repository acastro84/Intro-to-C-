//******************************************************************
// Sorting a Playlist
// Programmer: Armando Castro
// Completed : 03/31/2020
// Status    : Complete
//
// This program asks the user for 10 artists and songs.  It places
// the songs and artist names into an array.  It then sorts the array
// using a sort function.  It then prints the sorted array to standard
// Output
//******************************************************************
#include <iostream>
#include <string>

using namespace std;

void swap(string *xp, string *yp)  
{  
    string temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
 
// A function to implement bubble sort  
void bubbleSort(string arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
     
    // If last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
 
int main()
{
    string mainList[10];
    string artist;
    string songname;
    string songandname;
    string secondList[10];
    int i = 0;
    int n = sizeof(mainList)/sizeof(mainList[0]);
   
   
    for(int i = 0; i < 10; i++)
    {
       
        cout << "Please enter the artist: " << endl;
        getline(cin, artist);
        cout << "Please enter the song name: " << endl;
        getline(cin, songname);
        songandname = artist + "                         " + songname;
        mainList[i] = songandname;
    }
   
    bubbleSort(mainList, n);
   
    cout << "          Playlist\n"
         << "     Artist              Title\n"
         << "==========================================\n";
         
   
   
    for(int i = 0; i < 10; i++)
    {
        cout << mainList[i] << "\n";
    }
   
    return 0;
   
}
