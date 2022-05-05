#include <iostream>

using namespace std;
int no_of_digits(int n){
    if(n==0){
        return 0;
    }
    return 1+no_of_digits(n/10);
}
int main()
{
    int n;
    cin>>n;
    int res = no_of_digits(n);
    cout<<res;
}
