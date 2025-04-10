class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int i=0;
        int j=0;
        int maxLen=0;
        while(j<s.length()) {
            if(seen.find(s[j])==seen.end()) {
                seen.insert(s[j]);
                maxLen=max(maxLen,j-i+1);
                j++;
            }else {
                seen.erase(s[i]);
                i++;
            }
        }
        return maxLen;
    }
};