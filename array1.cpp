/******************************************************************************
Take N as input from the user.
Input an array from the user of size N.
Find the index of all Peak Elements and print them.
A peak element in an array is one that is not smaller than its neighbours.
Example:
Input - N = 5, arr[] = {1, 2, 3, 5, 4}
Output - 3
Input - N = 3, arr[] = {1, 2, 3}
Output - 2
Note: 0-based indexing
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elemtns" << endl;
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] >= arr[i + 1])
                cout << "Peak index : " << i << endl;
        }
        else if (i == n - 1)
        {
            if (arr[i] >= arr[i - 1])
                cout << "Peak index : " << i << endl;
        }
        else if (arr[i] >= arr[i - 1] && arr[i] > arr[i + 1])
            cout << "Peak index : " << i << endl;

    }

    return 0;
}