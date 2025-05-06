//
#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "This is Base class" << endl;
    }
};

class Intermediate : public Base {
public:
    void showIntermediate() {
        cout << "This is Intermediate class" << endl;
    }
};

class Derived : public Intermediate {
public:
    void showDerived() {
        cout << "This is Derived class" << endl;
    }
};

int main() {
    Derived d;
    d.showBase();
    d.showIntermediate();
    d.showDerived();

    return 0;
}
