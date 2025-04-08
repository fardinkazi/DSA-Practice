#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int x){
    for(int i =0; i<n; i++){
        if(arr[i]==x){
            return i;
        
        }
    }
    return -1;
}
int main(){
    cout<<"Enter the size of array:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array one by one:";
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to search in the array";
    cin>>x;
    int ans = linearSearch(arr,n,x);
    if (ans == -1)
        cout << "Not Found" << endl;
    else
        cout << "Found at index: " << ans << endl;

    return 0;







}