// https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1


#include<iostream>
using namespace std;

int number_of_ways(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    int jump_one_ways = number_of_ways(n-1);
    int jump_two_ways = number_of_ways(n-2);
    return jump_one_ways+jump_two_ways;
}


int main(){

    int n;
    cin>>n;
    cout<<number_of_ways(n);
    return 0;
}