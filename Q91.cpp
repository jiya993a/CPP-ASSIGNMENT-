//
#include <iostream>
#include <vector>
using namespace std;

class Polynomial {
private:
    vector<int> coeffs;

public:
    Polynomial(const vector<int>& c) : coeffs(c) {}

    void print() const {
        for (int i = coeffs.size() - 1; i >= 0; --i) {
            if (coeffs[i] != 0) {
                if (i != coeffs.size() - 1)
                    cout << " + ";
                cout << coeffs[i];
                if (i > 0)
                    cout << "x^" << i;
            }
        }
        cout << endl;
    }

    Polynomial add(const Polynomial& other) {
        size_t maxSize = max(coeffs.size(), other.coeffs.size());
        vector<int> result(maxSize, 0);

        for (size_t i = 0; i < maxSize; ++i) {
            int a = (i < coeffs.size()) ? coeffs[i] : 0;
            int b = (i < other.coeffs.size()) ? other.coeffs[i] : 0;
            result[i] = a + b;
        }
        return Polynomial(result);
    }

    Polynomial multiply(const Polynomial& other) {
        vector<int> result(coeffs.size() + other.coeffs.size() - 1, 0);
        for (size_t i = 0; i < coeffs.size(); ++i) {
            for (size_t j = 0; j < other.coeffs.size(); ++j) {
                result[i + j] += coeffs[i] * other.coeffs[j];
            }
        }
        return Polynomial(result);
    }
};

int main() {
    Polynomial p1({1, 2, 3});     // 3x^2 + 2x + 1
    Polynomial p2({0, 1, 4});     // 4x^2 + x

    cout << "P1: ";
    p1.print();
    cout << "P2: ";
    p2.print();

    Polynomial sum = p1.add(p2);
    cout << "Sum: ";
    sum.print();

    Polynomial product = p1.multiply(p2);
    cout << "Product: ";
    product.print();

    return 0;
}
