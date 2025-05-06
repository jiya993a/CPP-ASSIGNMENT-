//
#include <iostream>
using namespace std;

// Functions to be pointed to
void greet() {
    cout << "Hello!" << endl;
}

void farewell() {
    cout << "Goodbye!" << endl;
}

int main() {
    // Array of function pointers
    void (*funcs[2])() = {greet, farewell};

    // Call functions using pointers
    funcs[0]();  // Calling greet
    funcs[1]();  // Calling farewell

    return 0;
}
