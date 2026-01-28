class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<char,int> mp;
        string s=to_string(n);

        for(auto it:s) {
            mp[it]++;
        }

        int minFreq=INT_MAX;
        int ans='9';

        for(auto it:mp) {
            if(it.second<minFreq || it.second==minFreq && it.first<ans) {
                minFreq=it.second;
                ans=it.first;
            }
        }

        return ans-'0';
    }
};