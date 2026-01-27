class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int> mp;

        for(auto &it:s) {
            mp[it]++;
        }

        unordered_map<int, vector<char>> groups;
        for(auto &it:mp) {
            groups[it.second].push_back(it.first);
        }

        int bestFreq=-1;
        int bestGroup=0;

        for(auto &it:groups) {
            int frequency=it.first;
            int groupSize=it.second.size();

            if(groupSize>bestGroup || groupSize==bestGroup && frequency>bestFreq) {
                bestGroup=groupSize;
                bestFreq=frequency;
            }
        }

        string ans;
        for(auto &it:groups[bestFreq]) {
            ans+=it;
        }

        return ans;
    }
};