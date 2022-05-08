#include<iostream>
#include<algorithm> 
using namespace std;

int main()
{
    int arr[] = {20,30,40,40,40,50,100,1100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    bool present_in_array = binary_search(arr,arr+n,key); // this binary search functions checks in array whether the element is present in the sorted array or not 
    cout<<present_in_array<<endl;
    // Get the index of element where it is present 
    // lower_bound(start,end,key) => returns address of a key
    int  *it = lower_bound(arr,arr+n,40); // address of first bucket that is >=key
    cout<<(it-arr)<<"this will get the index as iterator stores the address";

    /// upper bound method 
    int *dt = upper_bound(arr,arr+n,40); // gives the first element which is strictly greater than key
    cout<<endl<<(dt-arr);
    // number of occurences = upper bound - lower bound
    cout<<endl<<dt-it;

}