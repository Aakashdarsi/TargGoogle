

                         

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    // n vertices and m edges
    cin>>n>>m; // specify number of rows and number of edges 
    vector<vector<int> >arr(n+1,vector<int>(n+1,0));// create a 2d matrix of size v*v where v is number of vertices 
    for(int i=0;i<m;i++)
    {
        // specify at what coordinates edges are present 
        int u,v;
        cin>>u>>v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
