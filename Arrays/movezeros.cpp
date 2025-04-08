#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& arr) {
    int j = 0; // Position to place non-zero elements
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZeroes(arr);
    for (int num : arr) cout << num << " ";
}