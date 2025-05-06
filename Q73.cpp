//
#include <iostream>
using namespace std;

class Vector {
private:
    int* arr;
    int size;

public:
    Vector(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; i++)
            arr[i] = 0;
    }

    // Overload [] operator
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            cout << "Index out of bounds!" << endl;
            exit(1);
        }
        return arr[index];
    }

    ~Vector() {
        delete[] arr;
    }
};

// Example usage
int main() {
    Vector v(3);
    v[0] = 11;
    v[1] = 22;

    cout << "v[0] = " << v[0] << endl;
    cout << "v[1] = " << v[1] << endl;

    return 0;
}
