#include <iostream>
#include <algorithm>

using namespace std;

bool moveOn = false;
	int numDays, stuSurv;
	double *numMovies = nullptr,
		   total = 0.0,
		   average;

/*numMovies = new double[stuSurv];   

double getData(numMovies[])
{
	for(int count = 0; count < stuSurv; count++)
	{
		bool moveOn = false;
		
		while(!moveOn)
		{
			cout << "Student " << (count +1) << ":";
			cin >> numMovies[count];
			if(numMovies[count] < 1)
				{
					cout << "You cannot enter a number less than 1.\n";
				}
		
		else
			moveOn = true;
		}
	}
}   -- doesnt meet output requirements.  
*/   
int main()
{
		
	
	while(!moveOn)
	{
		cout << "How many students were surveyed? ";
		cin >> stuSurv;
		if(stuSurv < 1)
			{
				cout << "You cannot enter a number less than 1.\n";
							}
		
		else
			moveOn = true;
	}
	
	numMovies = new double[stuSurv];
	
	cout << "Please enter the number of movies for each student below: \n";
	
	for(int count = 0; count < stuSurv; count++)
	{
		moveOn = false;
		
		while(!moveOn)
		{
			cout << "Student " << (count +1) << ":";
			cin >> numMovies[count];
			if(numMovies[count] < 1)
				{
					cout << "You cannot enter a number less than 1.\n";
				}
		
		else
			moveOn = true;
		}
	}
	
	
	sort(numMovies, numMovies + stuSurv);
	
		
	for(int count = 0; count < stuSurv; count++)
	{
		cout << "Student " << (count +1)<< " \n";		
		cout << numMovies[count] << "\n";
		total += numMovies[count];
	}
	
	
	average = total / stuSurv; 
	cout << "The average movies watched by the " << stuSurv << "students is: " << average;
	
return 0;	

}


