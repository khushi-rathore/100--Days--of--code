#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&nums,int index,vector<int>output,vector<vector<int>>&ans){
    // base condition
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    // exclude
    solve(nums,index+1,output,ans);
    // include
    int element=nums[index];
    output.push_back(element);
    solve(nums,index+1,output,ans);
}
vector<vector<int>> subset(vector<int>&nums){
    vector<vector<int>>ans;
    vector<int>output;
    int index=0;
    solve(nums,index,output,ans);
    return ans;
}
int main(){
    vector<int>nums;
    int n;
    cin>>n;
    cout<<"enter vector";
   for(int i=0;i<n;i++){
       int element;
       cin >>element;
       nums.push_back(element);
    }
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
    vector<vector<int>> subsets = subset(nums);

    cout << "\nSubsets of the vector:\n";
    for (const vector<int>& subset : subsets) {
        cout << "[ ";
        for (int element : subset) {
            cout << element << " ";
        }
        cout << "]\n";
    }

  
    return 0;
}