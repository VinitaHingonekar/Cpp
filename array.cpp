/******************************************************************************
Create a 1-D Array of size 15.
Initialize values as follow(0-based indexing)-
if the index is odd, initialize it with 3*index
if the index is even, initialize it with 2*index.
Print the array.
*******************************************************************************/

#include <iostream>

int main()
{
    int arr[15];

    for (int i = 0; i < 15; i++)
    {
        if (i % 2 == 0)
            arr[i] = i * 2;
        else
            arr[i] = i * 3;


        std::cout << arr[i] << " ";
    }

    return 0;
}