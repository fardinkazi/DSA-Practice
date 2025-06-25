#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[], int n){
    for( int i =0; i<=n-1; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int x = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = x;
            j--;
        }
    }
    for( int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int arr[] = {4,5,7,90,7,42,3,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    
}