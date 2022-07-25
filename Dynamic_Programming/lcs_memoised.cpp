#include<iostream>
#include<vector>
using namespace std ;

int lcs(string s1,string s2,int m,int n,vector<vector<int> > &dp){
    if(m == 0 or n== 0){
        return 0;
    }
    if(dp[m][n]!= -1){
        return dp[m][n];
    }
    if(s1[m-1] == s2[n-1]){
        return dp[m][n] = 1+lcs(s1,s2,m-1,n-1,dp);
    }
    return dp[m][n] = max(lcs(s1,s2,m-1,n,dp),lcs(s1,s2,m,n-1,dp));
}



int main(){
string s1,s2;

cin>>s1>>s2;
int m = s1.length();
int n = s2.length();
vector<vector<int> > dp (m+1,vector<int>(n+1,-1));



cout<<lcs(s1,s2,m,n,dp);
for(int i=0;i<dp.size();i++){
    for(int j=0;j<dp[0].size();j++){
        cout<<dp[i][j]<<"  ";
    }
    cout<<endl;
}
return 0;
}
