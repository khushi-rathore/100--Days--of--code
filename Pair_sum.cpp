#include<bits/stdc++.h>
using namespace std;
void twoSum(int arr[],int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           if( arr[i]+arr[j]==sum){
             cout<<arr[i]<<" "<<arr[j];
           }

        }
    }
}
int main(){
    int n=5;
    int sum=17;
    int arr[n]={2,4,7,8,9};
    twoSum(arr,n,sum);
}