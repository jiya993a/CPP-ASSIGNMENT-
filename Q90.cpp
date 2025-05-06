//
#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal Constructor\n";
    }

    void eat() {
        cout << "Animal eats food.\n";
    }
};

class Mammal : virtual public Animal {
public:
    Mammal() {
        cout << "Mammal Constructor\n";
    }
};

class Bird : virtual public Animal {
public:
    Bird() {
        cout << "Bird Constructor\n";
    }
};

class Bat : public Mammal, public Bird {
public:
    Bat() {
        cout << "Bat Constructor\n";
    }
};

int main() {
    Bat b;
    b.eat(); // No ambiguity due to virtual inheritance
    return 0;
}
