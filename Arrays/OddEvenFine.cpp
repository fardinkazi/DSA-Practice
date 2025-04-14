#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: "<<endl;
    cin >> n;
    int a[n];
    cout<<"Enter elements of array one by one (press Enter): "<<endl;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int d, x;
    cout<<"Enter date: "<<endl;
    cin >> d ;
    cout<<"Enter fine: "<<endl;
    cin>> x;
    
    int fine = 0;
    for (int i = 0; i < n; i++) {
        if ((d % 2 == 0 && a[i] % 2 == 1) || (d % 2 == 1 && a[i] % 2 == 0))
            fine += x;
    }
    
    cout << "the fine is "<<fine<<"Rs"<< endl;
    return 0;
}