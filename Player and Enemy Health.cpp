#include <iostream>
using namespace std;

int main() 
{
    int playerHealth, enemyHealth;
  
    cout << "Enter Player health: " <<endl;
    cin >> playerHealth;
  
    cout << "Enter Enemy health: " <<endl;
    cin >> enemyHealth;

    // 1. Check different combinations of player health and enemy health using if-else statements:
    if(playerHealth > 0 && enemyHealth <= 0)
    {
        cout << "Enemy is Dead." <<endl;
    }
    if(playerHealth <= 0 && enemyHealth < 0)
    {
        cout << "Player is dead." <<endl;
    }
    
    // 2.Create a chained if-else statement
    if(playerHealth == 100)
    {
        cout << "Player Health is full.";
    } 
    else if(playerHealth == 50)
    {
        cout << "Player Health is half";
    }
    else if(playerHealth == 0)
    {
        cout << "Player Health is zero";
    }
    
    // 3.If player health is greater than 0, check the enemy health whether it's full/half/zero.
    if(playerHealth > 0)
    {
        if(enemyHealth == 100)
        {
            cout << "Enemy Health is full." <<endl;
        } 
        else if(enemyHealth == 50)
        {
            cout << "Enemy Health is half" <<endl;
        }
        else if(enemyHealth == 0)
        {
            cout << "Enemy Health is zero" <<endl;
        }
    }
    
    // 4.If player health or enemy health is zero, then print the message game over and display player won or lost depending upon who died.
    if(playerHealth <=0 || enemyHealth <= 0)
    {
        string hasWon = (playerHealth <= 0) ? "Player Lost" : "Player Won";
        cout << hasWon <<endl;
    }
    
    // 5.If player and enemy health both are zero, print the message of the game over and display a draw statement.
    if(playerHealth <= 0 && enemyHealth <= 0)
    {
        cout << "Game Over.\nIt's a DRAW" <<endl;
    }
}