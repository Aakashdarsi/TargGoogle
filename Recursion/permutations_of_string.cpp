#include<iostream>
using namespace std;

void permutations(string s,int i =0){

    cout<<"Recursion called for string "<<s<<endl;

    if(i == s.length()-1){
        cout<<s<<endl;
        return ;
    }
    for(int j = i;j<s.length();j++){
        swap(s[j],s[i]);
        permutations(s,i+1);
        swap(s[i],s[j]);
    }
}






int main(){

    string s;
    cin>>s;
    permutations(s,0);
    return 0;
}