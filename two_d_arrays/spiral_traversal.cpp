#include <iostream>

using namespace std;
void spiral_traversal(int arr[3][4],int rows,int cols)
{
    int start_row = 0;
    int end_row = rows-1;
    int start_col = 0;
    int end_col = cols-1;
    while(start_row<=end_row && start_col<=end_col)
    {
        for(int i=start_col;i<=end_col;i++)
    {
        cout<<arr[start_row][i]<<" ";
    }
    start_row++;
    for(int i=start_row;i<=end_row;i++)
    {
        cout<<arr[i][end_col]<<" ";
    }
    end_col--;
    for(int i = end_col;i>=start_col;i--)
    {
        cout<<arr[end_row][i]<<" ";
    }
    end_row--;
    for(int i=end_row;i>=start_row;i--)
    {
        cout<<arr[i][start_col]<<" ";
    }
    start_col++;
    
    }
    
}
int main()
{
   int arr[3][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,10}};
   spiral_traversal(arr,3,4);
}
