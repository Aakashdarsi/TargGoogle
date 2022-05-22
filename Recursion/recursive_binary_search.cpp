#include<iostream>
using namespace std;

bool binary_search(int arr[],int n,int key,int low,int high){
    if(low>high){
        return false;
    }
    else{
        int m = low + (high-low)/2;
        if(arr[m] == key){
            return true;
        }
        else if(arr[m]>key){
            binary_search(arr,n,key,low,high-1);
        }
        else{
            binary_search(arr,n,key,low+1,high);
        }
    }
    return false;
}