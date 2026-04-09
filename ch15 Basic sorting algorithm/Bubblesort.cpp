#include<iostream>
using namespace std;

//TC=O(n^2)   SC=O(1)

void Bubblesort(int *arr,int n){
    for(int pass=1;pass<n;pass++){
        int count=0;
        for(int idx=0;idx<n-pass;idx++){
            if(arr[idx]>arr[idx+1]){
                swap(arr[idx],arr[idx+1]);
                count++;
            }
        }
        //Optimized little bit but not as good as insertion sort in best case
        if(count==0){
            break;
        }
    }
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
    
            }
    }

int main(){
    int arr[]={23,54,12,23,14};
    int n=sizeof(arr)/sizeof(int);

    Bubblesort(arr,n);
    return 0;
}