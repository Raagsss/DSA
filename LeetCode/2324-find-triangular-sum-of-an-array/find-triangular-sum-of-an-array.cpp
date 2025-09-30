class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        while(n>1) {
            vector<int> newNums(n-1,0);
            for(int j=0;j<n-1;j++) {
                newNums[j]=(nums[j]+nums[j+1]) % 10;
            }
            nums=newNums;
            n--;
        }

        return nums[0];
    }
};