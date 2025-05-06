//
#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int number = 6;
    cout << "Square of " << number << " is: " << square(number) << endl;
    return 0;
}
