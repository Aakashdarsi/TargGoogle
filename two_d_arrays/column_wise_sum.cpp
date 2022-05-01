#include <iostream>

using namespace std;

int main()
{
   int arr[3][4] = {{3,5,11,2},{7,9,8,0},{5,0,1,3}};
   int row = 3;
   int col = 4;
   
   for(int i=0;i<col;i++)
   {
       int sum=0;
       
       for(int j=0;j<row;j++)
       {
           sum+=arr[j][i];
       }
       cout<<sum<<" ";
   }
}
