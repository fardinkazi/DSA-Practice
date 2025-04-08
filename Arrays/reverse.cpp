#include <iostream>
#include <vector>
using namespace std;

// Function to print an array
void printArray(const vector<int>& arr) {
    cout << "The reversed array is: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to reverse an array
void reverseArray(vector<int>& arr) {
    int n = arr.size();
    int left = 0; int right = n-1;
    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Create a vector of size n
    vector<int> arr(n);
    
    // Input elements into the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    // Reverse the array
    reverseArray(arr);

    // Print the reversed array
    printArray(arr);

    return 0;
}