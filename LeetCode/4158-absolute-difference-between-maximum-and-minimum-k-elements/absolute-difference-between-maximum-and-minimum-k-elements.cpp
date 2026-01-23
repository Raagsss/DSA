class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxSum=0;
        int minSum=0;

        for(int i=0;i<k;i++) {
            minSum+=nums[i];
        }

        for(int i=nums.size()-k;i<nums.size();i++) {
            maxSum+=nums[i];
        }

        return maxSum-minSum;

    }
};