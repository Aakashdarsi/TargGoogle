#include<iostream>
using namespace std;


int partition(int arr[],int low,int high)
{
    int stat_val = arr[low];
    int smal_val_count =0;
    for(int i=low+1;i<=high;i++)
    {
        if(arr[i]<=stat_val)
        {
            smal_val_count++;
        }
    }
    int partpos = low+smal_val_count;
    arr[low] = arr[partpos];
    arr[partpos] = stat_val;

    int i =low;
    int j = high;
    while(i<partpos && j>partpos)
    {
        if(arr[i]<=arr[partpos])
        {
            i++;
        }
        else if(arr[j]>partpos)
        {
            j--;
        }
        else{
           int temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
            i++;
            j--;
        }
    }
    return partpos;
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
    int arr[] = {5,1,4,3,9,8,7};
    int low = 0;
    int high = 6;
    quick_sort(arr,low,high);
    for(int i=0;i<=high;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}