#include<iostream>
#include<math.h>
using namespace std;

int str_to_int(string s){

    if(s.empty()){
        return 0;
    }
    int val = s[0] - '0';
    string small = s.substr(1);
    return val*pow(10,small.length()) +str_to_int(s.substr(1));
}


int main(){
    string s;
    cin>>s;
    int res = str_to_int(s);
    cout<<res;
    return 0;
}