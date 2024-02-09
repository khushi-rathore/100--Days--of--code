#include<bits/stdc++.h>
using namespace std;
int maxSubArray(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int  sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(sum,maxi);

        }
    }
    return maxi;
}
int main(){
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    int ans=maxSubArray(arr,9);
    cout<<ans;

    return 0;
}