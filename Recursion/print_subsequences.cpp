#include<iostream>
using namespace std;

void subsequences(string s, string output){

    if(s.empty()){
        cout<<output<<" ";
        return ;
    }
    subsequences(s.substr(1),output);
    subsequences(s.substr(1),output+s[0]);

}


int main(){

    string s;
    cin>>s;
    string output = "";
    subsequences(s,output);
    return 0;
}