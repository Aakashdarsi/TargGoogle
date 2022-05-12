#include<iostream>
using namespace std;



int main()
{
    char curr[1000];
    char largest[1000];
    int n;
    int length = 0,largest_lenght = 0;
    cin>>n;
    cin.get(); // as we are using getline() when we are entering number with\n it is taking \n as one of its input to avoid it we are using it
    for(int i =0 ;i<n;i++){
        cin.getline(curr,100);
        int n = strlen(curr);
        length = strlen(curr);
        if(length>largest_lenght){
            largest_lenght = length;
            strcpy(largest,curr); // copies character destination from character array source
        }
    }
    cout<<largest<<" "<<largest_lenght;
    return 0;
}