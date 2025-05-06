//
#include <iostream>
using namespace std;

// Maximum of two numbers (overloaded function)
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

// Maximum of three numbers (overloaded function)
int maximum(int a, int b, int c) {
    return maximum(a, maximum(b, c));  // Reusing the two-number maximum function
}

int main() {
    cout << "Maximum of 10 and 20: " << maximum(10, 20) << endl;
    cout << "Maximum of 10, 20, and 30: " << maximum(10, 20, 30) << endl;

    return 0;
}
