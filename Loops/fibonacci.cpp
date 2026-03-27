#include<iostream>
using namespace std;

//The Fibonacci series is the sequence where each number is the sum of the previous two numbers of the sequence.
// The first two numbers of the Fibonacci series are 0 and 1 and are used to generate the Fibonacci series.
//Fibonacci series:0,1,1,2,3,5,8,13,21,34..

//The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    int p1=0,p2=1;

    if(n==0) {
        cout << p1;
    }

    else{  
        for(int i=2;i<=n;i++){
            int curr = p1+p2;
            p1=p2;
            p2=curr;
        }
    cout << p2 << endl;
    }

}
