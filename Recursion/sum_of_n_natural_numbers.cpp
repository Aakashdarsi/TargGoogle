#include <iostream>

using namespace std;
int sum_of_natural_no(int n){
    if(n == 0){
        return 0;
    }
    return n+sum_of_natural_no(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<sum_of_natural_no(n);

    return 0;
}
