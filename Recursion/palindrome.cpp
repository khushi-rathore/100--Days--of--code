#include<bits/stdc++.h>
using namespace std;
bool checkPlindrome(string &str,int i,int j){
    if(i>j){
        return false;
    }
    if(str[i]==str[j]){
        return true;
    }
    i++;
    j--;
    checkPlindrome(str,i,j);
}
int main(){
    string str;
    cout<<"Enter string"<<endl;
    cin>>str;
    cout<<"Palindrome or not "<<checkPlindrome(str,0,str.length()-1);

    return 0;
}