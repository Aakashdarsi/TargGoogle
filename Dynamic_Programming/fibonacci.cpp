#include<iostream>
using namespace std;
// recursive implementation
int fibo(int n){
    if(n == 0 or n== 1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    cin>>n;
    int res = fibo(n);
    cout<<res;
    return 0;
}
