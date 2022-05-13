#include<iostream>
#include<math.h>
using namespace std;

int count_dig(int no){
    if(no == 0){
        return 0;

    }
    return 1+count_dig(no/10);
}

int main(){


    // Approach 1
    int n;
    cin >> n;
    int count = 0 ;
    while(n!=0){
        count++;
        n /=10;
    }
    cout<<"using iterative approach"<<count<<endl;
    // Approach 2 using recursion
    int ab ;
    cin>>ab;
    int no_of_digits = count_dig(ab);
    cout<<"Using recursive approach : "<<no_of_digits;

    // Approach 3 using log10 
    cout<<endl<<int(log10(ab))+1;
}