//
#include <iostream>
#include <cmath>  // For pow() function
using namespace std;

double power(double base, int exponent = 2) {
    return pow(base, exponent);
}

int main() {
    cout << "2 raised to the power of 3: " << power(2, 3) << endl;
    cout << "5 raised to the default power (2): " << power(5) << endl;

    return 0;
}
