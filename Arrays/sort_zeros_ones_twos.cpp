#include <iostream>

using namespace std;

int main()
{
    int nums[] = {1,0,2,2,2,0,1,1,1};
    int zeros = 0;
    int ones = 0;
    int two = 0;
    for(int i=0;i<8;i++){
        if(nums[i] == 0){
            zeros++;
        }
        else if(nums[i] == 1){
            ones++;
        }
        else{
            two++;
        }
    }
    for(int i=0;i<zeros;i++){
        nums[i] = 0;
        
    }
    for(int i=zeros;i<zeros+ones;i++){
        nums[i] = 1;
    }
    for(int i=zeros+ones;i<zeros+ones+two;i++){
        nums[i] = 2;
    }
    for(int i=0;i<8;i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}