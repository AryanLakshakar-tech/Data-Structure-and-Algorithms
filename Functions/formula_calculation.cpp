//a^2+b^2+2*ab

#include<iostream>
using namespace std;

int formula(int a,int b){
    int x;
    x=a*a+b*b+2*a*b;
    return x;

}

int main(){
    int a=1,b=2;
    cout<<formula(a,b);

}