// Written by Seng Vengkim
#include <iostream>  // adding isotream library
using namespace std; // using namespace identifier

int main()
{
    const int size = 100; // declare constant value of size equal to 100
    double score[size];   //  declare score as double to accept decimal and integers
    int count = 0;        // declare counter for the number of array element have been filled

    cout << "Enter Exam Score: ";  // output Enter Exam Score for user
    for (int i = 0; i < size; i++) // this block for code is store the user input in an array so that is can be access later
    {
        cin >> score[i];
        if (score[i] >= 0) // this part is to check if the input is still a number and if not the input will stop accepting
        {
            count++;
        }
        else
        {
            break;
        }
    }

    int countOfA = 0, countOfB = 0, countOfC = 0, countOfD = 0, countOfF = 0, countofOut = 0; // declare counter variable for everyone letter grades
    for (int j = 0; j <= count; j++)                                                          // this block of code is for going throught each element in the array and check if it match any of the condition. if it does the counter will go up by one
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
    cout << "Number of A's: " << countOfA << endl; // this part is the output to show the number of grade letter and the total score that have been input
    cout << "Number of B's: " << countOfB << endl;
    cout << "Number of C's: " << countOfC << endl;
    cout << "Number of D's: " << countOfD << endl;
    cout << "Number of F's: " << countOfF << endl;
    cout << "Total Number of Scores: " << count;
    return 0;
}