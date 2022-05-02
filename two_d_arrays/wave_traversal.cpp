#include <iostream>

using namespace std;

void wave_traversal(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        if(i%2 ==0){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=col-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

int main()
{
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int row = 4;
    int col = 4;
    wave_traversal(arr,row,col);

    return 0;
}
