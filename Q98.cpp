//
#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int x, y;       // Position
    int score;
    int health;

public:
    Player(string playerName) : name(playerName), x(0), y(0), score(0), health(100) {}

    void move(char direction) {
        switch (direction) {
            case 'w': y++; break;
            case 's': y--; break;
            case 'a': x--; break;
            case 'd': x++; break;
            default: cout << "Invalid move!\n"; return;
        }
        cout << name << " moved to (" << x << ", " << y << ")\n";
    }

    void earnPoints(int points) {
        score += points;
        cout << name << " earned " << points << " points! Total: " << score << endl;
    }

    void takeDamage(int damage) {
        health -= damage;
       
