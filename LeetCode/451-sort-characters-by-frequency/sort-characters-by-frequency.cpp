class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        for(int i=0;i<s.length();i++) {
            map[s[i]]++;
        }

        vector<pair<char,int>> vec(map.begin(),map.end());
        sort(vec.begin(),vec.end(),[](const auto &a, const auto &b) {
            return a.second>b.second;
        });

        string result;
        for(const auto& p:vec) {
            result+=string(p.second,p.first);
        }

        return result;
    }
};