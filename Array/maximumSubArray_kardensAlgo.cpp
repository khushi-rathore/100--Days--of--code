#include<bits/stdc++.h>
using namespace std;
int maximumSubArray(int arr[],int n){
    int maxi=INT_MIN;
    int sum=0;
    int ansStart=-1;
    int ansEnd=-1;
    int start=0;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
            sum+=arr[i];
            if(sum>maxi){
                maxi=sum;
                ansStart=start;
                ansEnd=i;
            }
            if(sum<0){
                sum=0;
            }
    }
    cout<<"Maximum Sub array[";
    for(int i=ansStart;i<=ansEnd;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    return maxi;
}

int main(){
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    int ans=maximumSubArray(arr,9);
    cout<<ans;

    return 0;
}