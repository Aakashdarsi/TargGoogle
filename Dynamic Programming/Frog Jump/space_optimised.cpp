#include <iostream>
#include <vector>
using namespace std;
int solve(int n,vector<int> &heights){
    int prev = 0;
    int prev2 = 0;
    for(int i=1;i<=n;i++){
        int jump_one = abs(heights[i] - heights[i-1])+ prev;
        int jump_two = INT_MAX;
        if(i>1){
            jump_two = abs(heights[i] - heights[i-2]) + prev2;
        }
        int curr = min(jump_one,jump_two);
        prev2 = prev;
        prev = curr;
    }
    return prev;
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.

    return solve(n-1,heights);
}