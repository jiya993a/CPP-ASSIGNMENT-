//
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow!" << endl;
    }
};

class Bird : public Animal {
public:
    void sound() override {
        cout << "Bird sings: Tweet!" << endl;
    }
};

int main() {
    Animal* a;

    Dog d;
    Cat c;
    Bird b;

    a = &d; a->sound();
    a = &c; a->sound();
    a = &b; a->sound();

    return 0;
}
