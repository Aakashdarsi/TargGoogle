#include<iostream>
#include<unordered_set>
using namespace std;


int main(){

    unordered_set<int> u;
    u.insert(1);
    u.insert(2);
    for(int x : u){
        cout<<x<<" ";
    }
    cout<<u.size();
    u.erase(u.begin(),u.end());
    cout<<endl<<u.size();



}