class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;

        for(int i=0;i<nums.size();i++) {
            mp[nums[i]].push_back(i);
        }

        int ans=INT_MAX;

        for(auto it:mp) {
            auto &p=it.second;
            if(p.size()>=3) {
                for(int i=0;i+2<p.size();i++) {
                    ans=min(ans,2*(p[i+2] - p[i]));
                }   
            }
        }

        return ans==INT_MAX ? -1 : ans;


    }
};