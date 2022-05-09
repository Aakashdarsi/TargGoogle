// in a binary search problem think of the search space
// binary search is applied on montonic regions -> either increasing or decreasing search space

#include<iostream>
using namespace std;


float square_root(int n,int p){
    int low = 0;
    int high = n;
    float ans = -1;
    while(low<high){
        int mid = (low+high)>>1;
        if(mid * mid == n){
            ans = mid;
            return ans;
        }
        else if(mid * mid < n){
            ans = mid;
            low = mid +1;
        }
        else{
            high = mid - 1;
        }
    }
    float increment = 0.1;
    for(int i=0;i<p;i++){
        while(ans*ans <=n){
            ans += increment;
        }
        ans -= increment;
        increment = increment/10;
    }
    return ans;
}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<square_root(n,p);
    return 0;
}