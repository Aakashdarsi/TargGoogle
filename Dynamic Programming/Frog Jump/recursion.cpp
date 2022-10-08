// https://www.codingninjas.com/codestudio/problems/frog-jump_3621012?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos

#include<iostream>
#include<vector>
using namespace std;

int solve(int n,vector<int>& energies){
    if(n == 0){
        return 0 ;
    }
   
    int jump_one_energy = abs(energies[n] - energies[n-1]) + solve(n-1,energies);
    int jump_two = INT_MAX;
    if(n>1){
        jump_two = abs(energies[n]-energies[n-2])+solve(n-2,energies);
    }
    return min(jump_one_energy,jump_two);

}


int main(){
int n;
cin>>n;
vector<int> list;
for(int i =0;i<n;i++){
    int new_val;
    cin>>new_val;
    list.push_back(new_val);
    
}
cout<<solve(n-1,list);
return 0;


}