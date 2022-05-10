#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{


    for(int i=1;i<n;i++)
    {
        int ele = arr[i];
        // place the correct element in right position of sorted array
        int j = i-1;
        while(j>=0 and arr[j] > ele)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = ele;

    }

}







int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    cout<<"After sorting "<<endl;
    for(int i = 0;i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}