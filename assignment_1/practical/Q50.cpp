//
#include <iostream>
using namespace std;

// Callback function
void printResult(int a, int b, int (*operation)(int, int)) {
    cout << "Result: " << operation(a, b) << endl;
}

// Operations to be used with function pointers
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x = 10, y = 20;

    // Using function pointer for addition
    printResult(x, y, add);

    // Using function pointer for multiplication
    printResult(x, y, multiply);

    return 0;
}
