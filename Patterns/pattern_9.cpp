#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 1;
    for(int row=0;row<n;row++)
    {
        char start = 'A'+row;
        for(int col=0;col<n;col++)
        {
            char ch = start +col;
            cout<<ch<<" "; 
            count++;
        }
        cout<<endl;

    }
}

// 5
// A B C D E 
// B C D E F 
// C D E F G 
// D E F G H 
// E F G H I 