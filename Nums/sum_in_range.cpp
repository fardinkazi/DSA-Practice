#include <iostream>
using namespace std;

int sumRange(int a, int b) {
    return (b * (b + 1) / 2) - ((a - 1) * a / 2);
}

int main() {
    cout << sumRange(1, 10)<<endl;
}