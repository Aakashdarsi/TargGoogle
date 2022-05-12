#include<iostream>
using namespace std;

bool isPalindrome(char arr[])
{
int i =0;
int j = strlen(arr) - 1; // used to get string length 
while(i<=j)
{
if(arr[i] == arr[j])
{
    i++;
    j--;
}
else
{
    return false;
}
}
return true;

}

int main()
{
    char arr[1000];
    cin.getline(arr,1000);

    if(isPalindrome(arr))
    {
        cout<<"Palindome"<<endl;
    }
    else{
        cout<<"Not a palindrome";
    }


}