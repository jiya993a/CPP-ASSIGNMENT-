//
#include <iostream>
using namespace std;

class Base {
public:
    void baseFunction() {
        cout << "Function from Base class" << endl;
    }
};

class Derived1 : public Base {
public:
    void show1() {
        cout << "Derived1 class" << endl;
    }
};

class Derived2 : public Base {
public:
    void show2() {
        cout << "Derived2 class" << endl;
    }
};

class Derived3 : public Base {
public:
    void show3() {
        cout << "Derived3 class" << endl;
    }
};

int main() {
    Derived1 d1;
    Derived2 d2;
    Derived3 d3;

    d1.baseFunction(); d1.show1();
    d2.baseFunction(); d2.show2();
    d3.baseFunction(); d3.show3();

    return 0;
}
