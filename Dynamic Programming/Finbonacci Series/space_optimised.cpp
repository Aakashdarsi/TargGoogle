#include<iostream>
#include<vector>
using namespace std; 

int fibonacci(int n,int prev,int prev2){

    for(int i=2;i<=n;i++){
        int curr = prev+prev2;
        prev2 = prev;
        prev = curr;
    }
    return prev;
   
}

int main(){

    int n;
    cin>>n;
    int prev = 1;
    int prev2 = 0;
    cout<<fibonacci(n,prev,prev2);
    return 0;
}