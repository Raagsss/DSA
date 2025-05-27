class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=-1;
        int last=-1;
        int s=0;
        int e=n-1;
        //first
        while(s<=e) {
            int mid=s+(e-s)/2;
            if(target==nums[mid]) {
                first=mid;
                e=mid-1;
            }
            else if(target<nums[mid]) {
                e=mid-1;
            }else {
                s=mid+1;
            }

        }
        //last
        s=0;
        e=n-1;
        while(s<=e) {
            int mid=s+(e-s)/2;
            if(target==nums[mid]) {
                last=mid;
                s=mid+1;
            }
            else if(target<nums[mid]) {
                e=mid-1;
            }else {
                s=mid+1;
            }

        }


        return {first,last};
    }
};