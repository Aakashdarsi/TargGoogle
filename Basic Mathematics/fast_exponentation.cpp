#include<iostream>
using namespace std;

int fe(int a,int b){
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    int smallProblem = fe(a,b/2);
    if((b&1) == 0){
        return smallProblem*smallProblem;
    }
    else{
        return smallProblem*a*smallProblem;
    }
}




int main(){
    int a,b;
    cin>>a>>b;
    cout<<fe(a,b);
    return 0;
}