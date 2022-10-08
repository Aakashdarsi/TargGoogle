// https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1


#include<iostream>
#include<vector>
using namespace std;

int number_of_ways(int n,vector<int> &dp){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    if(dp[n]!= -1){
        return dp[n];
    }
    int jump_one_ways = number_of_ways(n-1,dp);
    int jump_two_ways = number_of_ways(n-2,dp);
    return dp[n] = jump_one_ways+jump_two_ways;
}


int main(){

    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<number_of_ways(n,dp);
    return 0;
}