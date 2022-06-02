#include<iostream>
using namespace std;

int sumofNNumbers(int n){
    if(n == 0){
        return ;
    }
    return n+sumofNNumbers(n-1);
}