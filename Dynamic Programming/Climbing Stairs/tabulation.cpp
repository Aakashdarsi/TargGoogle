// https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1


#include<iostream>
#include<vector>
using namespace std;




int main(){

    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<dp[n]<<" Distinct ways are available";
    return 0; 
}