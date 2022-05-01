#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 1;
    for(int row=1;row<=n;row++)
    {
       for(int col=1;col<=n-row+1;col++)
       {
           cout<<"* ";
       }
       cout<<endl;

}
return 0;
}

// 5
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 