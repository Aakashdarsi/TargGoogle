#include<iostream>
using namespace std;

int knapsack(int v[],int wt[],int bag_wt,int m){

    // if the bagwt = 0 the value it can provide is zero 
    // if the no_of_items are zero but bag_wt is not zero so value it can provide is zero 
   if(bag_wt == 0 or m == 0){
    return 0;
   }
    // we can add an item into bag only when the item weight is less than or equal_to bag weight 
    //  we are considering m for value array
    // we are considering n for wt[] array 
    if(wt[m-1]>bag_wt){
        return knapsack(v,wt,bag_wt,m-1);

    }
    else{
        return max(knapsack(v,wt,bag_wt,m-1),v[m-1]+knapsack(v,wt,bag_wt-wt[m-1],m-1));
    }
}



int main(){
    int v[] = {10,40,30,50};
    int wt[] = {5,4,6,3};
    int bag_wt = 10;
    cout<<knapsack(v,wt,bag_wt,4);
}