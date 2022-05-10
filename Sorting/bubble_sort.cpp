// Take the larger element to end 

#include<iostream>
using namespace std;


void bubble_sort(int arr[],int n)
{
    for(int i = 0;i<n-1;i++)
    {
        
        for(int j = 0 ; j<= n-1-i;j++)
        {
            
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                
                
            }
            
            
        }
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
    bubble_sort(arr,n);
    cout<<"After sorting "<<endl;
    for(int i = 0;i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}