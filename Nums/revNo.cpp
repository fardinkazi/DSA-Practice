#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int rev = 0;

    while (n > 0) {
        int last_digit = n % 10;  // Extract last digit
        rev = rev * 10 + last_digit;  // Build reversed number
        n = n / 10;  // Remove last digit
    }

    cout << "Reversed number: " << rev << endl;
    return 0;
}