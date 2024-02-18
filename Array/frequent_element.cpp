class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> frequency;
        for(int i=0;i<n;i++){
            frequency[nums[i]]++;
        }

        vector<pair<int,int>> store;
        for(auto& pair1 : frequency){
            store.push_back(pair1);
        }
        sort(store.begin(),store.end(),[](const auto& a,const auto& b){
            return a.second>b.second;
        });
        
        vector<int>res;
        for(int i=0;i<k && i<store.size();i++){
            res.push_back(store[i].first);
        }
        return res;
    }
};