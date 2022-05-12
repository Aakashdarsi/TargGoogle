#include<iostream>
using namespace std;



int main()
{
    char arr[] = {'a','b','c','d','e','\0'}; // When we are intitalising like this terminate with null character

    cout<<arr;
    // we can take input from cin for character arrays
    char s[10];
    cin>>s;
    cout<<s; // here it is automatically null character is added to the string
    // another way of initailisation
    char g[] = "Hello world";
    cout<<endl<<g;
}