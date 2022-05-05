#include<iostream>
using namespace std;

void merge(int arr[],int low,int high)
{
    int temp[high-low+1];
    int mid = (low+high)/2;
    int i = low;
    int j = mid+1;
    int c = 0;
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            temp[c] = arr[i];
            c++;
            i++;
        }
        else{
            temp[c] = arr[j];
            c++;
            j++;
        }
    }
    while(i<=mid)
    {
        temp[c] = arr[i];
        i++;
        c++;
    }
    while(j<=high)
    {
        temp[c++] = arr[j++];
    }
    int d = 0;
    for(int j = low;j<=high;j++)
    {
        arr[j] = temp[d];
        d++;
    }
}




void merge_sort(int arr[],int low,int high)
{
    if(low>=high)
    {
        return ;
    }
    int mid = (low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,high);
}

int main()
{
    int arr[] = {6,5,4,3,2,1};
    int low = 0;
    int high = 5;
    merge_sort(arr,low,high);
    for(int i=0;i<=high;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    return 0;
}