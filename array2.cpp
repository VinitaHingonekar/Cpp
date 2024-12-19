/******************************************************************************
-Create an array based on user-specified size.
-Fills the array with integers provided by the user.
Asks the user to specify an integer to be removed from the array.
Deletes the first occurrence of the specified integer from the array, if it exists, and shifts the remaining elements accordingly.
If the specified integer is not found, the program should inform the user.
Print the updated array after the deletion operation.

Input Format:

A single integer n, the size of the array.
Followed by n integers, representing the elements to fill the array.


Output Format:

A single line starting with the phrase "Updated array: ", followed by the elements of the array after the deletion operation. Each element should be separated by a space.
If the element to delete is not found, outp ut "Element not found. No deletion performed."
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    bool found;

    cout << "Enter number of elemtns" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements." << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to delete." << endl;
    cin >> m;

    // int k;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            found = true;
            k = i;

            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }

    if (found)
    {
        cout << "Updated array " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
        cout << "Element not found. No deletion performed." << endl;


    return 0;
}