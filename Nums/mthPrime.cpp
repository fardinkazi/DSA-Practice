/*Write a program to perform the following:
Take two positive integers m and n as input.
Find the m-th prime number and the n-th prime number.
For each of these two prime numbers, calculate the sum of its digits repeatedly until the result is a single-digit number (i.e., less than 10).
Let these results be m1 and n1.
Finally, print the value of m * m1.
TestCases: m=5 n=6 
Output
10
Explaination
5th prime = 11 → digit sum = 1 + 1 = 2 → m1 = 2
6th prime = 13 → digit sum = 1 + 3 = 4 → n1 = 4
Final answer → m * m1 = 5 * 2 = 10*/
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find the nth prime number
int findNthPrime(int n) {
    int count = 0;
    int num = 2;
    while (true) {
        if (isPrime(num)) {
            count++;
            if (count == n)
                return num;
        }
        num++;
    }
}

// Function to repeatedly calculate digit sum until single digit
int digitRoot(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main() {
    int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;

    int mthPrime = findNthPrime(m);
    int nthPrime = findNthPrime(n);

    int m1 = digitRoot(mthPrime);
    int n1 = digitRoot(nthPrime);

    int result = m * m1;

    cout << result << endl;

    return 0;
}