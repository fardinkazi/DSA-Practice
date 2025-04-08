// An element is considered a leader if it is greater than or equal to all elements to its right
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findLeaders (const vector<int>&arr){
    int n = arr.size();

    vector<int> result;
    
    int maxfromright = arr[n-1];

    result.push_back(maxfromright);

    for( int i = n-2; i>=0; i--){
        if(arr[i]>=maxfromright){
            maxfromright = arr[i];
            result.push_back(maxfromright);
        }
    }
    reverse(result.begin(),result.end());
    return result;

}
int main(){
    vector<int> arr = {2,16, 17, 4, 3, 5, 1};   
    vector<int> result = findLeaders(arr);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout<<endl;
    return 0;

}