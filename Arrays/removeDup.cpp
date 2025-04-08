#include <iostream>
#include <algorithm> // For std::sort (optional)
using namespace std;

int removeDup(int arr[], int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    // Optional: Sort if input might be unsorted
    // sort(arr, arr + n);

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j]; // Move i first, then assign
        }
    }
    return i + 1; // Return number of unique elements
}

int main() {
    int arr[5] = {1, 1, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int newLength = removeDup(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}