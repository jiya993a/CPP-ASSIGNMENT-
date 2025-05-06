//
#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();          // Default argument
    greet("Alice");   // Custom argument
    return 0;
}
