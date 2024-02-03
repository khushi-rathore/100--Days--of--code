#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum(vector<int>& arr){
    int target = 0;
        sort(arr.begin(), arr.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        for (int i = 0; i < arr.size(); i++){
            int j = i + 1;
            int k = arr.size() - 1;
            while (j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum == target) {
                    s.insert({arr[i], arr[j],arr[k]});
                    j++;
                    k--;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        for(auto triplets : s)
            output.push_back(triplets);
        return output;
    }

int main(){
    vector <int>arr;
    cout<<"Enter size "<<endl;
    int n;
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        int elements;
        cin>>elements;
        arr.push_back(elements);
    }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    vector<vector<int>> result = threesum(arr);

    cout << "Triplets with sum 0: ";
    for (auto triplets : result) {
        for (int element : triplets) {
            cout << element << " ";
        }
        cout << " | ";
    }

    return 0;
}