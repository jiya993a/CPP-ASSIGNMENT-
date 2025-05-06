//
#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    friend float calculateArea(const Circle&);
};

float calculateArea(const Circle& c) {
    return 3.1416f * c.radius * c.radius;
}

int main() {
    Circle c(5);
    cout << "Area of Circle: " << calculateArea(c) << endl;
    return 0;
}
