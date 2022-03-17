#include <iostream>
using namespace std;

int main()
{
    int sum, average, product, x, y, z;

    cout << "Enter First number: ";
    cin >> x;
    cout << "Enter Second number: ";
    cin >> y;
    cout << "Enter Third number: ";
    cin >> z;
    sum = x + y + z;
    average = (x + y + z) / 3;
    product = x * y * z;
    cout << "The sum of " << x << ", " << y << ",and " << z << " is " << sum << "." << endl;
    cout << "The average of " << x << ", " << y << ",and " << z << " is " << average << "." << endl;
    cout << "The product of " << x << ", " << y << ",and " << z << " is " << product << "." << endl;
    return 0;
}
