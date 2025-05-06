//
#include <iostream>
#include <cmath> // For M_PI or you can define your own PI

using namespace std;

// Function Prototypes
int maxOfThree(int a, int b, int c);                         // Returns the maximum of three numbers
double areaOfCircle(double radius);                          // Calculates area of a circle
int product(int a, int b);                                   // Returns the product of two integers
void printArray(const int arr[], int size);                  // Prints elements of an array
void swap(int &x, int &y);                                   // Swaps two integers (call by reference)
void incrementByTen(int &value);                             // Increments integer by 10 (call by reference)

int main() {
    // Max of three numbers
    cout << "Max of (3, 7, 5): " << maxOfThree(3, 7, 5) << endl;

    // Area of a circle
    cout << "Area of circle with radius 5: " << areaOfCircle(5.0) << endl;

    // Product of two integers
    cout << "Product of 4 and 6: " << product(4, 6) << endl;

    // Print array
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Array elements: ";
    printArray(arr, 5);

    // Swap two integers
    int a = 10, b = 20;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // Increment by 10
    int num = 15;
    incrementByTen(num);
    cout << "After increment: num = " << num << endl;

    return 0;
}

// Function Definitions

int maxOfThree(int a, int b, int c) {
    return max(a, max(b, c));
}

double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

int product(int a, int b) {
    return a * b;
}

void printArray(const int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void incrementByTen(int &value) {
    value += 10;
}
