class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2) {
            return nums.size();
        }

        int insertPosition=2;
        for(int i=2;i<nums.size();i++) {
            if(nums[i]!=nums[insertPosition-2]) {
                nums[insertPosition]=nums[i];
                insertPosition++;
            }
        }
        return insertPosition;
    }
};