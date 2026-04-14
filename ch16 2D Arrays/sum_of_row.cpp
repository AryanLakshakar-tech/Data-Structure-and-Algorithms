#include<iostream>
using namespace std;

int main(){
    int nums[][3]={{1,4,9},{11,4,3},{2,2,3}};
    int sum=0;
    int n=3,m=3;

    //sum of 2nd row
    for(int j=0;j<m;j++){
        sum+=nums[1][j];
    }

    cout<<"Sum of 2nd row = "<<sum<<endl;


}