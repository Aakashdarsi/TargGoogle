#include<iostream>
#include<cmath>
using namespace std;
// check only odd numbers

bool check_prime(int n)
{
    if(n == 1)
    {
        return false;
    }
    if(n == 2)
    {
        return true;
    }
    int count  = 0;
    
    for(int i =3;i<=n;i+=2)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    if(count == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    cout<<check_prime(n);
    return 0;
}