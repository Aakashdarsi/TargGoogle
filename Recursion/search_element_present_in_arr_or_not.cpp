#include <iostream>

using namespace std;
bool search(int arr[],int n,int key){
    if(n == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    return search(arr+1,n-1,key);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    cout<<search(arr,n,key);

    return 0;
}