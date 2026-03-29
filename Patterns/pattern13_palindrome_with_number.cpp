/*
    1
   212
  32123
 4321234
543212345
*/
#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        //nums backward
        for(int j=i;j>=1;j--){
            cout<<j;
        }

        //nums backward
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}