class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>=10) {
                int a=nums[i];
                int sum=0;
                while(a>0) {
                    sum+=a%10;
                    a/=10;
                }
                if(sum==i) {
                    return i;
                }
            }else {
                if(nums[i]==i) {
                    return i;
                }
            }
        }
        return -1;
    }
};