#include<iostream>
using namespace std;

char nextchar(char a){
    if(a=='z')
        return 'a';
    
    else    
        return a+1;
}

int main(){
    char ch='z';
    cout<<nextchar(ch);
}