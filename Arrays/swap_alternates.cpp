#include <iostream>
using namespace std;
void swap_alternates(int nums[],int size){
    if(size==1){
        
        return ;
    }
    if(size%2 == 0){
        for(int i=0;i<size;i = i+2){
        swap(nums[i],nums[i+1]);
    }
    }
    else{
        int last_ele = nums[size-1];
        for(int i=0;i<size;i = i+2){
        swap(nums[i],nums[i+1]);
    }
    nums[size-1] = last_ele;
        
    }
    
}




int main()
{
    int nums[] = {1,2,3,4,5,6,7,8,9};
    swap_alternates(nums,9);
    cout<<"\n The elements are ";
    for(int i=0;i<9;i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}