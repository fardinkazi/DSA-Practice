//Given an array of size N, your task is to find count of element whose value is greater than all of its prior element
#include <iostream>
using namespace std;
int cnt(int arr[], int n){
    int cnt  = 0;
    int max = 0;
    for( int i=0; i<n;i++){
        if(max<arr[i]){
            cnt++;
            max = arr[i];
        }
    }
    return cnt;
}

int main(){

int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
int ans = cnt(arr,n);
cout<<ans;

}
