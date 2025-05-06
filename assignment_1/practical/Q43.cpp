//
#include <iostream>
#include <string>
using namespace std;

// Print integer
void print(int i) {
    cout << "Integer: " << i << endl;
}

// Print float
void print(float f) {
    cout << "Float: " << f << endl;
}

// Print string
void print(string s) {
    cout << "String: " << s << endl;
}

int main() {
    int i = 42;
    float f = 3.14;
    string s = "Hello, World!";

    print(i);  // Calling print for int
    print(f);  // Calling print for float
    print(s);  // Calling print for string

    return 0;
}
