// Code by Seng Vengkim
#include <iostream>   // include the iostream library
#include <math.h>     // include the math library
#include <string>     // include the string library
using namespace std;  // using namespace identifier
char choice, choice2; // declare the choice for the main choice to pick in the main menu and choice2 is to pick the choices in the sub menu in lab exercise 2

int main()
{
    do // here is block of code will run throught the code at least once and also this will only display the main menu in the terminal
    {
        cout << "\n \n----------{x}----------" << endl;
        cout << "MAIN MENU: Select Laboratory Activity" << endl;
        cout << "[1] On Arithmetic Operators and Keyboard Input" << endl;
        cout << "[2] On Arithmetic Operator " << endl;
        cout << "[3] Age and Name Printing " << endl;
        cout << "[4] Temperature Messages" << endl;
        cout << "[5] Prime and Composite Number " << endl;
        cout << "[6] Score list" << endl;
        cout << "[X] Exit" << endl;
        cout << "----------{x}----------" << endl;
        cout << "Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case '1': // in this case it will calculate the input of 3 numbers and give you the sum, average and products of the three number
        {
            cout << "\n \n----------{x}----------" << endl;
            cout << "In this program, it will calculate the input of 3 numbers and give you the sum, average and products of the three number" << endl;
            cout << "----------{x}----------" << endl;
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
            cout << "----------{x}----------" << endl;

            cout << "\nPress any keys to go back to the MAIN MENU" << endl;
            cin >> choice;
        }
        break;

        case '2': // in this case it will first display the sub menu of lab exer #2 letting you choose the option of two program
        {
            do
            {
                cout << "\n \n----------{x}----------" << endl;
                cout << "SUB MENU OF LAB EXER #2" << endl;
                cout << "SELECT PROGRAMS" << endl;
                cout << "[1] Circumference and Area" << endl;
                cout << "[2] Temperature Coversion" << endl;
                cout << "[B] Go back to Main Menu" << endl;
                cout << "----------{x}----------" << endl;

                cout << "Your Choice: ";
                cin >> choice2;

                switch (choice2)
                {
                case '1': // in this sub case of case 2 it will calculate the radius input and output the area and circumfernece of the given radius
                {
                    cout << "\n \n----------{x}----------" << endl;
                    cout << "In this program, it will calculate the radius input and output the area and circumfernece of the given radius" << endl;
                    cout << "----------{x}----------" << endl;

                    float radius, area, circumference;
                    cout << "Enter the radius: ";
                    cin >> radius;
                    area = M_PI * radius * radius;
                    circumference = 2 * M_PI * radius;
                    cout << "The area of circle is: " << area << endl;
                    cout << "The circumference of circle is: " << circumference << endl;
                    cout << "----------{x}----------" << endl;

                    cout << "\nPress any keys to go back to the Sub Menu" << endl;
                    cin >> choice2;
                }
                break;

                case '2': // in this sub case of case 2 it will calculate the Celsius input and will output the conversion from C to F and K
                {
                    cout << "\n \n----------{x}----------" << endl;
                    cout << "In this program, it will calculate the Celsius input and will output the conversion from C to F and K" << endl;
                    cout << "----------{x}----------" << endl;
                    float C, F, K;
                    cout << "Enter degree in Celsius: ";
                    cin >> C;
                    K = C + 273.15;
                    F = (C * 9 / 5) + 32;
                    cout << "The value of " << C << "degrees C in K is " << K << " degrees" << endl;
                    cout << "The value of " << C << "degrees C in F is " << F << " degrees" << endl;
                    cout << "----------{x}----------" << endl;

                    cout << "\nPress any keys to go back to the Sub Menu" << endl;
                    cin >> choice2;
                }
                }
            } while (choice2 != 'b');
        }
        break;

        case '3': // in this case it will calculate if the age is even or odd and then it will either print the name input 10 time or 5 time respectively
        {
            cout << "\n \n----------{x}----------" << endl;
            cout << "In the program,it will calculate if the age is even or odd and then it will either print the name input 10 time or 5 time respectively" << endl;
            cout << "----------{x}----------" << endl;

            int age, count, rmdr;
            string name;
            cout << "Enter the age: ";
            cin >> age;
            cout << "Enter the name: ";
            cin >> name;
            rmdr = age % 2;
            if (rmdr == 1)
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
            cout << "----------{x}----------" << endl;

            cout << "\nPress any keys to go back to the MAIN MENU" << endl;
            cin >> choice;
        }
        break;

        case '4': // in this case it will take the input of the temperature and will display a message the correlate the temperature to the message
        {
            cout << "\n \n----------{x}----------" << endl;
            cout << "In this program,it will take the input of the temperature and will display a message the correlate the temperature to the message" << endl;
            cout << "----------{x}----------" << endl;

            int temp;
            cout << "Enter Temperature: ";
            cin >> temp;

            if (temp >= 41 and temp <= 54)
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
            cout << "\n----------{x}----------" << endl;

            cout << "\nPress any keys to go back to the MAIN MENU" << endl;
            cin >> choice;
        }
        break;

        case '5': // in this case it will take the number input and calculate if it is odd or even and it will display if it is a prime or a composite number and also it will diaplay out the factor of the number too
        {
            cout << "\n \n----------{x}----------" << endl;
            cout << "In this program, it will take the number input and calculate if it is odd or even and it will display if it is a prime or a composite number and also it will diaplay out the factor of the number too " << endl;
            cout << "----------{x}----------" << endl;

            int number, count = 0;
            cout << "Enter the Number: ";
            cin >> number;
            for (int i = 1; i <= number; i++)
            {
                if (number % i == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                cout << number << " is a prime number" << endl;
            }
            else
            {
                cout << number << " is a composite  number" << endl;
            }
            cout << "The factor of " << number << " is ";
            for (int i = 1; i <= number; i++)
            {
                if (number % i == 0)
                {
                    cout << i << " ";
                }
            }
            cout << "\n----------{x}----------" << endl;

            cout << "\nPress any keys to go back to the MAIN MENU" << endl;
            cin >> choice;
        }
        break;

        case '6': // in this case it will take a list of score and it will organize the input in the correct the cagterory and output the number in each cagterory and also the total number of score
        {
            cout << "\n \n----------{x}----------" << endl;
            cout << "In this program, it will take a list of score and it will organize the input in the correct the cagterory and output the number in each cagterory and also the total number of score" << endl;
            cout << "----------{x}----------" << endl;
            const int size = 100;
            double score[size];
            int count = 0;

            cout << "Enter Exam Score: ";
            for (int i = 0; i < size; i++)
            {
                cin >> score[i];
                if (score[i] >= 0)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }

            int countOfA = 0, countOfB = 0, countOfC = 0, countOfD = 0, countOfF = 0, countofOut = 0;
            for (int j = 0; j <= count; j++)
            {
                if (score[j] >= 90 && score[j] <= 100)
                {
                    countOfA++;
                }
                else if (score[j] >= 80 && score[j] <= 89)
                {
                    countOfB++;
                }
                else if (score[j] >= 70 && score[j] <= 79)
                {
                    countOfC++;
                }
                else if (score[j] >= 60 && score[j] <= 69)
                {
                    countOfD++;
                }
                else if (score[j] >= 0 && score[j] <= 59)
                {
                    countOfF++;
                }
                else
                {
                    countofOut++;
                }
            }
            cout << "Number of A's: " << countOfA << endl;
            cout << "Number of B's: " << countOfB << endl;
            cout << "Number of C's: " << countOfC << endl;
            cout << "Number of D's: " << countOfD << endl;
            cout << "Number of F's: " << countOfF << endl;
            cout << "Total Number of Scores: " << count;
            cout << "\n----------{x}----------" << endl;

            cout << "\nPress any keys to go back to the MAIN MENU" << endl;
            cin >> choice;
        }
        break;
        }

    } while (choice != 'x'); // this condition it here to check the input to see if it is 'x' and if it is then it will break out of the loop and end the program
}