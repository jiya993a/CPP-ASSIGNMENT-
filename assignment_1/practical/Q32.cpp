//
#include <iostream>
using namespace std;

// Function to print elements of an array
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to swap two integers using call by reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to increment an integer by 10 using call by reference
void incrementByTen(int &value) {
    value += 10;
}

int main() {
    // Demonstrate printArray
    int numbers[] = {1, 2, 3, 4, 5};
    cout << "Array elements: ";
    printArray(numbers, 5);

    // Demonstrate swap
    int x = 10, y = 20;
    swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    // Demonstrate incrementByTen
    int num = 15;
    incrementByTen(num);
    cout << "After incrementing by 10: num = " << num << endl;

    return 0;
}
