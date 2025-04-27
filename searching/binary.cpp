#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int x){
    int low = 0; int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if (arr[mid]<x){
            low = mid+1;
        }
        else {
            high = mid -1;
        }


    }
    return -1;
}
int main(){
    cout<<"Enter size of array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr + n);
    int x; 
    cout<<"Enter target: ";
    cin>>x;
    int ans =binarySearch(arr,n,x);
    if (ans != -1)
        cout << "Element found at index " << ans << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;

}
