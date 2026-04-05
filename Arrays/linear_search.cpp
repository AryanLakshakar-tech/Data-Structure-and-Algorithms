#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int main(){
    int arr[]={2,65,87,45,54,33,10};
    int n = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr,n,65)<<endl;
    return 0;
}