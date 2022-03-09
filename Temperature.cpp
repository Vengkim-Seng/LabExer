#include <iostream>  //adding iostream library
using namespace std; // add identifier

int main()
{
    int temp;                      // declare variable temp for temperature
    cout << "Enter Temperature: "; // display Enter Temperature
    cin >> temp;                   // get temp input

    if (temp >= 41 and temp <= 54) // this block of code is to decide what the temperatue is and help the program decide what output to print out in the termianl.
    {
        cout << "Stay hydrated";
    }
    else if (temp >= 32 and temp <= 40)
    {
        cout << "Stay Cool and safe!";
    }
    else if (temp >= 26 and temp <= 31)
    {
        cout << "Keep a sunblock handy!";
    }
    else if (temp >= 21 and temp <= 25)
    {
        cout << "Always keep your cool";
    }
    else if (temp >= 55)
    {
        cout << "Out of Range";
    }
    else
    {
        cout << "Cool breeze in the air";
    }
    return 0;
}