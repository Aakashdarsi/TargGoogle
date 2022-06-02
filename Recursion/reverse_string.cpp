#include<iostream>
using namespace std;

string reverse_string(string s){
    if(s == "" ){
        return "";
    }
    return reverse_string(s.substr(1))+s[0];
}




int main(){
    string str;
    cin>>str;
    cout<<reverse_string(str);
    return 0;
}