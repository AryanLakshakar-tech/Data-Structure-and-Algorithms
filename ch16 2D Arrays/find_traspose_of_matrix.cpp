#include<iostream>
using namespace std;

int main(){
    int row=2,column=3;
    int matrix[][column]={{2,3,7},{5,6,7}};
    
    //transpose the matrix
    int transpose[][row]={{}};

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            transpose[j][i]=matrix[i][j];
        }
    }

    //printing transpose matrix;
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            cout<<transpose[i][j]<<"  "; 
        }
        cout<<endl;
    }
}