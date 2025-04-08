#include<iostream>
using namespace std;
void countfreq( string str){
    sort(str.begin(), str.end());
    char ch = str[0];
    int count = 1;
    for( int i =0; i< str.size(); i++){
        if(str[i]==ch){
            count++;
        }
        else{
            
            cout<<ch<<count<<" ";
            count = 1;
            ch = str[i];
        }
    }
    cout<<ch<<count<<" ";

}
int main (){
    string str = "fardinkazi";
    countfreq(str);
}