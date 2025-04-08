#include <iostream>
#include <vector>
using namespace std;
int equilibrium( vector<int> &arr, int n){
    int total =0;
    for( int i=0; i<n; i++){
        total+=arr[i];
    }
    int currentSum=0;
    for(int i=0; i<n; i++){
        int rightSum = total-currentSum -arr[i];
        if(rightSum == currentSum){
            return arr[i];
        }
        currentSum += arr[i];

    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for( int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<equilibrium(arr, n);


}