#include <iostream>
using namespace std;
int findSmallestElement(int arr[], int n) {
 
  int min = arr[0];
  for (int i = 0; i < n; i++) {
    if (min > arr[i]) { 
      min = arr[i];
    }
  }
  return min;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int min = findSmallestElement(arr1, n);
  cout << "The smallest element in the array is: " << min << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  min = findSmallestElement(arr2, n);
  cout << "The smallest element in the array is: " << min<<endl;
  return 0;
}
