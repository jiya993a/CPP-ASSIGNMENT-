//
#include <iostream>
using namespace std;

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int number = 3;
    cout << "Cube of " << number << " is: " << cube(number) << endl;
    return 0;
}
