
#include <iostream>

using namespace std;

int partition(int arr[],int low,int high)
{
    int pivot = arr[low];
    int smallCount = 0;
    for(int i = low+1 ; i<=high ;i++)
    {
        if(arr[i]<pivot)
        {
            smallCount++;
        }
    }
    int pivotIndex = smallCount + low;
    arr[low] = arr[pivotIndex];
    arr[pivotIndex] = pivot;
    int i = low;
    int j = high;
    while(i<pivotIndex && j>pivotIndex)
    {
        if(arr[i]<=pivot)
        {
            i++;
        }
        if(arr[j]>pivot)
        {
            j--;
        }
        else{
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
    
    
}

void quick_sort(int arr[],int low,int high)
{
    if(low>=high)
    {
        return ;
    }
    int p = partition(arr,low,high);
    quick_sort(arr,low,p-1);
    quick_sort(arr,p+1,high);
}


int main()
{
   int arr[1000];
    int n;
    cin>>n;
    for(int i =0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    int low = 0;
    int high = n-1;
    quick_sort(arr,low,high);
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
