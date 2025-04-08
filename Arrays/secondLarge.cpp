#include <iostream>
using namespace std;
int secondLarge( int arr[], int n){
    int large = INT_MIN;
    int secondLarg = INT_MIN;
    int count =0;
    if(n==0) return 0;
    for( int i=0; i<n; i++){
        if(arr[i]>large){
            secondLarg = large;
            large = arr[i];
        }
        else if (arr[i] > secondLarg && arr[i] != large ){
            secondLarg = arr[i];
        }
    }
    for( int i=0; i<n; i++){
        if(arr[i] == secondLarg){
            count++;
        }
    }
    return count;

}
int main() {
    int arr[]={1,1,1};  
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans = secondLarge(arr,n);
    cout<<ans;
}
