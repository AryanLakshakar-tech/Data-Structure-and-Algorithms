#include<iostream>
using namespace std;

int sum_of_digit(int n){
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    return sum;
}

int main(){
    int n=1234;
    cout<<sum_of_digit(n);
}