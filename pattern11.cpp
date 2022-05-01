#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 1;
    for(int row=1;row<=n;row++)
    {
        for(int spaces=0;spaces<n-row;spaces++)
        {
            cout<< " ";
        }
        for(int stars =0 ;stars<row;stars++)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
}

// 5
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 