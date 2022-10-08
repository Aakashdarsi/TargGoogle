// https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1


#include<iostream>
#include<vector>
using namespace std;




int main(){

    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    int prev = 1;
    int prev2 = 1;
    for(int i=2;i<=n;i++){
        int curr = prev+prev2;
        prev2 = prev;
        prev = curr;
    }
    cout<<prev<<" Distinct ways are available";
    return 0; 
}