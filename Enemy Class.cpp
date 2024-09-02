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
        cout<<"--------------------------------------"<<endl;
        cout<<"Hi, my name is Eldon."<<endl;
        cout<<"We have to defeat the Shadowman."<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"Player Stats:"<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"Eldon's Health : "<<health<<endl;
        cout<<"Eldon's Attack Range : "<<minDamage<<" - "<<maxDamage<<"."<<endl;
        cout<<"Eldon's Healing Range : "<<minHealing<<" - "<<maxHealing<<"."<<endl;
        cout<<"--------------------------------------"<<endl;
    }
    
    int GetHealth()
    {
        return health;
    }
    
    void TakeDamage(int damage)
    {
        if(health > 0) // player is alive
        {
            cout<<"--------------------------------------"<<endl;
            cout<<"Oh no! Shadowman damaged Eldon."<<endl;
            cout<<"Enemy is dealing dmage of "<<damage<<" to Eldon."<<endl;
            health -= damage;
            cout<<"Eldon's current health after getting damaged is : "<<health<<endl;
            cout<<"--------------------------------------"<<endl;
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
        cout<<"Eldon damaged the Shadowman with a hit of "<<randomDamage<<endl;
        // enemyHealth -= dmage;
        return 0;
    }
    
    void Heal()
    {
        int randomHeal = (rand() % (maxHealing - minHealing + 1) + minHealing);
        cout<<"--------------------------------------"<<endl;
        cout<<"Eldon will get "<<randomHeal<<" health."<<endl;
        health += randomHeal;
        cout<<"Eldon's current health after getting healed is : "<<health<<endl;
        cout<<"--------------------------------------"<<endl;
    }
};

class Enemy {
  
private:

    int health = 100;
    
    int maxDamage = 25;
    int minDamage = 15;
    
public:

    Enemy()
    {
        cout<<"--------------------------------------"<<endl;
        cout<<"I am the Shadowman!"<<endl;
        cout<<"I am the protector tof the treasure. No one can defeat me."<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"Enemy Stats:"<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"Enemy's Health : "<<health<<endl;
        cout<<"Enemy's Attack Range : "<<minDamage<<" - "<<maxDamage<<"."<<endl;
        cout<<"--------------------------------------"<<endl;
        
    }
    
    int GetHealth()
    {
        return health;
    }
    
    void TakeDamage(int damage)
    {
        if(health > 0) // player is alive
        {
            cout<<"--------------------------------------"<<endl;
            cout<<"Oh yes! Shadowman was attacked by Eldon."<<endl;
            cout<<"Eldon is dealing dmage of "<<damage<<" to Shadowman."<<endl;
            health -= damage;
            cout<<"Shadowman's current health after getting damaged is : "<<health<<endl;
            cout<<"--------------------------------------"<<endl;
        }
        else
        {
            cout<<"Shadowman is dead."<<endl;
        }
    }
    
    int GiveDamage()
    {
        srand(time(0));
        int randomDamage = (rand() % (maxDamage - minDamage + 1) + minDamage);
        cout<<"The Shadowman damaged Eldon with a hit of "<<randomDamage<<endl;
        // enemyHealth -= dmage;
        return 0;
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
            Enemy enemy1;
            
            // cout<<"The Player Health is : "<<player1.GetHealth()<<endl;
            cout<<"The Enemy Health is : "<<enemy1.GetHealth()<<endl;
            enemy1.GiveDamage();
        }
        else
        {
            cout<<"Thanks for playing the game!";
        }
    }
    while(userInput == 'S' || userInput == 's');

    return 0;
}
