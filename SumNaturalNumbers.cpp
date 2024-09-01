/******************************************************************************

Write a program to calculate the sum of first 'n' Natural Numbers.
Take an integer input for the value of  'n' from user.
Natural numbers are integers starting from 1 till infinity.
This means suppose a user is giving input as 10, so ‘n’ will be 10, and your program should calculate the sum of the first 10 Natural Numbers:
which will be → 1+ 2+ 3+ 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
Your program has to give the correct outputs as per the input.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n, sum=0, i;
    
    cout<<"Enter a number : ";
    cin >> n;
    
    for(i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    cout << sum;

    return 0;
}