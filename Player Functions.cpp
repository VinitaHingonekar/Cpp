/******************************************************************************

1.Define variables like health, attack, defense, healingPower for your player and display their values initially in your program using cout statements.
2.Create a method named TakeDamage() which takes an argument called damageToInflict and reduces the health of the player by damageToInflict once this function is called. Print the player health left after this function is called. The player health should not go below 0 (In negative).
3.Create a method named Heal() which takes an argument called healthToRecover and increase the health of the player once this function is called by the amount healthToRecover. Print the player health left after this function is called.
4.Create a method named DamageMultiplier() which takes an argument called multiplier and multiplies the damage that player can inflict when attacking enemies in future. Print the player attack after this function is called.
For example, Suppose the current attack value is 20, and you are passing 2 as a parameter in this function then-new attack value should become 20 * 2 = 40.
(The multiplier value can be a fractional value as well like 0.5)
5.Create and Call all these above functions and communicate effectively using cout statements what is happening in each step.

*******************************************************************************/
#include <iostream>
using namespace std;

int health = 100, attack = 20, defense = 10, healingPower = 15;

void TakeDamage(int damageToInflict)
{
    health -= damageToInflict;
    if(health < 0)
        health = 0;
    cout << "Player Health after calling the TakeDamage("<<damageToInflict <<") function is " << health << endl;
}

void Heal(int healthToRecover)
{
    health += healthToRecover;
    cout << "Player Health after calling the Heal("<<healthToRecover <<") function is " << health << endl;
}

void DamageMultiplier(float multiplier)
{
    float damageValue = attack * multiplier;
    health -= damageValue;
    if(health < 0)
        health = 0;
    cout << "Player Health after calling the DamageMultiplier("<<multiplier <<") function is " << health << endl;
}

int main()
{
    cout << "Player health : " << health << endl;
    cout << "Attack Damage : " << attack << endl;
    cout << "Healing Power : " << healingPower << endl;
    
    TakeDamage(30);
    Heal(20);
    DamageMultiplier(3.5);
    TakeDamage(30);

    return 0;
}