#include<iostream>
using namespace std;

int Diagonalsum(int mat[][3],int n){
    int sum=0;

    //O(n^2)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }
            else if(j==n-i-1){
                sum+=mat[i][j];
            }
        }
    }

    cout<<"Sum = "<<sum<<endl;
    return sum;
}


int Diagonalsum2(int mat[][3],int n){
    int sum=0;

    //O(n) optimized
    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        if(i!=n-i-1){
            sum+=mat[i][n-i-1];
        }
    }

    cout<<"Sum = "<<sum<<endl;
    return sum;
}

int main(){
    int n=3;
    int mat[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};

    Diagonalsum2(mat,n);
    return 0;
}