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
        for(int stars =1 ;stars<=row;stars++)
        {
            cout<<stars;
        }
        cout<<endl;

    }
}

// 5
//     1
//    12
//   123
//  1234
// 12345