#include<iostream>
using namespace std;


int MaxNumberOfRopes(int rl,int a ,int b,int c){
    cout<<"Function called for rl value "<<rl<<endl;
    if(rl == 0){
        return 0;
    }
    if(rl <0){
        return -1;
    }
    // small problem 1 we can cut the rope of size a 
    int smallPrblm1 = MaxNumberOfRopes(rl-a,a,b,c);

    // small problem 2 we can cut the rope of size b

    int smallPrblm2 = MaxNumberOfRopes(rl-b,a,b,c);

    // small problem 3 we can cut the rope of size c 

    int smallPrblm3 = MaxNumberOfRopes(rl-c,a,b,c);

    int res = max(smallPrblm1,smallPrblm2);
    res = max(smallPrblm3,res);

    if(res == -1){
        return -1;
    }
    return res+1;
}




int main(){

    int rl,a,b,c;
    cin>>rl>>a>>b>>c;
    cout<<MaxNumberOfRopes(rl,a,b,c);
    return 0;
}