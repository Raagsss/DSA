class Solution {
private:
    void solve(vector<int>& nums,set<vector<int>>& ans,int index,vector<int>& output) {
        if(index>=nums.size()) {
            ans.insert(output);
            return;
        }

        int element=nums[index];
        output.push_back(element);
        solve(nums,ans,index+1,output);
        output.pop_back();
        solve(nums,ans,index+1,output);
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        int index=0;
        vector<int> output;
        sort(nums.begin(),nums.end());
        solve(nums,ans,index,output);
        vector<vector<int>> fin(ans.begin(),ans.end());
        return fin;
    }
};