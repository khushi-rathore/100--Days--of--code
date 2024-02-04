#include<bits/stdc++.h>
using namespace std;
void print(int *arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
}
bool binarySearch(int *arr,int key,int s, int e ){
   print(arr,s,e);
    cout<<endl;
    
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    cout<<"Value of mid is "<<arr[mid]<<" "<<endl;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        return binarySearch(arr,key,s,mid-1);
    }
    else{
        return binarySearch(arr,key,mid+1,e);
    }


}

int main(){
    int arr[6]={2,4,6,8,10,12};
    int n=6;
    int key=12;
    cout<<"Element is found or not  "<<binarySearch(arr,key,0,n-1);
    return 0;
}