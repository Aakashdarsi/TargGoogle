#include <iostream>

using namespace std;
bool palindrome(string s,int low,int high){
    if(low>=high){
        return true;
    }
    if(s[low]!=s[high]){
        return false;
    }
    return palindrome(s,low+1,high-1);
}

int main()
{
    string s;
    cin>>s;
    int low =0;
    int high = s.size()-1;
    bool res = palindrome(s,low,high);
    cout<<res;
    return 0;
}