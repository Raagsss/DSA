class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++) {
            mp[arr[i]]++;
        }

        unordered_set<int> occurences;

        for(auto &it:mp) {
            if(occurences.count(it.second)) {
                return false;
            }
            occurences.insert(it.second);
        }

        return true;
    }
};