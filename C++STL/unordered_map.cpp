#include <iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["GFG"] = 0;
    m["test"] = 1;
    for(auto x : m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}
