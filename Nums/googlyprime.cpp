#include <iostream>
using namespace std;
string helper (int n){
    if( n==0 or n==1) return "No";
    int sum =0;
    while(n>0){
        int r = n%10;
        sum += r;
        n = n/10; 
    }
    bool isprime =true;
    for( int i=2; i<=sqrt(sum); i++){
        if(sum%i==0){
            isprime = false;
        }

    }
    return isprime ? "Yes" : "No";




}
int main(){
    int n;
    cin>>n;
    cout<<helper(n);
}