/*
TASKS:
Add relevant variables inside Player Class, feel free to add more variables of your own.
Add a heroic introduction for the player inside the constructor.
Add public and private access modifiers in your code.
*/

#include <iostream>
using namespace std;

void gameStory() {
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
