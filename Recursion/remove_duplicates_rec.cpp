#include<iostream>


using namespace std;

void remove_duplicates(char s[])
{
    if(s[0] == '\0')
    {
        return ;

    }
    if(s[0] == s[1])
    {
        int i = 1;
        for(;s[i]!=0;i++)
        {
            s[i-1] = s[i];
        }
        s[i-1] = s[i];
        remove_duplicates(s);


    }
    remove_duplicates(s+1);
}


int main()
{
    char s[] = {'a','a','b','b','c'};
    remove_duplicates(s);
    cout<<s;
    return 0;
}