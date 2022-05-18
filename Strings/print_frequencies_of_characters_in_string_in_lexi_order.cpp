#include<iostream>
using namespace std;

int main(){

    string s;
    cin>>s;
    int arr[25] = {0};
    for(int i = 0;i<s.length();i++){
        int index = s[i] - 'a';
        arr[index]+=1;
    }
    for(int i = 0;i<26;i++){
        if(arr[i]>0){
            cout<<(char)(i+'a')<<" "<<arr[i]<<" ";
        }
       
        
    }
    return 0 ;

}