#include<iostream>
using namespace std;

bool isPalindrome(string s){
    if(s.length() == 0 or s.length() == 1){
        return true;
    }
    if(s[0] == s[s.length()-1]){
        return isPalindrome(s.substr(1,s.length()-2));
    }
    return false;
}

int main(){

    string s;
    cin>>s;
    cout<<isPalindrome(s);
    return  0;
}