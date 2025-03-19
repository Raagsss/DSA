class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0;
        int cnt2=0;

        for(int i=0;i<n;i++) {
            if(nums[i]<0) {
                cnt1++;
            }
            else if(nums[i]==0) {
                continue;
            }
            else {
                cnt2++;
            }
        }

        if(cnt1>cnt2) {
            return cnt1;
        }
        return cnt2;
    }
};