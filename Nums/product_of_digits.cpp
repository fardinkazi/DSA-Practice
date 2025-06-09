#include <iostream>

long long calculatePrice(long long n) {
    // Handle 0 case separately
    if(n == 0) {
        return 0;
    }
    
    long long product = 1;
    
    // Extract digits and multiply them
    while(n > 0) {
        int digit = n%10;    // Get last digit
        product *= digit;      // Multiply with current product
        n /= 10;              // Remove last digit
    }
    
    return product;
}

int main() {
    // Test Case 1
    long long n1 = 5244;
    std::cout << "Test Case 1:\nInput: " << n1 << "\n";
    std::cout << "Price: " << calculatePrice(n1) << "\n\n";
    
    // Additional Test Cases
    long long n2 = 123;
    std::cout << "Test Case 2:\nInput: " << n2 << "\n";
    std::cout << "Price: " << calculatePrice(n2) << "\n\n";
    
    long long n3 = 100;
    std::cout << "Test Case 3:\nInput: " << n3 << "\n";
    std::cout << "Price: " << calculatePrice(n3) << "\n\n";
    
    long long n4 = 0;
    std::cout << "Test Case 4:\nInput: " << n4 << "\n";
    std::cout << "Price: " << calculatePrice(n4) << "\n";
    
    return 0;
} 