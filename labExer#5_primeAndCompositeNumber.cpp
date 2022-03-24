// Written by Seng Vengkim
#include <iostream>  // adding isotream library
using namespace std; // using namespace identifier

int main()
{
    int number, count = 0;            // declare the variable number and counter
    cout << "Enter the Number: ";     // display output Enter the number to the console
    cin >> number;                    // get the input number
    for (int i = 1; i <= number; i++) // for this block of code is to find how many factor thier are for the number
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 2) // for this block of code is to check it the number of factor is equal to 2. if it does print "is a prime number " and if not print "is a composite number"
    {
        cout << number << " is a prime number" << endl;
    }
    else
    {
        cout << number << " is a composite  number" << endl;
    }
    cout << "The factor of " << number << " is "; // display the output of the number of factor
    for (int i = 1; i <= number; i++)             // here is to calulate the factors of the number and put them in a line
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}