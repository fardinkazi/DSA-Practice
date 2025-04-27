#include <iostream>
using namespace std;
string replacechar( string str, char chr1, char chr2){
    if( str == "") return str;
    for( int i =0; i<str.size(); i++){
        if(str[i]==chr1) str[i]=chr2;
        else if(str[i]==chr2) str[i]=chr1;
    }
    return str;



}
int main(){
    string str;
    cin>>str;
    char chr1, chr2;
    cin>>chr1;
    cin>>chr2;
    cout<<replacechar(str, chr1, chr2)<<endl;
}
