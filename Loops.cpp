/******************************************************************************

Write a for loop which will run 10 times and call the shooting() function inside it.
Write a while loop that will run 5 times and call the healing() function inside it.
Write a do-while loop that will run 7 times and call the attacking() function inside it.
The shooting(), healing(), attacking() functions should only have a debug statement inside them which should print:
"player is shooting"
"player is healing"
"player is attacking"

*******************************************************************************/
#include <iostream>
using namespace std;

void Shooting(int bullet)
{
    cout << "Shooting bullet - " << bullet <<endl;
}

void Healing(int heal)
{
    cout << "Healing - " << heal <<endl;
}

void Attacking(int attack)
{
    cout << "Attacking - " << attack <<endl;
}

int main()
{
    int i;
    
    for(i = 1; i <= 10; i++)
    {
        Shooting(i);
    }
    cout << endl;
    
    i = 5;
    while(i>0)
    {
        Healing(i);
        i--;
    }
    cout << endl;
    
    i = 7;
    do
    {
        Attacking(i);
        i--;
    }
    while(i>0);

    return 0;
}