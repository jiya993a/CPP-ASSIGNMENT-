//
#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator, denominator;
public:
    Fraction() : numerator(0), denominator(1) {}

    friend istream& operator>>(istream& in, Fraction& f) {
        cout << "Enter numerator: ";
        in >> f.numerator;
        cout << "Enter denominator: ";
        in >> f.denominator;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Fraction& f) {
        out << f.numerator << "/" << f.denominator;
        return out;
    }
};
