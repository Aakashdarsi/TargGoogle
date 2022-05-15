#include<iostream>
using namespace std;

bool find_subarray_with_sum(int arr[],int sum,int n){
    int curr_sum = arr[0];
    int start = 0;
    for(int e = 1; e<n;e++){
        if(curr_sum<sum){
            curr_sum+= arr[e];
        }
        if(curr_sum == sum){
            return true;
        }
        while(curr_sum>sum and start<e-1){
            curr_sum -= arr[start];
            start++;
        }
    }
    return false;
}



int main(){
    int arr[] = {1,4,20,3,10,5};
    int sum;
    cin>>sum;
    int n = 6;
    cout<<find_subarray_with_sum(arr,sum,6);
    return 0;
}