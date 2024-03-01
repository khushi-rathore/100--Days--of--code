class Solution {
public:
    int maxValueAfterReverse(vector<int>& nums) {
        long long sum=0;

        int maxMin=INT_MIN;

        int minMax=INT_MAX;

        int maxInc=INT_MIN;

        for(int i=1;i<nums.size();i++){
            int diff=abs(nums[i-1]-nums[i]);
            sum+=diff;

            maxMin=max(maxMin,min(nums[i-1],nums[i]));
            minMax=min(minMax,max(nums[i-1],nums[i]));

            maxInc=max(maxInc,abs(nums[0]-nums[i])-diff);
            maxInc=max(maxInc,abs(nums.back()-nums[i-1])-diff);

        }

        maxInc=max(maxInc,2*(maxMin-minMax));

        return sum+maxInc;
        
    }
};