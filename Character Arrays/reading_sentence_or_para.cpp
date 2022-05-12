#include<iostream>

using namespace std;

void readmax(char arr[],int size,char delimmiter = '\n')
{
    int i = 0;
    char ch = cin.get();
    while(ch != delimmiter)
    {
        arr[i] = ch;
        i++;
        // check whether array is full
        if(i == size-1)
        {
            break; // comeout of the loop because at last index we have to store null char
        }
        ch = cin.get();
    }
    arr[i] = '\0';
    return ;
}



int main()
{
    char arr[1000];
    readmax(arr,1000,'$');
    cout<<arr;
}