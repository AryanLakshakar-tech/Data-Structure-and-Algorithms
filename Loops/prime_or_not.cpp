#include<iostream>
#include<cmath>
using namespace std;

int main(){
    bool isprime = true;
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    for(int i=2;i<=sqrt(n);i++){          //non optimized code includes i<=n-1 instead f i<=sqrt(n)
        if(n%i==0){
            isprime=false;
            break;
        }
    }

    if(isprime){
        cout<<n<<" "<<"is prime number"<<endl;
    }

    else{
        cout<<n<<" "<<"is not a prime number"<<endl;
    }
    return 0;
}
