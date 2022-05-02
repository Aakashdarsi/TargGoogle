#include <iostream>

using namespace std;
int factorial(int val){
    if(val == 0){
        return 1;
    }
    return val*factorial(val-1);
    
}
int pascals(int row,int col){
    return (factorial(row))/(factorial(row-col)*factorial(col));
}
int main()
{
    int n = 5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<pascals(i,j)<<" ";
        }
        cout<<endl;
    }
}
