class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int minLen=INT_MAX;
        int sum=0;

        for(int i=0;i<n;i++) {
            sum+=nums[i];
            while(sum>=target) {
                minLen=min(minLen,i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        if(minLen==INT_MAX) {
            return 0;
        }
        return minLen;
    }
};