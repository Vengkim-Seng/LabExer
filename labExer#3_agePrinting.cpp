// Written by Seng Vengkim
#include <iostream>  // adding isotream library
using namespace std; // using namespace identifier

int main()
{
    int age, count, rmdr;       // declare age , count(COUNTER), rmdr(remainder)
    string name;                // declare name
    cout << "Enter the age: ";  // output display Enter the age
    cin >> age;                 // get age input
    cout << "Enter the name: "; // output display enter the name
    cin >> name;                // get name input
    rmdr = age % 2;             // calculate the remainder
    if (rmdr == 1)              // for this code block it is to calculate if the age is even or odd. if even print the name 10 times and if it is age is odd print the name 5 times.
    {
        while (count < 5)
        {
            cout << name << endl;
            count++;
        }
    }
    else
    {
        while (count < 10)
        {
            cout << name << endl;
            count++;
        }
    }
    return 0;
}