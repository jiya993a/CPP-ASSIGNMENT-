//
#include <iostream>
using namespace std;

// Inline function to calculate the sum of two numbers
inline int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10, num2 = 20;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum(num1, num2) << endl;
    return 0;
}
