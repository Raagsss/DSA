class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++) {
            sum+=nums[i];
        }

        int operations=0;
        if(sum%k==0) {
            return 0;
        }

        while(sum%k!=0) {
            sum--;
            operations++;
        }

        return operations;
        
    }
};