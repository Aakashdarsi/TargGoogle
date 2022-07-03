#include<iostream>
#include<stack>
using namespace std;

bool match(char top, char open){
    return (top == '(' and open == ')') or (top == '[' and open ==']') or (top=='{' and open == '}');
}

bool balanced_paranthesis(string s){
    stack<int> a;
    for(int i =0;i<s.length();i++){
        if(s[i]=='(' or s[i]=='[' or s[i] == '{'){
            a.push(s[i]);
        }
        else{
            if(a.empty()){
                return false;
            }
            else{
                if(match(a.top(),s[i]) == false){
                    return false;
                }
                else{
                    a.pop();
                }
            }
        }
    }
    return a.empty();
}

int main(){
    string s;
    cin>>s;
    cout<<balanced_paranthesis(s);
}