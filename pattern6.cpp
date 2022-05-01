#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=0;col<row;col++)
        {
            cout<<row+col<<" "; 
        }
        cout<<endl;

    }
}


// 5
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
// 5 6 7 8 9 