#include<iostream>
using namespace std;
int main(){
    int a[] = {-2,-3,4,-1,-2,1,5,-3};
    int max_sum = INT_MIN;
    for(int i=0;i<8;i++){
        int sf =0 ;
        for(int j=i;j<8;j++){
            sf = sf+ a[j];
            max_sum = max(max_sum,sf);
        }
    }
    cout<<max_sum;
    return 0;
}