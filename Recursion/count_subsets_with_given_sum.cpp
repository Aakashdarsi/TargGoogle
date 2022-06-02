#include<iostream>
using namespace std;
// time complexity is O(2^n)


int CountSubsets(int arr[],int n,int key){

    if(n == 0){
        return (key == 0)?1:0;
    }
    return CountSubsets(arr,n-1,key)+CountSubsets(arr,n-1,key-arr[n-1]);
}



int main(){
    int n;
    cin>> n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<CountSubsets(arr,n,k);
}