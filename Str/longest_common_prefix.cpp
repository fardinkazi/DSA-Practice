#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int a = strs.size();
        string n = strs[0];
        string m = strs[a - 1];
        string ans = "";
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == m[i]) {
                ans = ans + n[i];
            }
            else break;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<string> input = {"flower", "flow", "flight"};
    string result = sol.longestCommonPrefix(input);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}