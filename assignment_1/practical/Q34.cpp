//
#include <iostream>
using namespace std;

void incrementByTen(int &value) {
    value += 10;
}

int main() {
    int number = 25;

    cout << "Before increment: " << number << endl;
    incrementByTen(number);
    cout << "After increment by 10: " << number << endl;

    return 0;
}
