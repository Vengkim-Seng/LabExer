#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float radius, area, circumference;                           // declare the variable radius, area, circumference
    cout << "Enter the radius: ";                                // output "Enter the radius" to get input
    cin >> radius;                                               // get the radius input
    area = M_PI * radius * radius;                               // calculate the area of the circle
    circumference = 2 * M_PI * radius;                           // calculate the cirvumference of the cirlce
    cout << "The area of circle is: " << area << endl;           // output the area of the circle to the terminal
    cout << "The circumference of circle is: " << circumference; // output thr circumference of the circle to the terminal
    return 0;
}