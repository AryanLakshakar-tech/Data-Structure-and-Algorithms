#include<iostream>
using namespace std;

int main(){
    int arr[] ={2873,34,32,123,422};
    int n = sizeof(arr)/sizeof(int);

    int max = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest element in the array = "<<max<<endl;

    return 0;
}