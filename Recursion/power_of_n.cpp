#include <iostream>

using namespace std;
int power(int base,int ex){
    if(ex == 0){
        return 1;
    }
    return base*power(base,ex-1);
}
int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    int res = power(n,p);
    cout<<res;
}
