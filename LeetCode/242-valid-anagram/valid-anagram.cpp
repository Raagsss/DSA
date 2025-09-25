class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> a1;
        unordered_map<char,int> a2;

        for(int i=0;i<s.length();i++) {
            a1[s[i]]++;
        }

        for(int i=0;i<t.length();i++) {
            a2[t[i]]++;
        }

        return a1==a2;

    }
};