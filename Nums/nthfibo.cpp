//Write a program to compute the Nth Fibonacci number.
#include <iostream>
using namespace std;
int helper( int n ){
    if( n==0 or n==1) return n;
    int a =0;// First Fibonacci number (F(0))
    int b=1;// Second Fibonacci number (F(1))
    int c;// Stores the computed Fibonacci numbers
    for( int i = 2; i<=n; i++){
        c = a+b;
        a=b;
        b=c;
    }
    return c;

}
int main(){
    int n;
    cin>>n;
    cout<<helper(n);
}