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
        for(int col=0;col<=row;col++)
        {
            
            cout<<start<<" "; 
            count++;
        }
        cout<<endl;

    }
}

// 5
// A 
// B B 
// C C C 
// D D D D 
// E E E E E