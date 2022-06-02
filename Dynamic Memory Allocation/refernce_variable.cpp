#include<iostream>
using namespace std;


int main(){

    int x = 5;
    int &y = x;
    cout<<x<<" "<<y;


    // Dynamic Array
    // int n;
    // cout<<"Enter the value of n : "<<" ";
    // cin>>n;
    // int *arr = new int[n];
    // for(int i=0;i<n;i++)
    // {cin>>arr[i];}
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    // delete []arr;
    int a,b;
    cin>>a>>b;
    int **arr = new int *[a];
    for(int i = 0;i<a;i++){

        arr[i] = new int[a];
    }
    for(int i = 0 ;i<a;i++){
        for(int j = 0;j<a;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ;i<a;i++){
        for(int j = 0;j<a;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}