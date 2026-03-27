#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number till you need to print all prime numbers from 2 to n = ";
    cin>>n;

    for(int i=2; i<=n; i++){
        int curr = i;
        bool isprime = true;
        for(int j=2;j<=sqrt(i);j++){
            if(curr % j == 0){
                isprime = false;
            }
        }

        if(isprime){
            cout << curr << endl;
        }
    }

}
