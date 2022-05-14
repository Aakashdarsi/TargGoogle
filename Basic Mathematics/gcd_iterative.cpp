#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a; // u can return a or b because that while loop breaks when a == b
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}