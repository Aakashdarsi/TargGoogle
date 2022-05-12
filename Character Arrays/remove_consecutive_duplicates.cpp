#include<iostream>
using namespace std;

void remove_duplicates(char arr[])
{
    int n = strlen(arr);
    if(n == 0 or n== 1)
    {
        return ;
    }
    else
    {
        int i = 0;
        for(int j = 1;j<n;j++)
        {
            if(arr[i] != arr[j])
            {
                i++;
                arr[i] = arr[j];
            }
            
        }
        arr[i+1] = '\0';
    }
}



int main()
{
    char arr[1000];
    cin.getline(arr,1000);
    remove_duplicates(arr);
    cout<<arr;
    return 0;
}