#include<iostream>
using namespace std;
      int majorityElement(int arr[], int n) {
          unordered_map<int,int>freq;
          for( int i =0; i <n; i++){
              freq[arr[i]]++;
              if(freq[arr[i]]>n/2){
                  return arr[i];
              }
              
          }
          return -1;
        }
          
int main(){
   int n;
   cout<<"Enter size of array"<<endl;
   cin>>n;
   cout<<"Enter elemetns of array on by one (press enter)"<<endl;
   int arr[n];
   for( int i = 0; i<n; i++){
    cin>>arr[i];
   }
   int ans = majorityElement(arr, n);
   if (ans != -1)
   cout << "The majority element in the array is: " << ans << endl;
else
   cout << "No majority element found." << endl;

}
    