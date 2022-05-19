#include<iostream>
using namespace std;

void imporved_naive_pattern_search(string s, string p){
    int m = p.length();
    int n = s.length();
    for(int i = 0;i<=(n-m);){
        int j;
        for(j = 0 ;j<m;j++){
            if(p[j] != s[i+j]){
                break;
            }
        }
        if(j == m){
            cout<<i<<" ";
        }
        if(j == 0){
            i++;
        }
        else{
            i+= j;
        }
    }

}

int main(){
    string s,p;
    cin>>s>>p;
    imporved_naive_pattern_search(s,p);
    return 0;
}