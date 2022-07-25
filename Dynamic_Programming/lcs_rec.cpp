#include<iostream>
using namespace std;


int lcs(string a,string b,int l1,int l2){
    if(l1 == 0 or l2 == 0){
        return 0;
    }
    if(a[l1-1] == b[l2-1]){
        return 1+lcs(a,b,l1-1,l2-1);
    }
    else{
        return max(lcs(a,b,l1-1,l2),lcs(a,b,l1,l2-1));
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<lcs(s1,s2,s1.length(),s2.length());
}