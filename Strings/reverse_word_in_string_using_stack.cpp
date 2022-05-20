#include<iostream>
#include<stack>
using namespace std;

void reverse(string s){

    stack<string> a;
    string temp = "";
    for(int i = 0;i<s.length();i++){

        if(s[i] == ' '){
            a.push(temp);
            temp = " ";
        }
        else{
            temp+=s[i];
        }
    }
    a.push(temp);
    while(!a.empty()){
        temp = a.top();
        cout<<temp<<" ";
        a.pop();

    }
    cout<<endl;
}


int main(){
    string s = "I love to code";
    reverse(s);
    return 0;
}