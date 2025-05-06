//
#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

class Bike : public Vehicle {
public:
    void ride() {
        cout << "Bike is riding" << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.start();
    c.drive();

    b. start();
    b. drive();
