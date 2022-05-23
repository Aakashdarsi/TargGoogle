#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> arr1,vector<int> arr2){

    vector<int> ans;
    int i  = 0;
    int j = 0;
    while(i<arr1.size() && j <arr2.size()){
        if(arr1[i]<arr2[j]){
            i++;
        }
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){

    vector<int> v1;
    vector<int> v2;
    for(int i = 0;i<5;i++){
        int np;
        cin>>np;
        v1.push_back(np);
    }
    for(int j = 0 ;j<5;j++){
        int np;
        cin>>np;
        v2.push_back(np);
    }
    vector<int> ans  = intersection(v1,v2);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}