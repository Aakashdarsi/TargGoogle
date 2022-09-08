#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int> > adjl(n+1,vector<int>(n+1,-1));
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        if(u == v){
            adjl[u].push_back(v);
        }
        else{
            adjl[u].push_back(v);
        adjl[v].push_back(u);
        }
        
    }
    for(int i=1;i<=n;i++){
        cout<<i<<": ";
        for(int j=1;j<adjl[i].size();j++){
           if(adjl[i][j]!=-1){
               cout<<adjl[i][j]<<" ";
           }
        }
        cout<<endl;
    }
}
