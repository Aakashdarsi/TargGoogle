#include <iostream>
#include <cmath>
using namespace std;
float geometric_sum(int l,int k,int gsum){
if(l == k){
    return gsum + (1/(pow(2,k)));

}
return (1/(pow(2,l))) + geometric_sum(l+1,k,gsum);
    
}
int main()
{
    int k;
    cin>>k;
    int l = 0;
    int gsum = 0;
    cout<<geometric_sum(l,k,gsum);
}