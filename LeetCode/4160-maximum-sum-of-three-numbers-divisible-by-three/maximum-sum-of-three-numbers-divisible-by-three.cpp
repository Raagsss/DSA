class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;

        for(auto it:nums) {
            mp[it%3].push_back(it);
        }

        for(auto &it:mp) {
            sort(it.second.rbegin(),it.second.rend());
        }

        int ans=0;
        if(mp[0].size()>=3) {
            ans=max(ans,mp[0][0]+mp[0][1]+mp[0][2]);
        }

        if(mp[1].size()>=3) {
            ans=max(ans,mp[1][0]+mp[1][1]+mp[1][2]);
        }

        if(mp[2].size()>=3) {
            ans=max(ans,mp[2][0]+mp[2][1]+mp[2][2]);
        }

        if(!mp[0].empty() && !mp[1].empty() && !mp[2].empty()) {
            ans=max(ans,mp[0][0]+mp[1][0]+mp[2][0]);
        }

        return ans;
    }
};