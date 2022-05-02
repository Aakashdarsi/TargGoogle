#include <iostream>
// printing numbers from n to 1 
using namespace std;
int fun(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    fun(n-1);
}
int main()
{
   int n;
   cin>>n;
   fun(n);
   return 0;
}
