# include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        for(int col = row-1;col>0;col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;

    }
}

// 1 
// 1 2 1 q
// 1 2 3 2 1 
// 1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1