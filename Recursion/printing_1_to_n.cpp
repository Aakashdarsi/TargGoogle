#include <iostream>
// printing numbers from 1 to n 
using namespace std;
int fun(int n){
    if(n==0){
        return 0;
    }
    fun(n-1);
    cout<<n<<" ";
    
}
int main()
{
   int n;
   cin>>n;
   fun(n);
   return 0;
}
