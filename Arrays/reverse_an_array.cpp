//reverse an array without extra space
//TC=O(n)   SC=O(1)
#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,9};
    int n=sizeof(arr)/sizeof(int);
    int start=0,end=n-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printArr(arr,n);
    return 0;

}