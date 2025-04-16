#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void countfreq(string str) {
    unordered_map<char, int> freq;

    // Count frequency of each character
    for (char c : str) {
        freq[c]++;
    }

    // Print the frequencies
    for (char c : str) {
        if (freq[c] != 0) {
            cout << c << freq[c] << " ";
            freq[c] = 0; // Avoid printing again
        }
    }
}

int main() {
    string str = "fardinkazi";
    countfreq(str);
}