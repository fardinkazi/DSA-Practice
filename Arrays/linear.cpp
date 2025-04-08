#include <iostream>
using namespace std;
bool linearSearch( int arr[],int n, int x){
    for(int i = 0; i<n; i++){
        if(arr[i]==x){
            return true;
        }

    }
    return false;
}
int main(){
    int arr[]={5,3,5,6,16,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    if(linearSearch(arr,n,x)){
        cout<<"YES"<<endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;


}
