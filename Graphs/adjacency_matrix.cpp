#include<iostream>

using namespace std;


int main(){
    int m,n;
    cin>>m>>n;
    // where m indicates number of nodes and n inddicates number of edges
    int adj[m+1][n+1];
    for(int i=0;i<=n;i++){
        int u,v;
        cin>>u>>v;
        // fill that row or column 
        adj[u][v] = 1;
        adj[v][u] = 1;
        // This is because we are thinking our graph to be undirected

    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

}