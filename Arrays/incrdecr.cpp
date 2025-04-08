#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){

    vector <int> arr = { 4,5,6,8,9,2};
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for( int i=0; i<n/2; i++){
        cout<<arr[i]<<" ";
    }
    for( int i=n-1; i>=n/2; i--){
        cout<<arr[i]<<" ";
    }


}