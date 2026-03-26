#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number = ";
    cin>>n;
    int dig_sum=0;
    int res = 0;

    while(n>0){
        int lastdig=n%10;
        res=res*10+lastdig;
        n=n/10;
    }
   
    cout<<"Reverse Number = "<<res;
    
}
