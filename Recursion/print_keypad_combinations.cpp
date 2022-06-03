#include<iostream>
using namespace std;

string getString(int d){
    if(d == 2){
        return "abc";
    }
     if(d == 3){
        return "def";
    }
     if(d == 4){
        return "ghi";
    }
    if(d == 5){
        return "jkl";
    }
    if(d == 6){
        return "mno";
    }
    if(d == 7){
        return "pqrs";
    }
    if(d == 8){
        return "tuv";
    }
    if(d == 9){
        return "wxyz";
    }
    return " ";

}

void keypad_combinations(int n,string output){
    if(n == 0){
        cout<<output<<" ";
        return ;
    }
    int lastdig = n%10;
    int remNum = n/10;
    // get options for the last digit
    string options = getString(lastdig);
    for(int i =0;i<options.size();i++){

        keypad_combinations(remNum,options[i]+output);
    }
}


int main(){


    int n;
    cin>>n;
    string output = "";
    keypad_combinations(n,output);
    return 0;
}