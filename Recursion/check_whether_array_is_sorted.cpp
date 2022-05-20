#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    if(n == 0 or n == 1){
        return true;
    }
    if(arr[0]<arr[1] and isSorted(arr,n-1)){
        return true;
    }
    return false;
}



int main(){


    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    cout<<isSorted(arr,n);
    return 0;
}