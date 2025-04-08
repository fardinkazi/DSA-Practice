#include<iostream>
using namespace std;
bool ispalindrome( const string &str){
    int left = 0;
    int right = str.size()-1;
    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;

}
int main (){
    string ipstr;
    cin>>ipstr;
    if(ispalindrome(ipstr)){
        cout<<"Sting "<<ipstr<<" is Palindrome"<<endl;
    }
    else{
        cout<<"Sting "<<ipstr<<" is not a Palindrome"<<endl;
    }

}