#include <iostream>
using namespace std;

int main()
{
    float C, F, K;                                                                   // declare variable Celsius(C), Fahrenheit(F), Kelvin(K)
    cout << "Enter degree in Celsius: ";                                             // output "Enter degree in Celsius: " to the input
    cin >> C;                                                                        // get the C input
    K = C + 273.15;                                                                  // Calculate the Kelvin
    F = (C * 9 / 5) + 32;                                                            // Calculate the Fahrenheit
    cout << "The value of " << C << "degrees C in K is " << K << " degrees" << endl; // output the Kelvin
    cout << "The value of " << C << "degrees C in F is " << F << " degrees";         // output the Fahrenheit
    return 0;
}
