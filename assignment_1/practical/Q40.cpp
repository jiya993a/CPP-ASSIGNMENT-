//
#include <iostream>
using namespace std;

#define MAX(a, b) ((a) > (b) ? (a) : (b))  // Macro

inline int max(int a, int b) {  // Inline function
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;

    // Using Macro
    cout << "Maximum using Macro: " << MAX(x, y) << endl;

    // Using Inline function
    cout << "Maximum using Inline Function: " << max(x, y) << endl;

    return 0;
}
