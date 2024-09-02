#include <iostream>
#include<ctime>
using namespace std;

void gameStory() {
    system("clear");
    cout << "---------------------------------------\nForgotten Treasure of the Evergreen\n---------------------------------------\n" << endl;
    cout << "Eldon, a brave boy, ventured into the Evergreen Forest \nin search of a legendary map that would lead him \nto the Forgotten Treasure." << endl;
    cout << "\n---------------------------------------\n" << endl;
    cout << "As he approached the hidden map, he was confronted \nby the Shadow Man, \nthe dark guardian of the treasure." << endl;
    cout << "\n---------------------------------------\n" << endl;
}

class Player {
    
private:

    int health = 100;
    
    int maxDamage = 30;
    int minDamage = 20;
    
    int maxHealing = 15;
    int minHealing = 10;
    
public:

    Player() {
        
        cout<<"Hi, my name is Eldon."<<endl;
        cout<<"We have to defeat the Shadowman."<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"Player Stats:"<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"Eldon's Health : "<<health<<endl;
        cout<<"Eldon's Attack Range : "<<minDamage<<" - "<<maxDamage<<"."<<endl;
        cout<<"Eldon's Attack Range : "<<minHealing<<" - "<<maxHealing<<"."<<endl;
        cout<<"--------------------------------------"<<endl;
    }
    
    int GetHealth()
    {
        return health;
    }
    
    void TakeDamage(int damage)
    {
        if(health < 0) // player is alive
        {
            cout<<"Oh no! Shadowman damaged Eldon."<<endl;
            cout<<"Enemy is dealing dmage of "<<damage<<" to Eldon."<<endl;
            health -= damage;
            cout<<"Eldon's current health after getting damaged is : "<<health<<endl;
        }
        else
        {
            cout<<"Eldon is dead."<<endl;
        }
    }
    
    int GiveDamage()
    {
        srand(time(0));
        int randomDamage = (rand() % (maxDamage - minDamage + 1) + minDamage);
        // enemyHealth -= dmage;
        return 0;
    }
    
    void Heal()
    {
        int randomHeal = (rand() % (maxHealing - minHealing + 1) + minHealing);
        cout<<"Eldon will get "<<randomHeal<<" health."<<endl;
        health += randomHeal;
        cout<<"Eldon's current health after getting healed is : "<<health<<endl;
    }
};

int main() {
    
    gameStory();
    char userInput;
    
    do
    {
        cout<<"Press S to start the game and any other key to exit : ";
        cin>>userInput;
        
        if(userInput == 'S' || userInput == 's')
        {
            Player player1;
        }
        else
        {
            cout<<"Thanks for playing the game!";
        }
    }
    while(userInput == 'S' || userInput == 's');

    return 0;
}
