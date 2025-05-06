//
#include <iostream>
#include <cmath>  // For M_PI (Pi)
using namespace std;

// Area of Circle (overloaded function)
double area(double radius) {
    return M_PI * radius * radius;
}

// Area of Rectangle (overloaded function)
double area(double length, double width) {
    return length * width;
}

// Area of Triangle (overloaded function)
double area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of Circle with radius 5: " << area(5.0) << endl;
    cout << "Area of Rectangle with length 10 and width 5: " << area(10.0, 5.0) << endl;
    cout << "Area of Triangle with base 8 and height 4: " << area(8.0, 4.0) << endl;

    return 0;
}
