class Solution {
private:
    void solve(vector<int>& nums,vector<vector<int>>& ans,int index) {
        if(index>=nums.size()) {  //base case
            ans.push_back(nums);
            return;
        }

        for(int i=index;i<nums.size();i++) {
            swap(nums[index],nums[i]);  //one case
            solve(nums,ans,index+1); // rest case recursion
            swap(nums[index],nums[i]);  //backtrack
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(nums,ans,index);
        return ans;
    }
};