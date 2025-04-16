#include <iostream>
#include <vector>
using namespace std;

int Countocc(vector<int> &arr, int x) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element to count: ";
    cin >> x;

    int result = Countocc(arr, x);

    cout << "The element " << x << " appears " << result << " times in the array." << endl;

    return 0;
}