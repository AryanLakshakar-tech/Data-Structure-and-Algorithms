#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number whose factorial need to be found = ";
    cin>>n;

    int result = 1;
    
    for(int i=n;i>0;i--){
        result = result*i;
    }
    cout<<"Factorial of "<< n << " = "<< result << endl;

    return 0;
}
