class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int count=0;

        for(auto it:nums) {
            int complement=k-it;
            if(mp[complement]>0) {
                count++;
                mp[complement]--;
            }else {
                mp[it]++;
            }
        }
        return count;
    }
};