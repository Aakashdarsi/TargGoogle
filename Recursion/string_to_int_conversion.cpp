#include <iostream>
#include<math.h>
using namespace std;
int string_to_int(string s){
    if(s == ""){
        return 0;
    }
    string rem = s.substr(1);
    return (int(s[0])-48)*pow(10,rem.size())+string_to_int(rem);
}

int main()
{
    string s;
    cin>>s;
    int val = string_to_int(s);
    cout<<sizeof(val);
}
