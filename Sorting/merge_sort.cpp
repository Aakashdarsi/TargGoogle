#include<iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int temp[high-low+1];
    int i = low;
    int j = mid+1;
    int c = 0;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp[c++] = arr[i++];
        }
        else{
            temp[c++] = arr[j++];
        }
    }
    while(i<=mid){
        temp[c++] = arr[i++];
    }
    while(j<=high){
        temp[c++] = arr[j++];
    }
    c = 0;
    for(int i = low;i<(high-low+1);i++){
        arr[i] = temp[c];
        c++;
    }
}


void merge_sort(int arr[],int n,int low,int high){
    if(low>=high){
        return ;
    }
    int mid = (low+high)/2;
    merge_sort(arr,n,low,mid);
    merge_sort(arr,n,mid+1,high);
    merge(arr,low,mid,high);
}


int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;
    merge_sort(arr,n,low,high);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}