#include<iostream>
using namespace std;
int count( string str){
    int vowels = 0,  constants = 0,  whitespaces = 0;
    for( int i =0; i<str.length(); i++){
        str[i]=tolower(str[i]);
    }
    for( int i =0; i<str.length(); i++){
        if( str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            vowels++;
        }
        else if ( str[i]>= 'a' && str[i]<='z'){
            constants++;
        }
        else if(str[i]== ' '){
            whitespaces++;
        }

    }
    cout<<"Vowels "<<vowels<<endl;
    cout<<"Constants "<<constants<<endl;
    cout<<"Whitespaces "<<whitespaces<<endl;
}

int main(){

    string str;
    cout << "Enter a string: ";
    getline(cin, str); 
    count(str); 
    return 0;
}
