#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int> > adj_list(m+1);
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }

}