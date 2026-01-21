class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans="";
        for(int i=0;i<k;i++) {
            char c=s[k-i-1];
            ans+=c;
        }

        for(int i=k;i<s.length();i++) {
            ans+=s[i];
        }

        return ans;
    }
};