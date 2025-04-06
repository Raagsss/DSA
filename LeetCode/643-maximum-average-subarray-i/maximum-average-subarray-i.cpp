class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++) {
            sum+=nums[i];
        }

        int maxSum=sum;
        int i=0;
        int j=k;

        while(j<nums.size()) {

            sum-=nums[i];
            i++;

            sum+=nums[j];
            j++;

            maxSum=max(maxSum,sum);

        }

        return (double)maxSum/k;
    }
};