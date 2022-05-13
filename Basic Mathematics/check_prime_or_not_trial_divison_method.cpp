#include<iostream>
#include<cmath>
using namespace std;
// prime number is a number who has only 2 factors 1 and itself
// just we need to check upto sqrt of that number 

bool check_prime(int n)
{
    int count  = 0;
    int range = sqrt(n);
    for(int i =2;i<=range;i++)
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