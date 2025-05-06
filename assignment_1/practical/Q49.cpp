//
#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Maximum of 10 and 20: " << maximum(10, 20) << endl;         // int
    cout << "Maximum of 3.14 and 2.71: " << maximum(3.14, 2.71) << endl; // double
    cout << "Maximum of 'a' and 'z': " << maximum('a', 'z') << endl;     // char

    return 0;
}
