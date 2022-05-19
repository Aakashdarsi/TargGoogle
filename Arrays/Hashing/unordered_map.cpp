#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

    unordered_map<string,int> m;
    m["Aakash"] = 20;
    
    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}