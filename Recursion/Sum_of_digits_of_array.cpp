#include <iostream>

using namespace std;
int sumof(int arr[],int n){
    if(n == 0){
        return 0;
    }
    return arr[0]+sumof(arr+1,n-1);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sumof(arr,n);

    return 0;
}