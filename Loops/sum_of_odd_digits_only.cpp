#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dig_sum = 0;

    while(n>0){
        int lastdig = n%10;
        if(lastdig%2!=0){
            dig_sum += lastdig;
        }
       n = n/10;
    }

    cout<< "Sum = " << dig_sum <<endl;
    return 0;
}
