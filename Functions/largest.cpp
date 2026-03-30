#include<iostream>
using namespace std;

int largest(int a,int b,int c){
    if(a>=b && a>=c)
        return a;
    
    else if(b>=c)
        return b;
    
    else
        return c;
}
int main(){
    int a=5,b=4,c=3;
    cout<<largest(a,b,c);
}