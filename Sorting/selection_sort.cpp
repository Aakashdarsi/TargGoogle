#include<iostream>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        int min_index = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j; // we update index because swap is an expensive operatiom 
            }
        }
        swap(arr[i],arr[min_index]);
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
    selection_sort(arr,n);
    cout<<"After sorting "<<endl;
    for(int i = 0;i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}