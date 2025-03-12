#include <iostream>
using namespace std;

int main() {
    // 1. Initializing an array
    int arr[5] = {10, 20, 30, 40, 50};

    // 2. Accessing elements
    cout << "Element at index 2: " << arr[2] << endl;

    // 3. changing an element
    arr[1] = 25;
    cout << "Updated element at index 1: " << arr[1] << endl;

    // 4. Traversing an array
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
