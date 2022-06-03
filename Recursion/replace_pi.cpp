#include<iostream>
using namespace std;

string replace_pi(string s){
    if(s.length() == 0 or s.length() == 1 ){
        return s;

    }
    if(s[0] == 'p' and s[1] == 'i'){
        return "3.14"+replace_pi(s.substr(2));
    }
    else{
        string smalPrblm = replace_pi(s.substr(1));
        return s[0]+smalPrblm;
    }
}



int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
    cin>>s;
    cout<<replace_pi(s)<<endl;
    }
    
    return 0;
}