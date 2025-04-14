//Given a maximum of 100 digit numbers as input, find the difference between the sum of odd and even position digits.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string number;
    cin >> number; // Input the number as a string
    
    int oddSum = 0, evenSum = 0;

    // Iterate through the string and calculate the sum of odd and even position digits
    for (int i = 0; i < number.length(); i++) {
        int digit = number[i] - '0'; // Convert char to integer

        // Check if the position (1-based) is odd or even
        if ((i + 1) % 2 == 1) { // Odd position (1-based)
            oddSum += digit;
        } else { // Even position (1-based)
            evenSum += digit;
        }
    }
    
    // Calculate the absolute difference
    int result = abs(evenSum - oddSum);

    cout << result << endl; // Output the result
    
    return 0;
}