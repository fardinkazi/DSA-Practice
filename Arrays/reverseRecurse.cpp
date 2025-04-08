#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>  // for math functions if needed
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
using namespace std;

void printArray(int arr[],int n){
    cout<<"The reversed array is "<<endl;
    for( int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int arr[],int start, int end){
   if(start<end){
    swap(arr[start],arr[end]);
    reverseArray(arr, start+1, end-1);
   }


}
int main(){
    int n = 6;
    int arr[] = {1,2,3,4,5,6};
    reverseArray(arr,0,n-1);
    printArray(arr,n);
    return 0;

}