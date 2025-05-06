//
#include <iostream>
#include <cmath>  // For pow() function
using namespace std;

double compoundInterest(double principal, double rate = 5.0, int time = 1) {
    return principal * pow(1 + rate / 100, time);
}

int main() {
    double principal = 1000;
    cout << "Compound Interest for principal " << principal << " with default rate and time: " 
         << compoundInterest(principal) << endl;

    cout << "Compound Interest for principal " << principal << ", rate 6%, time 2 years: " 
         << compoundInterest(principal, 6, 2) << endl;

    return 0;
}
