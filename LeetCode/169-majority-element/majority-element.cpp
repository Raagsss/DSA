class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
        } 

        int maxi=0;
        int majority=nums[0];

        for(auto it:mp) {
            if(it.second>maxi) {
                maxi=it.second;
                majority=it.first;
            }
        }

        return majority;
    }
};