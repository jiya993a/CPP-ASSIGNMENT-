//
#include <iostream>
using namespace std;

// Function that modifies array elements by adding 10
void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] += 10;
    }
}int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Modify the array
    modifyArray(numbers, size);

    cout << "Modified array: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

