#include<iostream>
using namespace std;

int reverse(int n){
    int res=0;
    while(n>0){
        int lastdig=n%10;
        res = res*10 + lastdig;
        n=n/10;
    }
    return res;
}

bool ispalindrome(int num){
    int revNum = reverse(num);
    return num==revNum;
}

int main(){
    int num=121;
    cout<<ispalindrome(num);

}
