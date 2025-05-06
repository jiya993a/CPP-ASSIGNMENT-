//
#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "This is Base class" << endl;
    }
};

class Derived1 : public Base {
public:
    void showDerived1() {
        cout << "This is Derived1 class (inherits Base)" << endl;
    }
};

class Derived2 : public Base {
public:
    void showDerived2() {
        cout << "This is Derived2 class (inherits Base)" << endl;
    }
};

// Derived3 inherits from both Derived1 and Derived2 — Hybrid Inheritance
class Derived3 : public Derived1, public Derived2 {
public:
    void showDerived3() {
        cout << "This is Derived3 class (inherits Derived1 and Derived2)" << endl;
    }
};

int main() {
    Derived3 d3;
    d3.showDerived1();
