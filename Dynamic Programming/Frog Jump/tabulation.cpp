#include <iostream>
#include <vector>
using namespace std;
int solve(int n,vector<int> &heights,vector<int> &dp){
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        int jump_one = abs(heights[i] - heights[i-1])+ dp[i-1];
        int jump_two = INT_MAX;
        if(i>1){
            jump_two = abs(heights[i] - heights[i-2]) + dp[i-2];
        }
        dp[i] = min(jump_one,jump_two);
    }
    return dp[n];
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int>dp(n,-1);
    return solve(n-1,heights,dp);
}