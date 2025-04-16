#include <iostream>
#include <algorithm> // To use sort function
using namespace std;

char mamxocc(string str) {
    char ans;
    int maxfreq = 0;   // To store the maximum frequency
    int count[256] = {0};  // To store the frequency of characters (ASCII range of characters)
    
    for (int i = 0; i < str.size(); i++) {
        count[str[i]]++;  // Count frequency of each character

        // If the frequency of current character is greater than maxfreq, update the answer
        if (count[str[i]] > maxfreq) {
            maxfreq = count[str[i]];  // Update max frequency
            ans = str[i];  // Update answer to the current character
        }
    }
    return ans;
}

int main() {
    string str = "farrrraaaaaaaaadinkazi";
    cout << "Maximum Occurring Character is " << mamxocc(str);
    cout<<endl;

    return 0;

}