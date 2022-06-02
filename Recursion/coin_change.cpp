#include<iostream>
using namespace std;

int noOfWays(int arr[],int n,int amount,int currentCoin){
    // write base case
    if(amount == 0){
        return 1;
    }
    if(amount<0){
        return 0;
    }
    int ways = 0;
    for(int i =currentCoin ;i<n;i++){
        ways += noOfWays(arr,n,amount-arr[i],i);
    }
return ways;
}

int main(){

    int coins [] ={1,2};
    int amount = 4;
    cout<<noOfWays(coins,2,amount,0);
    return 0;
}