//  This program has the user input a number n and then finds the
//  mean of the first n positive integers

// Beatrix House

#include <iostream>
using namespace std;


int main()
{
	int start, end;  // start and end are positive numbers to providee a range for our equation
 	int total = 0;   // total holds the sum of the first n positive numbers
   	int number;      // the amount of numbers
  	float mean;      // the average of the first n positive numbers

  	cout << "Please enter a positive integer to start." << endl;
   	cin >> start;
   	
   	cout << "Please enter a positive integer to end." << endl;
   	cin >> end;

  	if (start > 0)
  	{
      	for (number = start; number <= end; number++)
        {
 	  	    total = total + number;
		}  // curly braces are optional since there is only one statement 
		
        mean = static_cast<float>(total) / (end - start + 1);
        
		cout << "The mean average of numbers between " << start << 
		        " and " << end << " is " << mean << "." << endl;
    }
    else 
        cout << "Invalid input - integer must be positive" << endl;

   system("pause");
   return 0;	
}
