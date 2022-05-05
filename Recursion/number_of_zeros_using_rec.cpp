#include <iostream>

using namespace std;
int no_of_zeros(int n,int count){
    if(n == 0){
        return count;
    }
    int last_dig = n%10;
    if(last_dig == 0){
        count++;
    }
    return no_of_zeros(n/10,count);
}
int main()
{
    int n = 103200;
    int count = 0;
    cout<<no_of_zeros(n,count);
    return 0;
}
