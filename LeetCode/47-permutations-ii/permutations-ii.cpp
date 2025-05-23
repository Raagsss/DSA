class Solution {
private:
    void solve(vector<int>& nums,set<vector<int>>& ans,int index) {
        if(index>=nums.size()) {
            ans.insert(nums);
            return;
        }

        for(int i=index;i<nums.size();i++) {
            swap(nums[i],nums[index]);
            solve(nums,ans,index+1);
            swap(nums[i],nums[index]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        int index=0;
        solve(nums,ans,index);
        vector<vector<int>> fin(ans.begin(),ans.end());
        return fin;
    }
};