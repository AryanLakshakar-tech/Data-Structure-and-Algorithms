//TC=O(n^2) less than brute force
#include<iostream>
#include <climits>
using namespace std;

void maxsubarraysum2(int *arr,int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        int currSum=0;
        for(int end=start;end<n;end++){
            currSum+=arr[end];
            maxsum=max(currSum,maxsum);
        }
}
cout<<"Maximum subarray sum = "<<maxsum<<endl;
}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarraysum2(arr,n);
    return 0;
}