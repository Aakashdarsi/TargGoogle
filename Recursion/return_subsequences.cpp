#include<iostream>
using namespace std;


int subsequences(string input,string output[]){

if(input.empty()){
output[0] = "";
return 1;
}
string smallstring = input.substr(1);
int smallOutput = subsequences(smallstring,output);
for(int i =0;i<smallOutput;i++){
    output[i+smallOutput] = input[0]+output[i];
}
return 2*smallOutput;
}


int main(){

string input;
cin>>input;
string *output = new string[1000];
int res = subsequences(input,output);
for(int i=0;i<res;i++){
    cout<<output[i]<<" ";
}
return 0;

}

