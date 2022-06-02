#include<iostream>
using namespace std;


string binaryString(int decimal,string result){

    if(decimal == 0){
        return result;
    }
    
    result = to_string(decimal%2)+ result;
    return binaryString(decimal/2,result);
}

int main(){

    int n;
    cin>>n;
    string s = "";
    cout<<binaryString(n,s);
    return 0;
}