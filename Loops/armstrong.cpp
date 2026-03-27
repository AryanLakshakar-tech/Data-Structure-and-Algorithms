/*
An Armstrong number (or narcissistic number) is a positive 
-digit integer that equals the sum of its own digits each raised to the power of n.
for ex: 371 = 3*3*3 + 7*7*7 + 1*1*1 = 371

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    int num = n;
    int cubesum = 0;

    while (num>0){
        int lastdig = num%10;
        cubesum += lastdig*lastdig*lastdig;
        num /=10;
    }

    if(cubesum == n){
        cout << "Number is an armstrong number" << endl;
    } 
    else{
         cout << "Not an armstrong number ";
    }

    return 0;
    
}
