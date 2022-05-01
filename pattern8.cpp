#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 1;
    for(int row=1;row<=n;row++)
    {
        for(int col=0;col<n;col++)
        {
            char ch = 'A' +col;
            cout<<ch<<" "; 
            count++;
        }
        cout<<endl;

    }
}

// 6
// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 
