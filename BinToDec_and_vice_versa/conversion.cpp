// Conversion Binary To Decimal and vice versa

#include<iostream>
using namespace std;

void binTodec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1;

    while(n>0){
        int lastdig = n%10;
        decNum += lastdig*pow;
        pow = pow*2;
        n = n/10;
    }
    cout<<"Decimal of "<< binNum<< " = "<< decNum <<endl;

}

void decTobin (int decNum){
    int n = decNum;
    int binNum = 0;
    int pow = 1;

    while(n>0){
        int rem = n%2;
        binNum += rem*pow;
        pow = pow*10;
        n = n/2;
    }
     cout<<"Binary of "<< decNum<< " = "<< binNum <<endl;

}

int main(){
    binTodec(101);
    decTobin(5);

    return 0;
}
