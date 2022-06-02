#include<iostream>
using namespace std;

void generateSubsets(string s,string op,int idx){
    if(idx == s.length()){
        cout<<op<<" ";
        return ;
    }
    generateSubsets(s,op,idx+1);
    generateSubsets(s,op+s[idx],idx+1);
}



int main(){
string s;
cin>>s;
string op = "";
int idx = 0;
generateSubsets(s,op,idx);
return 0;

}