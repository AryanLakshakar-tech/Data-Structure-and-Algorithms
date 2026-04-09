#include<iostream>
using namespace std;

//TC=O(n^2)   SC=O(1)
void Insertionsort(int *arr,int n){
    for(int pass=1;pass<n;pass++){
        for(int idx=pass;idx>0;idx--){
            if(arr[idx]<arr[idx-1]){
                swap(arr[idx],arr[idx-1]);
            }
            else break;
        }
    }
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
    
            }
    }

int main(){
    int arr[]={23,54,12,23,1};
    int n=sizeof(arr)/sizeof(int);

    Insertionsort(arr,n);
    return 0;
}