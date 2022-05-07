#include<iostream>

#include<math.h>
using namespace std;


int rope_cut(int rope_len,int a,int b,int c)
{
    if(rope_len == 0)
    {
        return 0;
    }
    if(rope_len < 0)
    {
        return -1;
    }
    int res = max(rope_cut(rope_len-a,a,b,c),rope_cut(rope_len-b,a,b,c));
    res = max(res,rope_cut(rope_len-c,a,b,c));
    if(res == -1)
    {
        return -1;
    }
    return 1+res;
}



int main()
{
    int rope_len;
    int a,b,c;
    cin>>rope_len>>a>>b>>c;
    cout<<rope_cut(rope_len,a,b,c);
    return 0;
}