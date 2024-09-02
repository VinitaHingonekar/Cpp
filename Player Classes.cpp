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
    
public:
    int health;
    int attack_power;

    Player(int h, int a) {
        health = h;
        attack_power = a;
    }
};

int main() {
    
    gameStory();

    Player player(100, 20);

    cout << "Player with " << player.health << " health and " << player.attack_power << " attack power." << endl;

    return 0;
}
