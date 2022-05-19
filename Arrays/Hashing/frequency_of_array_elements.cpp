#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,int> m;
    int arr[] = {50,50,10,40,10};
    int n = sizeof(arr)/(sizeof(arr[0]));
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }

return 0;
}