//
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    void area() override {
        cout << "Circle Area: " << 3.1416f * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    void area() override {
        cout << "Rectangle Area: " << length * width << endl;
    }
};

class Triangle : public Shape {
private:
    float base, height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    void area() override {
        cout << "Triangle Area: " << 0.5f * base * height << endl;
    }
};

int main() {
    Shape* s;

    Circle c(4);
    Rectangle r(5, 3);
    Triangle t(6, 2);

    s = &c; s->area();
    s = &r; s->area();
    s = &t; s->area();

    return 0;
}
