#include<iostream>
using namespace std;

int subs(string s,string output[])
{
    if(s.empty())
    {
        output[0] = "";
        return 1;

    }

    string recPart =  s.substr(1);
    int number_of_subs = subs(recPart,output);
    for(int i=0;i<number_of_subs;i++)
    {
        output[i+number_of_subs] = s[0] + output[i];
    }
    return 2*number_of_subs;
}




int main()
{
    string s;
    cin>>s;
    
    string output[1000];
    int c = subs(s,output);
    for(int i=0;i<c;i++)
    {
        cout<<output[i]<<endl;
    }
}