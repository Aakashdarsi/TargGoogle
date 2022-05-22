// 2048 - two zero four eight
#include<iostream>
using namespace std;
string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};


void printSpellings(int n){

    if(n==0){
        return ;
    }

    printSpellings(n/10);
    cout<<arr[n%10]<<" ";
}

int main(){

    int n;
    cin>>n ;
    printSpellings(n);
    return 0;
}