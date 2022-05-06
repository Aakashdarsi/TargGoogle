#include<iostream>


using namespace std;


int number_of_ways(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    if(n == 3){
        return 4;
    }
    return number_of_ways(n-1)+number_of_ways(n-2)+number_of_ways(n-3);
}

int main(){
    int n;
    cin>>n;
    cout<<number_of_ways(n);
}