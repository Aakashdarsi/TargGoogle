#include<iostream>
using namespace std;

int first_occurence(int arr[],int key,int n){
    if(n == 0){
        return -1;
    }
    if(arr[0] == key){
        return 0;
    }
    int i = first_occurence(arr+1,key,n-1);
    if(i == -1){
        return -1
    }
    else{
        return i+1;
    }
}




int main(){

    int arr[] = {1,2,3,7,4,5,6,7,10};
    int key = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<first_occurence(arr,key,n);
    return 0;
}