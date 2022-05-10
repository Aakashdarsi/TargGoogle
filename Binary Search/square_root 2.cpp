#include<iostream>
using namespace std;


float square_root(int n,int p)
{
    int low = 0;
    int high = n;
    int ans = -1;
    while (low<=high)
    {
        /* code */
        int mid = low + (high-low)/2;
        if(mid*mid <= n)
        {
            ans = mid;
            low = mid+1;
        }
        else if(mid*mid > n)
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
   
   
    float decimal = 0.1;
       
    for(int i =1;i<=p;i++)
    {
        while(ans*ans<=n)
        {
            ans  = ans +om
        }
        ans -= decimal;
        decimal /= 10;
    }
    return ans;

    
    
    
}


int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    cout<<square_root(n,p);
    return 0;
}